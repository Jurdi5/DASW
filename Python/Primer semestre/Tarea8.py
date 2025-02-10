Numero = int(input("Número: "))
Fibonacci1 = 1
Fibonacci2 = 1
Fibonacci3 = 0
if Numero == Fibonacci1:
    print("Tu número es parte de la secuencia fibonacci")
else:
    while Fibonacci3 < Numero:
        Fibonacci3 = Fibonacci1 + Fibonacci2
        Fibonacci1 = Fibonacci2
        Fibonacci2 = Fibonacci3
    if Numero == Fibonacci3:
        print("Tu número es parte de la secuencia fibonacci")
    else:
        print("Tu número no es parte de la secuencia fibonacci")
