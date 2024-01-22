<?php

namespace App\Http\Controllers\API\V1;

use App\Models\OrderProduct;
use Illuminate\Http\Request;
use App\Http\Controllers\Controller;
use App\Filters\V1\OrderProductFilter;
use App\Http\Requests\V1\StoreOrderProductRequest;
use App\Http\Resources\V1\OrderProductResource;
use App\Http\Requests\V1\UpdateOrderProductRequest;
use App\Http\Resources\V1\OrderProductCollection;

class OrderProductController extends Controller
{
    /**
     * Display a listing of the resource.
     */
    public function index(Request $request)
    {
        $filter = new OrderProductFilter();
        $queryItems = $filter -> transform($request);

        $orderProduct = OrderProduct::where($queryItems);

        return new OrderProductCollection($orderProduct->paginate()->appends($request->query()));

    }

    /**
     * Store a newly created resource in storage.
     */
    public function store(StoreOrderProductRequest $request)
    {
        //
    }

    /**
     * Display the specified resource.
     */
    public function show(OrderProduct $orderProduct)
    {
        return new OrderProductResource($orderProduct);
    }

    /**
     * Update the specified resource in storage.
     */
    public function update(UpdateOrderProductRequest $request, OrderProduct $orderProduct)
    {
        //
    }

    /**
     * Remove the specified resource from storage.
     */
    public function destroy(OrderProduct $orderProduct)
    {
        //
    }
}
