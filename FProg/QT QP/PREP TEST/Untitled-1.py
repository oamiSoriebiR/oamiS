def validate_cc(number):
    digits = [int(digit) for digit in str(number)]
    checksum = 0
    alternate = False
    for digit in reversed(digits):
        if alternate:
            product = digit * 2
            checksum += product // 10 + product % 10
        else:
            checksum += digit
        alternate = not alternate

    # Check if the checksum is valid
    if checksum % 10 == 0:
        return f"Card number {number} valid"
    else:
        return f"Card number {number} invalid (checksum {checksum % 10})"

# Test the function with your examples
print(validate_cc(4028743156781887))
print(validate_cc(4012888888881882))
print(validate_cc(4712812834781881))
print(validate_cc(4712818234781881))




