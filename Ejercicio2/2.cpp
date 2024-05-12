#include <iostream>
#include <string>
using namespace std;

class Persona
{
    public:
        string nombre;
        int edad;
        float salario;
        Persona(string _nombre, int _edad, float _salario, string _correo) : nombre(_nombre), edad(_edad),salario(_salario), correo(_correo){} //Constructor

    protected:
        string correo;

    void Detalles()
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad " << edad << endl;
        cout << "Correo electronico: " << correo <<"@EsteCorreoNoExiste.com"<< endl;
    }
};

class Empleado : protected Persona
{
    public:
        Empleado(string _nombre, int _edad, float _salario, string _correo) : Persona(_nombre, _edad, _salario, _correo){} //Constructor
    void Detalles()
    {
        Persona::Detalles();
        cout << "Salario S/" << salario << endl;
    }
};

class Cliente : protected Persona
{
public:
    Cliente(string _nombre, int _edad, string _correo): Persona(_nombre, _edad, 0, _correo) {}

    void Detalles()
    {
        Persona::Detalles();
    }
};

int main()
{
    cout << "---------Empleado--------- " << endl;
    Empleado empleado01("Gordon Freeman",27,12500,"gordonfre0m4n86");
    empleado01.Detalles();

    cout << "---------Cliente--------- " << endl;
    Cliente cliente01("Juan Vasquez", 38, "juancitovazz8"); 
    cliente01.Detalles();

}