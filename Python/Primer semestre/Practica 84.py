"""Pedir una lista de palabras y poner cuantas veces se reite un palabra"""
lista = []
num = int(input("Cuantas palabras se quiere agregar? "))
for x in range(0,num,1):
    palabra = input("Dame una palabra: ")
    lista.append(palabra)
print(lista)

palabra = input("Dame la palabra que quieras buscar: ")
contador = 0
for x in lista:
    if x == palabra:
        contador = contador + 1

print(palabra, "esta",contador,"veces en la lista")
