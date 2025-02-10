lista = []
num = int(input("Cuantas palabras se quiere agregar? "))
for x in range(0,num,1):
    palabra = input("Dame una palabra: ")
    lista.append(palabra)
print(lista)

palabra = input("palabra a borrar: ")
if palabra not in lista:
    print(palabra, "no está en la lista")
else:
    for x in range(len(lista)-1,-1,-1):
        if palabra == lista[x]:
            lista.pop(x)
print(lista)
