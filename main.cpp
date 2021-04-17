#include <iostream>

using namespace std;

int main() 
{
  float resultado, base, altura;

  cout << "\nBienvenido al programa de calculo del area del triangulo\n";

  cout << "\nIngrese el valor de la base del triangulo\n";
  cin >> base;

    cout << "\nIngrese el valor de la altura del triangulo\n";
    cin >> altura;

    resultado = (base*altura)/2;

    cout <<"\nEl area del triangulo es: \n"<< resultado << endl;

        return 0;

    }