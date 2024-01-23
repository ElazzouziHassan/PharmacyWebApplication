<?php

namespace App\Http\Requests\V1;

use App\Rules\CinValidationRule;
use App\Rules\PhoneNumberValidationRule;
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
            'firstName' => ['required', 'string'] ,
            'lastName' => ['required', 'string'] ,
            'adress' => ['required', 'string'] ,
            'email' => ['required', 'email'] ,
            'phoneNumber' => ['required', new PhoneNumberValidationRule]
        ];
    }

    protected function prepareForValidation()
    {
        $this -> merge([
            'first_name' => $this -> firstName,
            'last_name' => $this -> lastName ,
            'phone_number' => $this -> phoneNumber
        ]);
    }
}
