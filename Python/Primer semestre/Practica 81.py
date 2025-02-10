calificaciones = {"P1":90,"P2":93,"P3":99}
print(calificaciones)
num = len(calificaciones)
print("Calificaciones tiene", num,"elementos")
del(calificaciones["P2"])
print(calificaciones)
calificaciones["P4"] = 97   #Si el objeto que se agrega es nuevo entonces sera agregado al final del diccionario
nombre = input("A que alumno eliminamos? ")
if nombre in calificaciones:
    del(calificaciones[nombre])
else:
    print(nombre,"no esta en el diccionario")
print(calificaciones)
calificaciones["P1"] = 93 #Si el objeto que se agrega ya exciste entonces sera sutituido por el ultimo
print(calificaciones)
