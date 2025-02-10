"""Se requiere determinar cuál de tres
cantidades proporcionadas es la mayor.
Realizar su respectivo algoritmo y
representarlo mediante un diagrama de flujo y
programa en Python"""
A = eval(input("Dame un número"))
B = eval(input("Dame un número"))
C = eval(input("Dame un número"))
if A > B :
    if A > C:
        print(A, "es el mayor")
    else:
        print(C, "Es mayor")
else:
    if B > C:
        print(B, "es mayor")
    else:
        print(C, "es mayor")

