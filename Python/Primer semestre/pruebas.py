T = int(input("Casos a procesar: "))
for x in range(0, T):
    k = int(input("Número de alumnos necesarios: "))
    a = float(input("Tiempo de los alumnos: "))
    q = 0
    lista_a = a.split(" ")
    for y in range(len(lista_a)):
        if float(lista_a[y] <= 0:
            q = q + 1
    if q <= k:
        print("NO")
    else:
        print("SI")
