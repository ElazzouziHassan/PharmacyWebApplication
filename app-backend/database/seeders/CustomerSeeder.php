<?php

namespace Database\Seeders;

use App\Models\Order;
use App\Models\Customer;
use Illuminate\Database\Seeder;
use Illuminate\Database\Console\Seeds\WithoutModelEvents;

class CustomerSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    public function run(): void
    {
        $customers = Customer::factory(20)->create();

        $customers->each(function ($customer) {
            $customer->orders()->saveMany(Order::factory(10)->create([
                'customer_id' => $customer->id,
            ]));
        });
    }
}
