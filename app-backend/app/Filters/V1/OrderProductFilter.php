<?php


namespace App\Filters\V1;

use App\Filters\APIFilter;
use Illuminate\Http\Request;


class OrderProductFilter extends APIFilter {
    protected $safeParams = [
        'productId' => ['eq'],
        'orderId' => ['eq'],
        'quantity' => ['eq', 'lt', 'lte', 'gt', 'gte']
    ];

    protected $columnMap = [
        'productId' => 'product_id',
        'orderId' => 'order_id',
        'quantity' => 'quantity',
    ];

    protected $operatorMap = [
        'eq' => '=',
        'lt' => '<',
        'lte' => '<=',
        'gt' => '>',
        'gte' => '>=',
    ];

}
