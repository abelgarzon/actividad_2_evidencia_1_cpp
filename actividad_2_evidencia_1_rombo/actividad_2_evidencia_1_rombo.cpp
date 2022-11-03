#include <iostream>
#include <string>

using namespace std;

int main(){

     float area;
     float diagonal_mayor;
     float diagonal_menor;

     cout << "Favor ingrese la diagonal mayor (D) del rombo: ";
     cin >> diagonal_mayor;

     cout << "Favor ingrese la diagonal menor (d) del rombo : ";
     cin >> diagonal_menor;

     system("cls");
     area = (diagonal_mayor * diagonal_menor) / 2;
     cout << "area del rombo: " << area << endl;

     return 0;
}
