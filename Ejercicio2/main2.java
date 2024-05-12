class Persona 
{
    public String nombre;
    public int edad;
    public float salario;
    protected String correo;

    public Persona(String nombre, int edad, float salario, String correo) 
    {
        this.nombre = nombre;
        this.edad = edad;
        this.salario = salario;
        this.correo = correo;
    }

    protected void detalles() 
    {
        System.out.println("Nombre: " + nombre);
        System.out.println("Edad: " + edad);
        System.out.println("Correo electronico: " + correo + "@EsteCorreoNoExiste.com");
    }
}

class Empleado extends Persona
 {
    public Empleado(String nombre, int edad, float salario, String correo) 
    {
        super(nombre, edad, salario, correo);
    }

    public void detalles() 
    {
        super.detalles();
        System.out.println("Salario S/" + salario);
    }
}

class Cliente extends Persona 
{
    public Cliente(String nombre, int edad, String correo) 
    {
        super(nombre, edad, 0, correo);
    }

    public void detalles() 
    {
        super.detalles();
    }
}

public class main2 
{
    public static void main(String[] args) 
    {
        System.out.println("---------Empleado---------");
        Empleado empleado01 = new Empleado("Gordon Freeman", 27, 12500, "gordonfre0m4n86");
        empleado01.detalles();

        System.out.println("---------Cliente---------");
        Cliente cliente01 = new Cliente("Juan Vasquez", 38, "juancitovazz8");
        cliente01.detalles();
    }
}
