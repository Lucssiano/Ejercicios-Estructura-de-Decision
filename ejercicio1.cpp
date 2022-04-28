// 1- Dados dos valores que se ingresan por teclado, mostrar por pantalla el menor de ellos

#include <iostream>

using namespace std;

int main()
{
  int num1, num2;
  cout << "Ingrese un numero ";
  cin >> num1;
  cout << "Ingrese otro numero ";
  cin >> num2;

  if (num1 < num2)
    cout << "El menor de los numeros es: " << num1;
  else
    cout << "El menor de los numeros es: " << num2;

  return 0;
}