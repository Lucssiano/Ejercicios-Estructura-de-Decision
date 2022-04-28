/* 3- Se ingresan dos valores por teclado si el primero es mayor al segundo, informar la resta de los valores
en caso contrario la suma */

#include <iostream>

using namespace std;

int main()
{
  int num1, num2;
  cout << "Ingrese un numero ";
  cin >> num1;
  cout << "Ingrese otro numero ";
  cin >> num2;

  if (num1 > num2)
    cout << "La resta de los numeros es " << num1 - num2;
  else
    cout << "La suma de los numeros es " << num1 + num2;
  return 0;
}