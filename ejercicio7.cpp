/*  Dado tres valores que representan las longitudes de segmentos determinar e imprimir una leyenda según sea:
 “Forman triangulo” o “No forman triangulo”. */

#include <iostream>

using namespace std;

int main()
{
  float lado1, lado2, lado3;
  cout << "Ingrese tres lados de un triangulo ";
  cin >> lado1 >> lado2 >> lado3;

  if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado2 + lado1)
    cout << "Forman triangulo";
  else
    cout << "No forman triangulo";

  return 0;
}