lista1 = [5,55,0,6,8,4,7]
print(lista1)
lista1.insert(4,6)
print(lista1)

posicion = int(input("en que posición quieres el número: "))
while posicion >= len(lista1):
    print("Error, inexistente")
    posicion = int(input("en que posición quieres agregar el número: "))
elemento = eval(input("dame un número: "))
lista1.insert(posicion,elemento)
print(lista1)
