#Utilizar While para imprimir Greetings

def Greetings():
    Count = 3
    while (Count > 0):
        print("hello")
        Count = Count - 1

### Aqui empieza el programa principal
## Llamando a la funcion Greetings
Greetings()

### Ingresar un valor a una variable por teclado
name = input("Please enter your name: ")
age = int(input("How old are you, {0}".format(name)))
print(age)


## Vectores en python
available_exits = ["hora", "dias", "mes", "hola"]

chosen_exit = ""
print("Words availables: hola, dias, mes, hola")
while chosen_exit not in available_exits:
    chosen_exit = input("Please choose a word: ")

print("Are not you glad you got out of the loop?")

## usar un vector
Array = [11,23,58,31,56,77,43,12,65,19]
print(Array)

def funncion_imprimir(Array, numero):
    print(Array[4])
    print(numero)
funncion_imprimir([11,23,58,31,56,77,43,12,65,19], 31)

def funcion_sumar(Array, numero):
    suma = Array[4] + numero
    return suma
print(funcion_sumar([11,23,58,31,56,77,43,12,65,19], 31))

## tarea Sequential Search
