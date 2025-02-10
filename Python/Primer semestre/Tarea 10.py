lista1 = []
num = int(input("Cuantas palabras se quiere agregar? "))
for x in range(0,num,1):
    palabra = input("Dame una palabra: ")
    if palabra not in lista1:
        lista1.append(palabra)
print(lista1)

lista2 = []
num1 = int(input("Cuantas palabras se quiere agregar? "))
for x in range(0,num1,1):
    palabra = input("Dame una palabra: ")
    if palabra not in lista2:
        lista2.append(palabra)
print(lista2)

Plista = []
P2lista = []
Plista.extend(lista1)
P2lista.extend(lista2)
print(Plista)
for x in range(0,len(lista1),1):
    for y in range(len(lista2)-1,-1,-1):
        if lista2[y] == lista1[x]:
            lista2.pop(y)

for x in range(0,len(P2lista),1):
    for y in range(len(Plista)-1,-1,-1):
        if Plista[y] == P2lista[x]:
            Plista.pop(y)
Lista_conjunto = []
Lista_conjunto.extend(lista1 + P2lista)
Lista_conjunto = [set(Lista_conjunto)]
print("Las palabras que están en la lista1, pero no en la segunda son: ", lista2)
print("Las palabras que están en la lista2, pero no en la segunda son: ", Plista)
print("Está es la lista conjunto", Lista_conjunto)

