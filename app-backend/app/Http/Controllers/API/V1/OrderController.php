<?php

namespace App\Http\Controllers\API\V1;

use App\Models\Order;
use Illuminate\Http\Request;
use App\Filters\V1\OrdersFilter;
use App\Http\Controllers\Controller;
use App\Http\Requests\V1\StoreOrderRequest;
use App\Http\Resources\V1\OrderResource;
use App\Http\Requests\V1\UpdateOrderRequest;
use App\Http\Resources\V1\OrderCollection;

class OrderController extends Controller
{
    /**
     * Display a listing of the resource.
     */
    public function index(Request $request)
    {
        $filter = new OrdersFilter();
        $queryItems = $filter -> transform($request);

        $includeProducts = $request -> query('includeProducts');
        $orders = Order::where($queryItems);

        if ($includeProducts) {
            $orders = $orders -> with('products');
        }

        return new OrderCollection($orders->paginate()->appends($request->query()));

    }

    /**
     * Store a newly created resource in storage.
     */
    public function store(StoreOrderRequest $request)
    {
        $request['prescription']->move(public_path('files'), $request['order_id']);
        $request['prescription'] = $request['order_id'];

        return new OrderResource(Order::create($request->all()));
    }

    /**
     * Display the specified resource.
     */
    public function show(Order $order)
    {
        $includeProducts = request() -> query('includeProducts');

        if ($includeProducts) {
            return new OrderResource($order -> loadMissing('products')) ;
        }

        return new OrderResource($order);
    }

    /**
     * Update the specified resource in storage.
     */
    public function update(UpdateOrderRequest $request, Order $order)
    {
        //
    }

    /**
     * Remove the specified resource from storage.
     */
    public function destroy(Order $order)
    {
        //
    }
}
