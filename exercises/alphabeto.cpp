// Escribir una aplicacion para mostrar
// por pantalla el alfabeto, utilizanado recursion indirecta

#include <iostream>
using namespace std;
void funcionA(char c);
void funcionB(char c);

int main()
{
    cout << "Alfabeto: ";
    funcionA('z');
    cout << endl;
    return 0;
}

void funcionA(char c)
{
    if(c>='A'){
        funcionB(c);
        cout<<c;
    }
}

void funcionB(char c)
{
    funcionA(--c);
}