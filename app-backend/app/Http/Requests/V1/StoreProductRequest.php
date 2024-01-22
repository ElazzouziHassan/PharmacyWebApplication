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
            'label' => ['required', 'string', 'unique:products,label'],
            'description' => ['required', 'string'],
            'price' => ['required', 'numeric'],
            'image' => ['required', 'file', 'max:2048', 'mimes:jpg,png'],
            'categoryId' =>['required', 'exists:categories,id'] ,
            'userId' => ['required', 'exists:users,id']
        ];
    }

    protected function prepareForValidation()
    {
        $this -> merge([
            'category_id' => $this->categoryId,
            'user_id' => $this->userId,
        ]);
    }

}
