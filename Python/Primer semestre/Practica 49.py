inicial = int(input("Dame el valor inicial de la sumatoria: "))
final = int(input("Dame el valor final de la sumatoria. "))
acumulador = 0
for i in range(inicial, final+1, 1):
    acumulador = acumulador + 1
print("Sumatoria:", acumulador)
