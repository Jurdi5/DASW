"""Analisis
Entrada
   numdeVentasTotales
Proceso
   Clasificar cada venta
   Acumular Montos en cada categoria global
   Contar número de ventas de cada categoria
Salida
  Monto de venta de cada categoria
  Monto Global
  Monto de ventas por categoria
Fin
   """
nventas = int(input("Número de ventas: "))
total1 = 0
total2 = 0
total3 = 0
contador1 = 0
contador2 = 0
contador3 = 0
for contador in range(1,nventas,1):
    print("Monto de la venta contador", contador, end=": ")
    if nventas > 1000:
        contador1 = contador1 + 1
        total1 = total1 + contador1
    else:
        if nventas > 500:
            contador2 = contador2 + 1
            total2 = total2 + contador2
        else:
            contador3 = contador + 1
            total3 = total3 + nventas
total = total1 + total2 + total3
print(contador1, "ventas mayores a 1000", total1)
print(contador2, "ventas mayores a 500 y menores o iguales a 1000", total1)
print(contador3, "ventas menores o iguales a 500", total1)
print("Venta total del dia:", total)
