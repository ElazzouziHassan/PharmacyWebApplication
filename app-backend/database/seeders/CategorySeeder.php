<?php

namespace Database\Seeders;

use App\Models\Product;
use App\Models\Category;
use Illuminate\Database\Seeder;
use Illuminate\Database\Console\Seeds\WithoutModelEvents;

class CategorySeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    public function run(): void
    {
        $categories = Category::factory(10)->create();

        $categories->each(function ($category) {
            $category->products()->saveMany(Product::factory(10)->create([
                'category_id' => $category->id,
            ]));
        });
    }
}
