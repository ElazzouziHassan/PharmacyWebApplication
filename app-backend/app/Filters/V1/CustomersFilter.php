<?php


namespace App\Filters\V1;

use App\Filters\APIFilter;
use Illuminate\Http\Request;


class CustomersFilter extends APIFilter {
    protected $safeParams = [
        'cin' => ['eq', 'like'],
        'first_name' => ['eq'],
        'last_name' => ['eq'],
        'adress' => ['eq'],
        'email' => ['eq'],
        'phone_number' => ['eq']
    ];

    protected $columnMap = [
        'cin' => 'cin',
        'firstName' => 'first_name',
        'lastName' => 'last_name',
        'adress' => 'adress',
        'email' => 'email',
        'phoneNumber' => 'phone_number'
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
