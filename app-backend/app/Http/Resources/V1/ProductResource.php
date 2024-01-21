<?php

namespace App\Http\Resources\V1;

use Illuminate\Http\Request;
use Illuminate\Http\Resources\Json\JsonResource;

class ProductResource extends JsonResource
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
            'label' => $this -> label,
            'description' => $this -> description,
            'price' => $this -> price,
            'image' => $this -> image,
            'categoryId' => $this -> category_id,
            'userId' => $this -> user_id,
            'orders' => OrderResource::collection($this -> whenLoaded('orders')),
        ];
    }
}
