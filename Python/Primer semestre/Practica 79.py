num = int(input("Cuantos números quieres: "))
lista1 = []
for x in range(1,num+1,1):
    numero = eval(input("Dame un número: "))
    lista1.append(numero)
print(lista1)
for x in range(0,num-1,):
    for y in range(x+1,num,1):
        if lista1[x] > lista1[y]:
            temp = lista1[y]
            lista1[x] = lista1[y]
            lista1[y] = temp
print(lista1)
