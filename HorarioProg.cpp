#include <iostream>
using namespace std;
 int main () {
     string dia ;
     int dia2;

  cout << "INGRESE UN DIA DE LA SEMANA!";
  cin >> dia ;


  if (dia == "lunes") {
        dia2 = 1;
} else if (dia == "martes") {
        dia2 = 2;
} else if (dia == "miercoles") {
        dia2 = 3;
}else if (dia == "jueves") {
        dia2 = 4;
} else if (dia == "viernes") {
        dia2 = 5;
};


  switch (dia2) {
 case 1:
     cout << "HOY NO TENES PROGRAMACION";
     break;

case 2:
     cout << "HOY TENES PROGRAMACION";
    break;

 case 3:
     cout << "HOY NO TENES PROGRAMACION";
     break;

case 4:
     cout << "HOY TENES PROGRAMACION";
     break;

 case 5:
     cout << "HOY TENES PROGRAMACION";

     default:
     cout << "INGRESA UN DIA DEL LUNES AL VIERNES" ;

 };

  return 0;
 }
