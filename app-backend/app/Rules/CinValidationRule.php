<?php

namespace App\Rules;

use Closure;
use Illuminate\Contracts\Validation\ValidationRule;

class CinValidationRule implements ValidationRule
{
    /**
     * Run the validation rule.
     *
     * @param  \Closure(string): \Illuminate\Translation\PotentiallyTranslatedString  $fail
     */
    public function validate(string $attribute, mixed $value, Closure $fail): void
    {
        if (preg_match('/^[A-Z]{1,2}\d{1,8}$/', strtoupper($value)) !== 1) {
            $fail('The :attribute must be a valid CIN number.');
        }
    }

    public function message()
    {
        return 'The :attribute must be a valid CIN number.';
    }
}
