lista1 = []
num = int(input("Cuantas palabras se quiere agregar? "))
for x in range(0,num,1):
    palabra = input("Dame una palabra: ")
    lista1.append(palabra)
print(lista1)

lista2 = []
num = int(input("Cuantas palabras se quiere agregar? "))
for x in range(0,num,1):
    palabra = input("Dame una palabra: ")
    lista2.append(palabra)
print(lista2)

for x in range(0,len(lista1),1):
    for y in range(len(lista2)-1,-1,-1):
        if lista2[y] == lista1[x]:
            lista2.pop(y)
print(lista2)
