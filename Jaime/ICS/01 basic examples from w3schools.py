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
    def myfunc():
        g = "Local"
        print("\tValue of G is = " + g)


    myfunc()
    print("\tValue of G is = " + g)
