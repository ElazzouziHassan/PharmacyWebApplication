<?php

namespace App\Http\Requests\V1;

use App\Rules\CinValidationRule;
use Illuminate\Foundation\Http\FormRequest;

class StoreCustomerRequest extends FormRequest
{
    /**
     * Determine if the user is authorized to make this request.
     */
    public function authorize(): bool
    {
        return true;
    }

    /**
     * Get the validation rules that apply to the request.
     *
     * @return array<string, \Illuminate\Contracts\Validation\ValidationRule|array<mixed>|string>
     */
    public function rules(): array
    {
        return [
            'cin' => ['required', new CinValidationRule] ,
            'first_name' => ['required', 'string'] ,
            'last_name' => ['required', 'string'] ,
            'adress' => ['required', 'string'] ,
            'email' => ['required', 'email'] ,
            'phone_number' => ['required', 'phone']
        ];
    }
}
