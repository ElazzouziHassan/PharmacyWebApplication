<?php


namespace App\Filters\V1;

use App\Filters\APIFilter;
use Illuminate\Http\Request;


class UsersFilter extends APIFilter {
    protected $safeParams = [
        'name' => ['eq'],
        'email' => ['eq'],
        'password' => ['eq']
    ];

    protected $columnMap = [
        'name' => 'name',
        'email' => 'email',
        'password' => 'password',
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
