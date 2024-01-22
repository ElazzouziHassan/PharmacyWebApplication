<?php

namespace Database\Seeders;

// use Illuminate\Database\Console\Seeds\WithoutModelEvents;

use App\Models\User;
use App\Models\Order;
use App\Models\Product;
use App\Models\Category;
use App\Models\Customer;
use Illuminate\Database\Seeder;

class DatabaseSeeder extends Seeder
{
    /**
     * Seed the application's database.
     */
    public function run(): void
    {
        User::factory()->count(5)->create();
        Category::factory()->count(5)->create();
        Product::factory()
            ->count(20)
            ->create(['category_id' => Category::inRandomOrder()->first()->id, 'user_id' => User::inRandomOrder()->first()->id]);
        Customer::factory()
        ->has(Order::factory()->count(4)->hasAttached(Product::inRandomOrder()
        ->limit(rand(1, 5))->get(),['quantity' => rand(1,10)]))
        ->count(5)->create();
    }
}
