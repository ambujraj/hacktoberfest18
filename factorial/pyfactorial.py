class Factorial:

    """
    Usage:
    >>> print(Factorial.get_factorial(5))
    [Output]: 120
    """

    @staticmethod
    def get_factorial(number: int) -> int:
        if number == 0:
            return 1
        else:
            return number * Factorial.get_factorial(number - 1)
