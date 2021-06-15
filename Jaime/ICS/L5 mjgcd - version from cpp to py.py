## This program compute the gcd of two numbers.

def gdc(x, y):
    aux = x
    if (x < y):
        x = y
        y = aux
    print("x:", x)
    print("y:", y)

    resto = x % y
    cosiente = (x-resto)/y

    if ( resto == 0):
        resultado = y
    ##else:
    ##    return 0

    while (resto>0):
        resto = x % y
        cosiente = (int((x-resto)/y))

        print("Resto: {0}, Cosiente: {1}", resto, cosiente)

        if ( resto == 0):
            resultado = y
        ##else:
            ## hacer nada 0

        x = y
        y = resto

    print("resultado", resultado)
    return resultado

## Aqui empieza el programa principal
print("\n\nAqui empieza el programa principal")
print("El gdc es: ")
print(gdc(1701, 3768))
