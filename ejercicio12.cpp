/* Confeccionar un programa que pueda determinar el importe a pagar por una prestación
médica según su código. Los importes se cobran según la siguiente tabla :
    Código  Importe $
      A       200
      D       400
      F       600
      M       1500
      T       1500
Por cada prestación se debe ingresar el número de historia del paciente y el código de la
prestación. Se debe emitir un ticket para cada uno, con el número de la historia, el código y el
importe a pagar.  */

#include <iostream>

using namespace std;

int main()
{
  int numHistoria, imp;
  char codigo;

  cout << "Ingrese el numero de historia del paciente y el codigo de la prestacion ";
  cin >> numHistoria >> codigo;

  switch (codigo)
  {
  case 'A':
  case 'a':
    imp = 200;
    break;

  case 'D':
  case 'd':
    imp = 400;
    break;

  case 'F':
  case 'f':
    imp = 600;
    break;

  case 'M':
  case 'm':
  case 'T':
  case 't':
    imp = 1500;
    break;
  }

  cout << "Numero de historia: " << numHistoria << " Codigo de la prestacion: " << codigo << " Importe a pagar: $" << imp;
}