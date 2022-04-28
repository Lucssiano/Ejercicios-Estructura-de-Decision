// 9- Dado un número de cinco cifras informar si es capicúa.

#include <iostream>

using namespace std;

int main()
{
  int num, primerCifra, segundaCifra, tercerCifra, cuartaCifra, quintaCifra;

  cout << "Ingrese un numero de cinco cifras ";
  cin >> num;

  primerCifra = num / 10000;
  cout << "primerCifra " << primerCifra << endl;
  segundaCifra = (num - (primerCifra * 10000)) / 1000;
  cout << "segundaCifra " << segundaCifra << endl;
  tercerCifra = (num - (primerCifra * 10000) - (segundaCifra * 1000)) / 100;
  cout << "tercerCifra " << tercerCifra << endl;
  cuartaCifra = ((num - (primerCifra * 10000) - (segundaCifra * 1000)) - tercerCifra * 100) / 10;
  cout << "cuartaCifra " << cuartaCifra << endl;
  quintaCifra = ((num - (primerCifra * 10000) - (segundaCifra * 1000)) - tercerCifra * 100) - cuartaCifra * 10;
  cout << "quintaCifra " << quintaCifra << endl;

  if (primerCifra == quintaCifra && segundaCifra == cuartaCifra)
    cout << "Es capicua";
  else
    cout << "NO es capicua";
  return 0;
}