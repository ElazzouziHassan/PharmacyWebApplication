<?php

namespace App\Http\Controllers\API\V1;

use App\Models\Category;
use Illuminate\Http\Request;
use App\Filters\V1\CategoriesFilter;
use App\Http\Controllers\Controller;
use App\Http\Requests\StoreCategoryRequest;
use App\Http\Resources\V1\CategoryResource;
use App\Http\Requests\UpdateCategoryRequest;
use App\Http\Resources\V1\CategoryCollection;

class CategoryController extends Controller
{
    /**
     * Display a listing of the resource.
     */
    public function index(Request $request)
    {
        $filter = new CategoriesFilter();
        $queryItems = $filter -> transform($request);

        $includeProducts = $request -> query('includeProducts');
        $categories = Category::where($queryItems);

        if ($includeProducts) {
            $categories = $categories -> with('products');
        }
        return new CategoryCollection($categories->paginate()->appends($request->query()));
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
    public function store(StoreCategoryRequest $request)
    {
        //
    }

    /**
     * Display the specified resource.
     */
    public function show(Category $category)
    {
        $includeProducts = request() -> query('includeProducts');

        if ($includeProducts) {
           return new CategoryResource($category-> loadMissing('products')) ;
        }

        return new CategoryResource($category);
    }

    /**
     * Show the form for editing the specified resource.
     */
    public function edit(Category $category)
    {
        //
    }

    /**
     * Update the specified resource in storage.
     */
    public function update(UpdateCategoryRequest $request, Category $category)
    {
        //
    }

    /**
     * Remove the specified resource from storage.
     */
    public function destroy(Category $category)
    {
        //
    }
}
