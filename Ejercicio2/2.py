class Persona:
    def __init__(self, nombre, edad, salario, correo):
        self.nombre = nombre
        self.edad = edad
        self.salario = salario
        self.correo = correo

    def detalles(self):
        print("Nombre:", self.nombre)
        print("Edad:", self.edad)
        print("Correo electronico:", self.correo + "@EsteCorreoNoExiste.com")


class Empleado(Persona):
    def __init__(self, nombre, edad, salario, correo):
        super().__init__(nombre, edad, salario, correo)

    def detalles(self):
        super().detalles()
        print("Salario S/", self.salario)


class Cliente(Persona):
    def __init__(self, nombre, edad, correo):
        super().__init__(nombre, edad, 0, correo)

    def detalles(self):
        super().detalles()


print("---------Empleado---------")
empleado01 = Empleado("Gordon Freeman", 27, 12500, "gordonfre0m4n86")
empleado01.detalles()

print("---------Cliente---------")
cliente01 = Cliente("Juan Vasquez", 38, "juancitovazz8")
cliente01.detalles()
