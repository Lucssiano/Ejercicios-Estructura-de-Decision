/* Un negocio vende distintos artículos identificados por un código, según se muestra:
.código 1; 10 ; 100: 10 pesos la unidad
.código 2; 22; 222: 7 pesos la unidad. La caja de 10 unidades vale 65 pesos.
.código 3; 33: 3 pesos la unidad. Si la compra es por más de 10 unidades se hace un descuento del 10% sobre el total.
.código 4; 44: 2 peso la unidad.
Confeccionar un programa que ingrese como dato el código de un artículo y la cantidad a
comprar y se informe el importe de la compra:
 ARTÍCULO xxxxx CANTIDAD xxxx IMPORTE A PAGAR $ xxxx.xx  */

#include <iostream>

using namespace std;

int main()
{
  int pUnidad, art, cant;
  float imp;

  cout << "Ingrese el codigo de articulo y cantidad de productos a comprar ";
  cin >> art >> cant;

  switch (art)
  {

  case 1:
  case 10:
  case 100:
    pUnidad = 10;
    imp = pUnidad * cant;
    break;

  case 2:
  case 22:
  case 222:
    pUnidad = 7;
    if (cant > 10)
    {
      int primerCifra, segundaCifra;
      primerCifra = (cant / 10);
      segundaCifra = cant - (primerCifra * 10);
      imp = (primerCifra * 10) * 6.5 + pUnidad * segundaCifra;
    }
    break;

  case 3:
  case 33:
    pUnidad = 3;
    imp = pUnidad * cant;
    if (cant > 10)
      imp = imp - ((pUnidad * cant) * 0.1);

    break;

  case 4:
  case 44:
    pUnidad = 2;
    imp = pUnidad * cant;
    break;
  }

  cout << "ARTICULO: " << art << " CANTIDAD: " << cant << " IMPORTE A PAGAR: $" << imp;

  return 0;
}