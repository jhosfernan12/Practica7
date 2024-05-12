class Vehiculo 
{
    private String modelo;
    private String marca;
    private int fechafabricacion;
    private float precio;

    public Vehiculo(String modelo, String marca, int fechafabricacion, float precio) 
    {
        this.modelo = modelo;
        this.marca = marca;
        this.fechafabricacion = fechafabricacion;
        this.precio = precio;
    }

    public void detalles() 
    {
        System.out.println("Modelo: " + modelo);
        System.out.println("Marca: " + marca);
        System.out.println("Fecha de Fabricacion: " + fechafabricacion);
        System.out.println("Precio: S/" + precio);
    }
}

class Automovil extends Vehiculo 
{
    private int nropuertas;
    private String combustible;

    public Automovil(String modelo, String marca, int fechafabricacion, float precio, int nropuertas, String combustible) 
    {
        super(modelo, marca, fechafabricacion, precio);
        this.nropuertas = nropuertas;
        this.combustible = combustible;
    }

    public void detalles() 
    {
        super.detalles();
        System.out.println("Numero de puertas: " + nropuertas);
        System.out.println("Combustible: " + combustible);
    }
}

class Motocicleta extends Vehiculo 
{
    private float cilindrada;

    public Motocicleta(String modelo, String marca, int fechafabricacion, float precio, float cilindrada) 
    {
        super(modelo, marca, fechafabricacion, precio);
        this.cilindrada = cilindrada;
    }

    public void detalles() 
    {
        super.detalles();
        System.out.println("Cilindrada: " + cilindrada);
    }
}

public class main1
{
    public static void main(String[] args) 
    {
        Automovil auto01 = new Automovil("Delorean", "DMC-12", 1981, 120000, 2, "Gasolina");
        System.out.println("-----Automovil-----");
        auto01.detalles();

        Motocicleta moto01 = new Motocicleta("Honda", "CBR500R", 2021, 24000, 500);
        System.out.println("-----Motocicleta-----");
        moto01.detalles();
    }
}
