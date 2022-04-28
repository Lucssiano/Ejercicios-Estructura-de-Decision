// 6- Escribir un algoritmo que lea dos fechas (día, mes y año) e informe cual es la más reciente

#include <iostream>

using namespace std;

int main()
{
  int dia1, mes1, año1, dia2, mes2, año2, añoActual, mesActual, diaActual, sumaFecha1, sumaFecha2, sumaFechaActual;

  añoActual = 2022;
  mesActual = 04;
  diaActual = 27;

  cout << "Ingrese una fecha en formato dd/mm/yyyy: ";
  cin >> dia1 >> mes1 >> año1;
  cout << "Ingrese otra fecha en formato dd/mm/yyyy: ";
  cin >> dia2 >> mes2 >> año2;

  sumaFecha1 = (año1 * 10000) + (mes1 * 100) + dia1;
  sumaFecha2 = (año2 * 10000) + (mes2 * 100) + dia2;
  sumaFechaActual = (añoActual * 10000) + (mesActual * 100) + diaActual;

  if ((sumaFechaActual - sumaFecha1) < (sumaFechaActual - sumaFecha2))
    cout << "La fecha: " << dia1 << "/" << mes1 << "/" << año1 << " es la mas reciente";
  else
    cout << "La fecha: " << dia2 << "/" << mes2 << "/" << año2 << " es la mas reciente";
}