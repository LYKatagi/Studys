def parse_binary(binary_string):
    
    for digit in binary_string:
        if digit not in "01":
            raise ValueError("Invalid binary literal: " + binary_string)

    result = 0

    for digit in binary_string:
        result = result * 2 + int(digit)

    return result