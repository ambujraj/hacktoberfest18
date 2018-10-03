# Validates if a number is a valid brazilian cellphone number
def is_valid_number(num):
    try:
        num = int(num)
    except ValueError:
        return False
    if len(str(num)) == 8 or len(str(num)) == 9:
        return True
    return False
