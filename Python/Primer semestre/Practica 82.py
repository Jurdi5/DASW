calificaciones = {"P1":90,"P2":93,"P3":99,"P4":100}
llaves = calificaciones.keys()
print(llaves)
valores = calificaciones.values()
print(valores)
calificaciones = calificaciones.get("P2")
print(calificaciones)
elemento = calificaciones.popitem()

print(elemento)
print(calificaciones)
