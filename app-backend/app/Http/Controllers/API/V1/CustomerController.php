<?php

namespace App\Http\Controllers\API\V1;

use App\Models\Customer;
use Illuminate\Http\Request;
use App\Http\Controllers\Controller;
use App\Http\Requests\StoreCustomerRequest;
use App\Http\Resources\V1\CustomerResource;
use App\Http\Requests\UpdateCustomerRequest;
use App\Http\Resources\V1\CustomerCollection;
use App\Filters\V1\CustomersFilter;

class CustomerController extends Controller
{
    /**
     * Display a listing of the resource.
     */
    public function index(Request $request)
    {
        $filter = new CustomersFilter();
        $queryItems = $filter -> transform($request);

        $includeOrders = $request -> query('includeOrders');
        $customers = Customer::where($queryItems);

        if ($includeOrders) {
            $customers = $customers -> with('orders');
        }

        return new CustomerCollection($customers->paginate()->appends($request->query()));
    }

    /**
     * Show the form for creating a new resource.
     */
    public function create()
    {
        //
    }

    /**
     * Store a newly created resource in storage.
     */
    public function store(StoreCustomerRequest $request)
    {
        //
    }

    /**
     * Display the specified resource.
     */
    public function show(Customer $customer)
    {
        $includeOrders = request() -> query('includeOrders');

        if ($includeOrders) {
            return new CustomerResource($customer-> loadMissing('orders')) ;
        }

        return new CustomerResource($customer);
    }

    /**
     * Show the form for editing the specified resource.
     */
    public function edit(Customer $customer)
    {
        //
    }

    /**
     * Update the specified resource in storage.
     */
    public function update(UpdateCustomerRequest $request, Customer $customer)
    {
        //
    }

    /**
     * Remove the specified resource from storage.
     */
    public function destroy(Customer $customer)
    {
        //
    }
}
