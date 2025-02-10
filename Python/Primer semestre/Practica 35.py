"""El director de una escuela está organizando un viaje de
estudios, y requiere determinar cuánto debe cobrar a
cada alumno y cuánto debe pagar a la compañía de
viajes por el servicio. La forma de cobrar es la
siguiente: si son 100 alumnos o más, el costo por cada
alumno es de $65.00; de 50 a 99 alumnos, el costo es
de $70.00, de 30 a 49, de $95.00, y si son menos de 30,
el costo de la renta del autobús es de $4000.00, sin
importar el número de alumnos"""
nalumnos = int(input("Cuantos alumnos son:"))
if nalumnos >= 100:
    Costo_alumno = nalumnos * 65
else:
    if nalumnos >= 50:
        Costo_alumnos = nalumnos * 70
    else:
        if nalumnos >= 30:
            Costo_alumnos = nalumnos * 95

print("Lo que pagara cada alumno es de", Costo_alumnos ,"pesos")

