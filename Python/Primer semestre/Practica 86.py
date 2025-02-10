lista = []
num = int(input("Cuantas palabras se quiere agregar? "))
for x in range(0,num,1):
    palabra = input("Dame una palabra: ")
    lista.append(palabra)
print(lista)

palabra = input("dime la palabra que vas a quitar: ")
palabra1 = input("Dime la palabra que vas a agregar: ")

for x in range(0,num,1):
    if palabra == lista[x]:
        lista[x] = palabra1
print(lista)
