"""“La langosta ahumada” es una empresa dedicada a ofrecer banquetes; sus
tarifas son las siguientes: el costo de platillo por persona es de $95.00, pero si
el número de personas es mayor a 200 pero menor o igual a 300, el costo es de $85.00.
Para más de 300 personas el costo por platillo es de $75.00. Se requiere un algoritmo que
ayude a determinar el presupuesto que se debe presentar a los clientes que deseen realizar
un evento. Realiza un diagrama de flujo y programa en Python que resuelva el problema"""
npersonas = int(input("Cuantas personas son:"))
if npersonas <= 200:
    banquete = npersonas * 95
else:
    if npersonas <= 300:
        banquete = npersonas * 85
    else:
        banquete = npersonas * 75
print(banquete, "es el precio de banquete")
