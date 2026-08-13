def is_armstrong_number(number: int):
    digits = []
    for digit in str(number):
        digits.append(digit)
    exponecier_digit = len(digits)
    formatted_digits =[]
    for digit in digits:
        formatted_digits.append(int(digit) ** exponecier_digit)
    return sum(formatted_digits) == number
    
