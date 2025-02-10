"""
INICIO
    dia, turno: caracter
    tiempo: Entero
    subtotal, impuesto, total: REAL

    ESCRIBIR "Que dia hiciste la llamada: "
    LEER dia
    ESCRIBIR "En que turno hiciste la llamada: "
    LEER turno
    ESCRIBIR "Cuantos minutos duró la llamada: "
    LEER turno

    SI tiempo <= 5 ENTONCES
         subtotal := tiempo * 1
    SINO
        SI tiempo <= 8 ENTONCES
            subtotal := (tiempo - 5) * .80 + 5
        SINO
            SI tiempo <= 10 ENTONCES
                subtotal := (tiempo - 8) * .70 + 7.4
            SINO
                subtotal := (tiempo - 10) * .50 + 8.80
    SI dia = "domingo" ENTONCES



"""
dia = input("DIA: ")
tiempo = int(input("Duración de la llamada: "))
turno = input("Turno: ")
if tiempo <= 5:
    subtotal = tiempo * 1
else:
    if tiempo <= 8:
        subtotal = (tiempo - 5) * .80 + 5
    else:
        if tiempo <= 10:
            subtotal = (tiempo - 8) * .70 + 7.4
        else:
            subtotal = (tiempo - 10) * .50 + 8.80
if dia.lower() == "domingo":
    impuesto = subtotal * .03
else:
    if turno.lower() == "matutino":
        impuesto = subtotal * .15
    else:
        impuesto = subtotal * .10
total = subtotal + impuesto
print("Subtotal: ",subtotal)
print("impuesto:", round(impuesto, 2))
print("Total", round(total, 2))

