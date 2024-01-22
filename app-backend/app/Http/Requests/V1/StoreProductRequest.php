<?php

namespace App\Http\Requests\V1;

use Illuminate\Foundation\Http\FormRequest;

class StoreProductRequest extends FormRequest
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
            'label' => ['required', 'string'],
            'description' => ['required', 'string'],
            'price' => ['required', 'double'],
            'image' => ['required','image', 'max:2048', 'mimes:jpg,png'],
            'category_id' =>['required', 'exists:categories,id'] ,
            'user_id' => ['required', 'exists:users,id']
        ];
    }
}
