anio_actual = int(input("Ingrese el año en curso: "))

# Pedir al usuario ingresar el nombre y año de nacimiento de tres personas
personas = []
for i in range(3):
    nombre = input("Ingrese el nombre de la persona {i+1}: ")
    anio_nacimiento = int(input("Ingrese el año de nacimiento de {nombre}: "))
    personas.append((nombre, anio_nacimiento))

# Calcular la edad que cumplirán durante el año en curso
print("\nEdades durante el año en curso:")
for nombre, anio_nacimiento in personas:
    edad = anio_actual - anio_nacimiento
    print("{nombre} cumplirá {edad} años durante el año {anio_actual}.")
