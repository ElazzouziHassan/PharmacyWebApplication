<?php


namespace App\Filters\V1;

use App\Filters\APIFilter;
use Illuminate\Http\Request;


class OrdersFilter extends APIFilter {
    protected $safeParams = [
        'prescription' => ['eq'],
        'customerId' => ['eq'],
    ];

    protected $columnMap = [
        'prescription' => 'prescription',
        'customerId' => 'customer_id'
    ];

    protected $operatorMap = [
        'eq' => '=',
        'lt' => '<',
        'lte' => '<=',
        'gt' => '>',
        'gte' => '>=',
    ];

}
