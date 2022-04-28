/* 4- Confeccionar un programa que solicite dos valores reales positivos, expresados en cm.
El primero corresponde a la base y el segundo a la altura de un triángulo, se desea calcular el valor de la superficie.
Si la superficie calculada es menor a 100 cm2, expresarla en milímetros cuadrados, caso contrario en metros cuadrados.
Informar resultado con unidades. ( 1 m2 = 10.000 cm2) */

#include <iostream>

using namespace std;

int main()
{
  int base, altura;
  float superficie;
  cout << "Ingrese el valor de la base del triangulo (real positivo en centimetros) ";
  cin >> base;
  cout << "Ingrese el valor de la altura del triangulo (real positivo en centimetros) ";
  cin >> altura;
  superficie = (base * altura) / 2;

  if (superficie < 100)
    cout << "La superficie del triangulo es de: " << (superficie * 100) << " milimetros cuadrados";
  else
    cout << "El menor de los numeros es: " << (superficie / 10000) << " metros cuadrados";

  return 0;
}