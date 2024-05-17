#include <iostream>
using namespace std;


class Base 
{
    protected:
        int atributoProtegido;

      
        void encriptarInformacion(int info) 
        {
            atributoProtegido = info * 2; // Encriptacion  multiplicando por 2
        }

    public:
        Base() : atributoProtegido(0) {} // Constructor inicializando en 0
};


class DerivadaPublica : public Base 
{
    public:
        
        void asignarAtributoProtegido(int info) 
        {
            encriptarInformacion(info); 
        }

        int obtenerAtributoProtegido() 
        {
            return atributoProtegido; 
        }
};

int main() 
{
    DerivadaPublica objPublica; 
    objPublica.asignarAtributoProtegido(5); 
    cout << "Atributo protegido en la clase derivada: " << objPublica.obtenerAtributoProtegido() << endl;

    return 0;
}
