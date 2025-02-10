lista = []
num = int(input("Cuantas palabras se quiere agregar? "))
for x in range(0,num,1):
    palabra = input("Dame una palabra: ")
    lista.append(palabra)
print(lista)
for x in range(num-1,-1,-1):
    print(lista[x],end=",")
