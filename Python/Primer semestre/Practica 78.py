lista1 = [4,35,3,4,5,6,6]
elemento = eval(input("Que número quieres eliminar: "))
if elemento in lista1:
    posicion = lista1.index(elemento)
    lista1.pop(posicion)
else:
    while elemento in lista1:
        posicion = lista1.index(elemento)
        lista1.pop(posicion)
print(lista1)
