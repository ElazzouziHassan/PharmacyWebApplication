<?php


namespace App\Filters\V1;

use App\Filters\APIFilter;
use Illuminate\Http\Request;


class ProductsFilter extends APIFilter {
    protected $safeParams = [
        'label' => ['eq'],
        'description' => ['eq'],
        'price' => ['eq'],
        'image' => ['eq'],
        'categoryId' => ['eq'],
        'userId' => ['eq']
    ];

    protected $columnMap = [
        'label' => 'label',
        'description' => 'description',
        'price' => 'price',
        'image' => 'image',
        'categoryId' => 'category_id',
        'userId' => 'user_id'
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
