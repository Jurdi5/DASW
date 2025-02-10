"""Analisis
Entrada
 -número de alumnos
 -edades
 -contador
 -acumulador
Salida
 -Edad primedio
Proceso
 -pedir edades
 -Sacar promedio"""
"""
INICIO
 nalumnos, edad, contador, total:ENTERO
 promedio: REAL
 total = 0
 contador = 1
 ESCRIBIR "Cuantos alumnos son:"
 LEER nalumnos
 MIENTRAS contador <= nalumnos HACER
  ESCRIBIR "Dame la edad:" 
  LEER edad
  total = total + edad
FINMIENTRAS
 promedio = total /nalumnos
 ESCRIBIR promedio
FIN
"""
total = 0
contador = 1
nalumnos = int(input("Cuantos alumnos son: "))
while nalumnos <= 0:
    print("Error, no puede ser 0 o u numero negativo")
    nalumnos = int(input("Cuantos alumnos son: "))
while contador <= nalumnos:
    edad = int(input("Dame la edad: "))
    total = total + edad
    contador += 1 #contador = contador + 1
promedio = total / nalumnos
print("Edad promedio de", nalumnos, "es:", round(promedio))
