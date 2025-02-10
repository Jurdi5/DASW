"""
INICIO
nempleados, contadorEmpleados, contadorDias, diasLaborados:ENTERO
horasTrabajadas, totalHoras: ENTERO
pagoxhora, sueldoSemanal, nomina:REAL
nomina := 0
PARA contadorEmpleados = 1 HASTA nempleados CON PASO 1 HACER
    LEER diasLaborados
    totalHoras := 0
    LEER pagoHora
    PARA contadorDiasc = 1 HASTA diasLaborados CON PASO 1 HACER
        LEER horasTrabajadas
        totalHoras :=totalHoras + horasTrabajadas
    sueldoSemanal := totalHoras + pagaxhora
    ESCRIBIR sueldoSemanal
    nomina := nomina + sueldoSemanal
ESCRIBIR nomina
FIN
"""
nomina = 0
nempleados = int(input("Cuantos empleados son: "))
for contadorEmpleados in range(1,nempleados+1,1):
    diasLaborados = int(input("Cuantos dias laboró: "))
    totalHoras = 0
    pagoHora = eval(input("Cuanto gana por hora: "))
    for contadorDias in range(1,diasLaborados+1,1):
        horasTrabajadas = int(input("Cuantas horas trabajó: "))
        totalHoras = totalHoras + horasTrabajadas
    sueldoSemanal = totalHoras * pagoHora
    print("El empleado", contadorEmpleados, "ganó esta semana",sueldoSemanal)
    nomina = nomina + sueldoSemanal
print("Por",nempleados,"voy a pagar", nomina,"pesos")
