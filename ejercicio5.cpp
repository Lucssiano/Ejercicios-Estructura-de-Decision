// Dados tres valores que se ingresan por teclado, mostrar por pantalla el valor mayor

#include <iostream>

using namespace std;

int main()
{
  int num1, num2, num3;

  cout << "Ingrese 3 valores: ";
  cin >> num1 >> num2 >> num3;

  if (num1 > num2 && num1 > num3)
    cout << "El mayor valor es: " << num1;
  if (num2 > num3 && num2 > num1)
    cout << "El mayor valor es: " << num2;
  if (num3 > num2 && num3 > num1)
    cout << "El mayor valor es: " << num3;

  return 0;
}