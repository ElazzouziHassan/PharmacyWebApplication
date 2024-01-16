<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class Order extends Model
{
    use HasFactory;

    protected $fillable = ['prescription', 'customer_id'];

    public function customer(){
        return $this->belongsTo(Customer::class);
    }

    public function products(){
        return $this->belongsToMany(Product::class)
        ->withPivot('quantity');
    }

    public function getTotal(){

        $total = 0 ;
        foreach ($this->products as $product) {
            $total += $product->price * $product->pivot->quantity;
        }
        return $total;
    }

}
