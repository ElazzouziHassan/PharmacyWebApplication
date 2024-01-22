<?php

namespace App\Http\Resources\V1;

use App\Models\Order;
use Illuminate\Http\Request;
use Illuminate\Http\Resources\Json\JsonResource;

class OrderResource extends JsonResource
{
    /**
     * Transform the resource into an array.
     *
     * @return array<string, mixed>
     */
    public function toArray(Request $request): array
    {
        return [
            'id' => $this -> id,
            'prescription' => $this -> prescription,
            'customerId' => $this -> customer_id,
            'products' => ProductResource::collection($this -> whenLoaded('products')),
            'totalPrice' => $this -> getTotal()
        ];
    }
}
