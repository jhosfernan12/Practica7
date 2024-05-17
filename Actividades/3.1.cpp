#include <iostream>
#include <string>
#include <algorithm> // para la funcion reverse()


using namespace std;


class Cliente 
{
    protected:
        string nombre;
        string direccion;
        float saldo;


    public:
        Cliente(string _nombre, string _direccion, float _saldo) : nombre(_nombre), direccion(_direccion), saldo(_saldo) {}


        void mostrarInformacion() 
        {
            cout << "Nombre: " << nombre << endl;
            cout << "Direccion: " << direccion << endl;
            cout << "Saldo: S/" << saldo << endl;
        }
};


class ClienteSeguro : public Cliente 
{
    private:
        string pass;
    public:
    
        ClienteSeguro(string _nombre, string _direccion, float _saldo, string _pass) : Cliente(_nombre, _direccion, _saldo), pass(_pass) {}

        // Metodo para encriptar la informacion usando la biblioteca Algorithm
        void encriptarInformacion() 
        {
            
            reverse(nombre.begin(), nombre.end());  //Escribe el nombre reversa
            reverse(direccion.begin(), direccion.end());  //Escribe la direccion en reversa
        }

        void desencriptarInformacion() 
        {
            reverse(nombre.begin(), nombre.end());  //Escribe el nombre en reversa para desencriptar
            reverse(direccion.begin(), direccion.end());  //Escribe la direccion en reversa para desencriptar
        } 


        
        bool verificarAutenticidad() 
        {
            string passingresada;
            cout << "Introduce la contrasena para verificar autenticidad: ";
            cin >> passingresada;
            if (passingresada == pass) 
            {
                return true;
            } 
            else 
            {
                return false;
            }
        }
};


int main() 
{

    ClienteSeguro cliente01("Pedro Gutierrez Barrios", "Calle K892-F", 1000.0,"admin1234");
    cliente01.encriptarInformacion();

    cout << "Informacion del cliente encriptada:" << endl;
    cliente01.mostrarInformacion(); 
    cout << endl;


    if (cliente01.verificarAutenticidad() == true)
    {
        cout << "Informacion del cliente DESENCRIPTADA: " << endl;
        cliente01.desencriptarInformacion();
        cliente01.mostrarInformacion();
        cout << endl;
    }
    else
    {
        cout << "Contrasenia incorrecta" << endl;
    }
    

    ClienteSeguro cliente02("Mario Diaz Carrazco", "Calle A402-B",8600,"contrasegura");
    cliente02.encriptarInformacion();
    cout << "Informacion del cliente encriptada:" << endl;
    cliente02.mostrarInformacion(); 
    cout << endl;


    if (cliente02.verificarAutenticidad() == true)
    {
        cout << "Informacion del cliente DESENCRIPTADA: " << endl;
        cliente02.desencriptarInformacion();
        cliente02.mostrarInformacion();
        cout << endl;
    }
    else
    {
        cout << "Contrasenia incorrecta" << endl;
    }
    
    return 0;
}


