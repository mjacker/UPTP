def buble(lista):
    for i in (range(0, len(lista))):
        for j in (range(i + 1, len(lista))):
            if lista[i] > lista[j]:
                temp = lista[j]
                lista[j] = lista[i]
                lista[i] = temp
    return lista


def insertion(lista):
    if len(lista) == 0:
        print("La lista está vacía.")
    else:
        #for i in (range(1, len(lista))):
        i = 1
        j = 1
        while i < len(lista):
            pivot = lista[i]
            while i > 0:
                if lista[i-1] > pivot:
                    lista[i] = lista[i-1]
                    lista[i-1] = pivot
                i = i - 1
            j = j + 1
            i = j
    return lista


def bublecolor(lista):
    for i in (range(0, len(lista))):
        for j in (range(i + 1, len(lista))):
            imprimir_lista_colores(lista, i, j, 1)
            if lista[i] > lista[j]:
                temp = lista[j]
                lista[j] = lista[i]
                lista[i] = temp
                imprimir_lista_colores(lista, i, j, 2)
            # print("\nlista[{}] = {} with lista[{}] = {}\n\t".format(i, lista[i], j, lista[j]))
            print("")
            # j = j + 1
        # i = i + 1
    return lista


def insertioncolor(lista):
    if len(lista) == 0:
        print("La lista está vacía.")
    else:
        # pivot = lista[0]
        for i in (range(1, len(lista))):
            pivot = lista[i]
            print("\nPivot: ", pivot)
            # print("for i: ", i)
            while i > 0:
                # print("While i: ", i)
                if lista[i-1] > pivot:
                    imprimir_lista_colores(lista, i-1, i, 1)
                    # temp = lista[i-1]
                    lista[i] = lista[i-1]
                    lista[i-1] = pivot
                    imprimir_lista_colores(lista, i-1, i, 2,)
                    print(" ")
                i = i - 1
    return lista


def imprimir_lista_colores(lista, a, b, c):
    if c == 1:
        print("")
        for i in range(len(lista)):
            if i == a:
                print("\u001b[31m ", lista[i],  end="\u001b[0m -")
            if i == b:
                print("\u001b[34m ", lista[i],  end="\u001b[0m -")
            if i != a and i != b and i != (len(lista)-1):
                print(" ", lista[i], end="\u001b[0m -")
            if i == (len(lista)-1) and a != (len(lista)-1) and b != (len(lista)-1):
                print(" ", lista[i], end="\u001b[0m")
    if c == 2:
        print("")
        for i in range(len(lista)):
            if i == a:
                print("\u001b[32m ", lista[i],  end="\u001b[0m -")
            if i == b:
                print("\u001b[32m ", lista[i],  end="\u001b[0m -")
            if i != a and i != b and i != (len(lista)-1):
                print(" ", lista[i], end="\u001b[0m -")
            if i == (len(lista)-1) and a != (len(lista)-1) and b != (len(lista)-1):
                print(" ", lista[i], end="\u001b[0m")


def insertion_dense(lista):
    if len(lista) > 1:
        lista[1:] = insertion_dense(lista[1:])
        index = 0
        pivot = ""
        while index < len(lista)-1 and lista[index] > lista[index+1]:
            pivot = lista[index]
            lista[index] = lista[index+1]
            lista[index+1] = pivot
            index += 1
    return lista

