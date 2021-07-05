"""
    This is a block
    of comments
    more than just one line
"""

#This is a comment
print("Hello, world!\n\n")

if 10 > 2:
    print("Ten is greater then two!!\n\n") #this also is a comment

### Creating Variables
    print("Creating Variables: ")
    x = 5           #this time is integer
    y = "John"      #this tipe is string
    print("\tx: ", x)
    print("\ty: ", y)

### Casting Variables
    print("\n\nCasting Variables x, y, z")
    print("\tX = str(3)\tcast from integer to string, x will be '3'")
    x = str(3)      #cast from integer to string, x will be '3'
    print("\tY = int(3)\tcast from integer to string, x will be 3")
    y = int(3)      #cast from integer to integer, y will be '3'
    print("\tZ = float(3)\tcast from integer to float, x will be 3.0")
    z = float(3)    #cast from integer to float z will be 3.0

### Get the type
    print("\n\nGetting the type of x and y")
    print("\tThe actual type of x is: ", type(x))
    print("\tThe actual type of y is: ", type(y))
    print("\tThe actual type of z is: ", type(z))


### Functions
    print("\n\nVarible global G = global")
    g = "Global"
    def myLocalFunc():
        g = "Local"
        print("\tValue of G is = " + g)

    myLocalFunc()
    print("\tValue of G is = " + g)

### Data Types
    print("Data types:\n")
    # This data type is String.
    a = "Hello world" ;  print("\t", a, "\n\tThis type is: ", type(a), "\n\n")

    # This data type is Integer.
    b = 20 ;  print("\t", b, "\n\tThis type is: ", type(b), "\n\n")

    # This data type is Float.
    c = 20.5 ;  print("\t", c, "\n\tThis type is: ", type(c), "\n\n")

    # This data type is complex
    d = 1j ;  print("\t", d, "\n\tThis type is: ", type(d), "\n\n")

    # This data type is List
    e = ["apple", "banana", "cherry"] ;  print("\t", e, "\n\tThis type is: ", type(e), "\n\n")

    # This data type is Tuple
    f = ("apple", "banana", "cherry") ;  print("\t", f, "\n\tThis type is: ", type(f), "\n\n")

    # This data type is Set
    g = {"apple", "banana", "cherry", "banana"} ;  print("\t", g, "\n\tThis type is: ", type(g), "\n\n") # En este tipo no puede haber elementos repetidos

    # This data type is Dict
    h = {"apple": 1000, "banana" : "amarillo", "cherry" : 5000} ;  print("\t", h, "\n\tThis type is: ", type(h), "\n\n")

    # This data type is Range
    i = range(0, 6) ;  print("\t", i, "\n\tThis type is: ", type(i), "\n\n")

    # This data type is Frozenset
    j = frozenset({"apple", "banana", "cherry", "banana"}) ;  print("\t", j, "\n\tThis type is: ", type(j), "\n\n")

    # This data type is Bool
    k = True ; print("\t", k, "\n\tThis type is: ", type(k), "\n\n")

    # This data type is Bytes
    l = b"Hello" ; print("\t", l, "\n\tThis type is: ", type(l), "\n\n")

    # This data type is bytearray
    m = bytearray(5) ; print("\t", m, "\n\tThis type is: ", type(m), "\n\n")

    # This data type is memoryview
    n = memoryview(bytes(5)) ; print("\t", n, "\n\tThis type is: ", type(n), "\n\n")
