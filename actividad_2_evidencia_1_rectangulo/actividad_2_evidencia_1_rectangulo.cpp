#include <iostream>
#include <string>

using namespace std;

int main(){

     float area;
     float base;
     float altura;

     cout << "Favor ingrese la base del rectangulo: ";
     cin >> base;

     cout << "Favor ingrese la altura del rectangulo: ";
     cin >> altura;

     system("cls");
     area = (base * altura);
     cout << "area del rectangulo: " << area << endl;

     return 0;
}
