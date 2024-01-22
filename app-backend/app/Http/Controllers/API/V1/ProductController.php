<?php

namespace App\Http\Controllers\API\V1;

use App\Models\Product;
use Illuminate\Http\Request;
use App\Filters\V1\ProductsFilter;
use App\Http\Controllers\Controller;
use App\Http\Requests\V1\StoreProductRequest;
use App\Http\Resources\V1\ProductResource;
use App\Http\Requests\V1\UpdateProductRequest;
use App\Http\Resources\V1\ProductCollection;
use GuzzleHttp\Handler\Proxy;

class ProductController extends Controller
{
    /**
     * Display a listing of the resource.
     */
    public function index(Request $request)
    {
        $filter = new ProductsFilter();
        $queryItems = $filter -> transform($request);

        $includeOrders = $request -> query('includeOrders');
        $products = Product::where($queryItems);

        if ($includeOrders) {
            $products = $products -> with('orders');
        }

        return new ProductCollection($products->paginate()->appends($request->query()));
    }

    /**
     * Store a newly created resource in storage.
     */
    public function store(StoreProductRequest $request)
    {
        // Move the uploaded image to the public path with the 'label' as the file name
        $imagePath = $request->file('image')->storeAs('images', $request['label'], 'public');

        // Update the 'image' field with the stored file name
        $request['image'] = $imagePath;

        return new ProductResource(Product::create($request->all()));
    }

    /**
     * Display the specified resource.
     */
    public function show(Product $product)
    {
        $includeOrders = request() -> query('includeOrders');

        if ($includeOrders) {
            return new ProductResource($product -> loadMissing('orders')) ;
        }
        return new ProductResource($product);

    }

    /**
     * Update the specified resource in storage.
     */
    public function update(UpdateProductRequest $request, Product $product)
    {
        //
    }

    /**
     * Remove the specified resource from storage.
     */
    public function destroy(Product $product)
    {
        //
    }
}
