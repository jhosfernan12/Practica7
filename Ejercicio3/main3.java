class Movil 
{
    public String marca;
    public String modelo;
    public String sistemaoperativo;

    public Movil(String marca, String modelo, String sistemaoperativo) 
    {
        this.marca = marca;
        this.modelo = modelo;
        this.sistemaoperativo = sistemaoperativo;
    }

    public void detalles() 
    {
        System.out.println("Marca: " + marca);
        System.out.println("Modelo: " + modelo);
        System.out.println("Sistema Operativo: " + sistemaoperativo);
    }

    @Override
    protected void finalize() throws Throwable 
    {
        System.out.println("Se ha destruido un objeto de Movil: " + marca + " " + modelo);
        super.finalize();
    }
}

class Telefono extends Movil 
{
    public Telefono(String marca, String modelo, String sistemaoperativo) 
    {
        super(marca, modelo, sistemaoperativo);
    }

    public void detalles() 
    {
        super.detalles();
    }

    @Override
    protected void finalize() throws Throwable 
    {
        System.out.println("Se ha destruido un objeto de Telefono: " + marca + " " + modelo);
        super.finalize();
    }
}

class Tablet extends Movil 
{
    public Tablet(String marca, String modelo, String sistemaoperativo) 
    {
        super(marca, modelo, sistemaoperativo);
    }

    public void detalles() 
    {
        super.detalles();
    }

    @Override
    protected void finalize() throws Throwable 
    {
        System.out.println("Se ha destruido un objeto de Tablet: " + marca + " " + modelo);
        super.finalize();
    }
}

public class main3 
{
    public static void main(String[] args) 
    {
        System.out.println("--------Telefono-------");
        Telefono telefono01 = new Telefono("Samsung", "Galaxy S21", "Android");
        telefono01.detalles();

        System.out.println("--------Tablet-------");
        Tablet tablet01 = new Tablet("Apple", "iPad Air", "iPadOS");
        tablet01.detalles();
    }
}
