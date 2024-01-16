<?php

namespace Database\Seeders;

use App\Models\Order;
use App\Models\Product;
use Illuminate\Database\Seeder;
use Illuminate\Database\Console\Seeds\WithoutModelEvents;

class OrderSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    public function run(): void
    {
        Order::factory(15)->create()->each(function ($order) {
            $products = Product::factory(5)->create();

            $order->products()->attach(
                $products->pluck('id')->toArray(),
                ['quantity' => rand(1, 10)] // Provide a value for the quantity column
            );
        });
    }
}
