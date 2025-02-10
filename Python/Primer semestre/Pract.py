nnumero = int(input("Cuantos numero son: "))
nmayor = 0
repeticion = 0
numero1 = 0
for x in range(nnumero):
    numero = int(input("Cual es tu número? "))
    if numero1 == 0:
        numero1 = numero
    else:
        if numero > numero1:
            print("tu número es mayor")
            nmayor += 1
            numero1 = numero
print("Los números que son mayores a los anteriores son", nmayor)
