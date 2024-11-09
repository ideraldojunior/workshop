def fatorial(num: int) -> int:
    """
    Calcula e retorna o fatorial de *num*
    """
    assert num >= 0

    if num > 0:
        fatorial = num * fatorial(num - 1)
    return fatorial
