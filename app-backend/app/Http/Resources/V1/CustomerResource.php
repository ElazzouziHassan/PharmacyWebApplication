<?php

namespace App\Http\Resources\V1;

use Illuminate\Http\Request;
use Illuminate\Http\Resources\Json\JsonResource;

class CustomerResource extends JsonResource
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
            'cin' => $this -> cin,
            'firstName' => $this -> first_name,
            'lastName' => $this -> last_name,
            'adress' => $this -> adress,
            'email' => $this -> email,
            'phoneNumber' => $this -> phone_number,
            'orders' => OrderResource::collection($this -> whenLoaded('orders')),
        ];
    }
}
