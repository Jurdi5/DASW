"""La cadena de tiendas de autoservicio “El mandilón” cuenta con
sucursales en C ciudades diferentes de la República, en cada ciudad
cuenta con T tiendas y cada tienda cuenta con N empleados,
asimismo, cada una registra lo que vende de manera individual cada
empleado, cuánto fue lo que vendió cada tienda, cuánto se vendió en
cada ciudad y cuánto recaudó la cadena en un solo día. Realice un
algoritmo para determinar lo anterior y represéntelo mediante un
diagrama de flujo,además de realizar el programa en Python
utilizando el ciclo apropiado.

ANALISIS
ENTRADA
Cciudades
Ttiendas
Nempleados
ListaC, ListaT, ListaN, ListaCe, ListaTe, ListaNe

PROSESO
Escribir la cantidad de Cciudades, Ttiendas (por ciudades) y Nempleados (por tiendas)
Generar una lista por ciudades en donde muestre la cantidad de dinero generado por ciudades
Generar una lista por tienda en donde muestre la cantidad de dinero generado por tienda
Generar una lista de empleados en donde muestre la cantidad de dindero generado por empleado
SALIDA
Mostrar las tres listas y el total de cada una
FIN"""
"""SEUDOCODIGO
INICIO
Cciudades: ENTERO, REAL
MaxTienda, MaxCiudad, Total := 0
Nelista := []
Telista := []
Celista := []
PARA x EN rango(1, Cciudades+1, 1) HACER:
    Clista = []
    Ciudad: ENTERO, REAL
    LEER (Ttiendas: Entero, Real)
    PARA y EN rango(1, Ttiendas+1, 1) HACER:
        Tlista := []
        Tienda: REAL, ENTERO
        LERR (Nempleados : REAL, ENTERO)
        PARA z EN rango(1, Nempleados+1, 1)
            Nlista = []
            LEER empleado, generado: REAL, ENTERO
            MaxTienda = MaxTienda + generado
            Nlista AGREGAR (empleado)
            Nlista AGREGAR (generado)
            Tiendass := Tienda, Nlista
            Nelista AGREGAR (Tiendass)
        TiendasCiudad := Ciudad, MaxTiendas
        Tlista AGRERAR (TiendasCiudad)
        Telista Agregar (Tlista)
        MaxCiudad = MaxCiudad + MaxTienda
    Ciudadd := Ciudad, MaxCiudad
    Clista AGREGAR(Ciudadd)
    Celista AGREGAR(Clista)
ESCRIBIR(Celista)
ESCRIBIR(Telista)
ESCRIBIR(NeLista)
Total = Total + MaxCiudad
ESCRIBIR(Total)

        
"""
Cciudades = int(input("Cuantas ciudades son: "))
MaxTienda = 0
MaxCiudad = 0
Total = 0
NeLista = []
Telista = []
Celista = []
for x in range(1, Cciudades+1, 1):
    Clista = []
    Ciudad = input("Cual es tu ciudad: ")
    Ttiendas = int(input("Cuantas tiendas son en la ciudad: "))
    for y in range(1, Ttiendas+1, 1):
        Tlista = []
        Tienda = input("Cual tienda es: ")
        Nempleados = int(input("Cuantos empleados son: "))
        for z in range(1, Nempleados+1, 1):
            Nlista = []
            empleado = input("Quien es el empleado: ")
            generado = int(input("Cuanto genero el empleado: "))
            MaxTienda = MaxTienda + generado
            Nlista.append(empleado)
            Nlista.append(generado)
            Tiendass = ("El empleado de la tienda", Tienda, "gano", Nlista, "individualmente")
            NeLista.append(Tiendass)
        TiendasCiudad = ("La tienda", Tienda, "de la ciudad", Ciudad, "gana", MaxTienda, "Pesos")
        Tlista.append(TiendasCiudad)
        Telista.append(Tlista)
        MaxCiudad = MaxCiudad + MaxTienda
    Ciudadd = ("Las tiendas de la ciudad", Ciudad, "Generaron", MaxCiudad, "Pesos")
    Clista.append(Ciudadd)
    Celista.append(Clista)
print(Celista)

print(Telista)

print(NeLista)
Total = Total + MaxCiudad
print("El total de la cadena fue de", Total, "Pesos")
