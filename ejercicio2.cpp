// 2- Dado un número que se ingresa por teclado, informar si es par o impar

#include <iostream>

using namespace std;

int main()
{
  int num1;
  cout << "Ingrese un numero ";
  cin >> num1;

  if (num1 % 2 == 0)
    cout << "El numero " << num1 << " es "
         << "par";
  else
    cout << "El numero " << num1 << " es "
         << "impar";

  return 0;
}