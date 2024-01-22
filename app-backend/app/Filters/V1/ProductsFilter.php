<?php


namespace App\Filters\V1;

use App\Filters\APIFilter;
use Illuminate\Http\Request;


class ProductsFilter extends APIFilter {
    protected $safeParams = [
        'label' => ['eq'],
        'description' => ['eq'],
        'price' => ['eq', 'lt', 'lte', 'gt', 'gte'],
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

}
