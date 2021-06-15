#####---Sequential Search Algorithm---#####

##Funtions declarations:
def Search(List, Target):
    if (not(List_is_empty(List))):
        Searh_failure()
    else:
        pos = 0
        while pos < len(List):
            if Target == List[pos]:
                return pos + 1
            pos = pos + 1

def List_is_empty(List):
     if len(List)>0:
         return 1
     else:
        print("")
        return 0

def Searh_failure():
    print("La lista está vacía. Búscqueda fallida.")




#####--- Main Funcion start here ---#####

## Examples List: (choose one line)
List = [11,23,58,31,56,77,43,12,65,19]
#List = []

## Number to search in the list
num = 0     ##Initializate num as integer
##num = 23  ##Manual input value
num = int(input("Input a integer value to search in the list: "))  ##Input by keyboard

## Printing Interface:
print("\nSequential search on List: ", List)
print("\nTrying to find the value: ", num)

print("\n\nExist num on List in position: ",  Search(List, num))
