#include <iostream>
using namespace std;

class Base 
{
    public:
        int atributoPublico;
        
        Base() 
    {
            atributoPublico = 0;
            cout << "Constructor de la clase Base" << endl;
        }
        
        ~Base() 
    {
            cout << "Destructor de la clase Base" << endl;
        }
};



class DerivadaPublica : public Base 
{
    public:
        int atributoExtra;

        DerivadaPublica() : Base(), atributoExtra(0) 
    {
            cout << "Constructor de la clase DerivadaPublica" << endl;
        }

        ~DerivadaPublica() 
    {
            cout << "Destructor de la clase DerivadaPublica" << endl;
        }
};


int main() 
{
    DerivadaPublica objPublica;
    return 0;
}
