<?php

namespace App\Http\Controllers\API\V1;

use App\Models\User;
use Illuminate\Http\Request;
use App\Filters\V1\UsersFilter;
use App\Http\Controllers\Controller;
use Illuminate\Support\Facades\Hash;
use App\Http\Resources\V1\UserResource;
use App\Http\Resources\V1\UserCollection;
use App\Http\Requests\V1\StoreUserRequest;
use App\Http\Requests\V1\UpdateUserRequest;

class UserController extends Controller
{
    /**
     * Display a listing of the resource.
     */
    public function index(Request $request)
    {
        $filter = new UsersFilter();
        $queryItems = $filter -> transform($request);

        $includeProducts = $request -> query('includeProducts');
        $users = User::where($queryItems);

        if ($includeProducts) {
            $users = $users -> with('products');
        }

        return new UserCollection($users->paginate()->appends($request->query()));
    }

    /**
     * Store a newly created resource in storage.
     */
    public function store(StoreUserRequest $request)
    {
        $validatedData = $request->validated();
        $validatedData['password'] = Hash::make($request->input('password'));

        return new UserResource(User::create($validatedData));
    }

    /**
     * Display the specified resource.
     */
    public function show(User $user)
    {
        $includeProducts = request() -> query('includeProducts');

        if ($includeProducts) {
            return new UserResource($user -> loadMissing('products'));
        }

        return new UserResource($user);
    }

    /**
     * Update the specified resource in storage.
     */
    public function update(UpdateUserRequest $request, User $user)
    {
        //
    }

    /**
     * Remove the specified resource from storage.
     */
    public function destroy(User $user)
    {
        //
    }
}
