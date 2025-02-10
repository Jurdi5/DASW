"""ENTRADA:
numero de alumnos
Calificaciones de cada alumno
Proceso
Pedir las calificaciones
Validar las calificaciones(0-100)
Salida
Promedio de calificaciones
"""
total = 0
nalumnos = int(input("Cuantos alumnos son: "))
for cont in range(1, nalumnos+1,1):
    calificación = eval(input("Dame la calificación: "))
    while calificación < 0 or calificación > 100:
        print("Error, calificación incorrecta")
        calificación = eval(input("Dame la calificación: "))
    total = total + calificación
promedio = total/nalumnos
print("Promedio grupo", promedio)

