"""La asociación de vinicultores tiene como política fijar
un precio inicial al kilo de uva, la cual se clasifica en
tipos A y B, y además en tamaños 1 y 2. Cuando se
realiza la venta del producto, ésta es de un solo tipo y
tamaño, se requiere determinar cuánto recibirá un
productor por la uva que entre- ga en un embarque,
considerando lo siguiente: si es de tipo A, se le cargan
20¢ al precio inicial cuando es de tamaño 1; y 30¢ si es
de tamaño 2. Si es de tipo B, se rebajan 30¢ cuando es
de tamaño 1, y 50¢ cuando es de tamaño 2. Realice un
algoritmo para determinar la ganancia obtenida y
represéntelo mediante diagrama de flujo y programa
en Python"""
tipo = input("Tipo: ")
Tamano = int(input("Tamaño: "))
cantidad = eval(input("Cantidad de kilos: "))
precio_inicial = eval(input("Precio inicial: "))

if tipo == "A" or tipo == "a":
    if Tamano == 1:
        precio_inicial = precio_inicial + .20
    else:
        precio_inicial += .30
else:
    if Tamano == 1:
        precio_inicial -= .30
    else:
        precio_inicial -= .50
ganancia = cantidad * precio_inicial
print("Ganancia:",round(ganancia,2))

