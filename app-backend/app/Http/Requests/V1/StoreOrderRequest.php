<?php

namespace App\Http\Requests\V1;

use Illuminate\Foundation\Http\FormRequest;

class StoreOrderRequest extends FormRequest
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
            'prescription' => ['required','file', 'max:2048', 'mimes:jpg,pdf,docx'] ,
            'customerId' => ['required', 'exists:customers,id'],
            'productId' => ['required', 'exists:customers,id'],
            'quantity' => ['required', 'integer', 'min:1']
        ];
    }

    protected function prepareForValidation()
    {
        $this -> merge([
            'customer_id' => $this -> customerId,
            'product_id' => $this -> productId ,
        ]);
    }
}
