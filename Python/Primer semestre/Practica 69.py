frase = ("En algun lugar de un gran pais, olvidaron contruir, un lugar donde no queme el sol")

lista1 = frase.split()
print(lista1)

lista2 = frase.split(sep="n")
print(lista2)

lista3 = frase.split(maxsplit=4)
print(lista3)
