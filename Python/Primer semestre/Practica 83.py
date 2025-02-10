cadena = input("Dame una frase: ")
cadena = cadena.replace(" ","")
print(cadena)
diccionario = {}
for caracter in cadena:
    if caracter in diccionario:
        diccionario[caracter] += 1
    else:
        diccionario[caracter] = 1
print(diccionario)
