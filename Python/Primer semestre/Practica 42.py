precio = eval(input("Dame el precio: "))

while precio < 0:
    print("Error, el precio no puede ser negativo.")
    precio = eval(input("Dame el precio: "))

total = precio * 1.16
print("Total: ", total)
