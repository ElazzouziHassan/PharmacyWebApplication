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

}
