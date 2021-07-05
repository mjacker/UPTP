# @authohr Jaime David Colman Fleitas - IFE
def insertion(lista):
    if len(lista) == 0:
        print("This list is void.")
    else:
        N = 2
        while (N < len(lista)):
            pivot = lista[N]
            print("\nBorrado: ", lista[N])
            del lista[N]
            lista.insert(N, " ")
            break

            N = N + 1

    return lista


lista = [7,2,4,3,1,5]
# lista = ["Naruto", "Kakashi", "Sasuke", "Itachi", "Choji", "Danzo", "Hiruzen", "Asuma", "Deidara", "Kiba", "Hinata", "Sakura", "Gaara", "Shikamaru", "Jiraiya"]

print(insertion(lista))
