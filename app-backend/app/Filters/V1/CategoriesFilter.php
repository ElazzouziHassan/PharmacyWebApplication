<?php


namespace App\Filters\V1;

use App\Filters\APIFilter;
use Illuminate\Http\Request;


class CategoriesFilter extends APIFilter {
    protected $safeParams = [
        'title' => ['eq'],
        'description' => ['eq']
    ];

    protected $columnMap = [
        'title'=> 'title',
        'description' => 'description'
    ];

    protected $operatorMap = [
        'eq' => '=',
        'lt' => '<',
        'lte' => '<=',
        'gt' => '>',
        'gte' => '>=',
    ];

    public function transform(Request $request) {
        $eloQuery = [];

        foreach ($this -> safeParams as $param => $operators){
            $query = $request -> query($param);

            if (!isset($query)) {
                continue;
            }

            $column = $this -> columnMap[$param] ?? $param;

            foreach ($operators as $operator) {
                if (isset($query[$operator])) {
                    $eloQuery[] = [$column, $this -> operatorMap[$operator], $query[$operator]];
                }
            }
        }

        return $eloQuery;
    }
}
