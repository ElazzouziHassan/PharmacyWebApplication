<?php

namespace Database\Seeders;

use App\Models\User;
use App\Models\Product;
use Illuminate\Database\Seeder;
use Illuminate\Database\Console\Seeds\WithoutModelEvents;

class UserSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    public function run(): void
    {
        $users = User::factory(10)->create();

        $users->each(function ($user) {
            $user->products()->saveMany(Product::factory(10)->create([
                'user_id' => $user->id,
            ]));
        });
    }
}
