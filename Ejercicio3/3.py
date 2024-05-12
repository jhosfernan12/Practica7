class Movil:
    def __init__(self, marca, modelo, sistemaoperativo):
        self.marca = marca
        self.modelo = modelo
        self.sistemaoperativo = sistemaoperativo

    def detalles(self):
        print("Marca:", self.marca)
        print("Modelo:", self.modelo)
        print("Sistema Operativo:", self.sistemaoperativo)

    def __del__(self):
        print("Se ha destruido un objeto de Movil:", self.marca, self.modelo)


class Telefono(Movil):
    def __init__(self, marca, modelo, sistemaoperativo):
        super().__init__(marca, modelo, sistemaoperativo)

    def detalles(self):
        super().detalles()

    def __del__(self):
        print("Se ha destruido un objeto de Telefono:", self.marca, self.modelo)


class Tablet(Movil):
    def __init__(self, marca, modelo, sistemaoperativo):
        super().__init__(marca, modelo, sistemaoperativo)

    def detalles(self):
        super().detalles()

    def __del__(self):
        print("Se ha destruido un objeto de Tablet:", self.marca, self.modelo)


print("--------Telefono-------")
telefono01 = Telefono("Samsung", "Galaxy S21", "Android")
telefono01.detalles()

print("--------Tablet-------")
tablet01 = Tablet("Apple", "iPad Air", "iPadOS")
tablet01.detalles()
