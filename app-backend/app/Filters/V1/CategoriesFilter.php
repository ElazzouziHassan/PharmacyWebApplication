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
    
}
