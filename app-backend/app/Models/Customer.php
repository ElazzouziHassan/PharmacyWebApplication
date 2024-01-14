<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class Customer extends Model
{
    use HasFactory;

    protected $fillable = ['cin', 'first_name', 'last_name', 'adress', 'email', 'phone_number'];

    public function orders(){
        return $this->hasMany(Order::class);
    }

}
