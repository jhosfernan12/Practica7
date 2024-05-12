class Vehiculo:
    def __init__(self, modelo, marca, fechafabricacion, precio):
        self.modelo = modelo
        self.marca = marca
        self.fechafabricacion = fechafabricacion
        self.precio = precio

    def detalles(self):
        print("Modelo:", self.modelo)
        print("Marca:", self.marca)
        print("Fecha de Fabricacion:", self.fechafabricacion)
        print("Precio: S/", self.precio)


class Automovil(Vehiculo):
    def __init__(self, modelo, marca, fechafabricacion, precio, nropuertas, combustible):
        super().__init__(modelo, marca, fechafabricacion, precio)
        self.nropuertas = nropuertas
        self.combustible = combustible

    def detalles(self):
        super().detalles()
        print("Numero de puertas:", self.nropuertas)
        print("Combustible:", self.combustible)


class Motocicleta(Vehiculo):
    def __init__(self, modelo, marca, fechafabricacion, precio, cilindrada):
        super().__init__(modelo, marca, fechafabricacion, precio)
        self.cilindrada = cilindrada

    def detalles(self):
        super().detalles()
        print("Cilindrada:", self.cilindrada, "Galones")


auto01 = Automovil("Delorean", "DMC-12", 1981, 120000, 2, "Gasolina")
print("-----Automovil-----")
auto01.detalles()

moto01 = Motocicleta("Honda", "CBR500R", 2021, 24000, 500)
print("-----Motocicleta-----")
moto01.detalles()
