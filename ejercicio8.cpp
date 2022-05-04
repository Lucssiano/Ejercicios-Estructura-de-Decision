// 8- Dados tres valores que representan los lados de un triángulo, informar si el mismo es equilátero, isósceles o escaleno

#include <iostream>

using namespace std;

int main()
{
  float lado1, lado2, lado3;
  cout << "Ingrese tres lados de un triangulo ";
  cin >> lado1 >> lado2 >> lado3;

  // Isosceles considerando que lado 1 y lado 2 son los de la izquierda y derecha del triángulo
  if (lado1 == lado2 && lado1 != lado3)
    cout << "El triangulo es isosceles";

  if (lado1 == lado2 && lado1 == lado3)
    cout
        << "El triangulo es equilatero";
  else
    cout << "El triangulo es escaleno";

  return 0;
}