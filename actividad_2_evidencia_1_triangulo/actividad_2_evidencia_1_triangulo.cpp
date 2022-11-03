#include <iostream>
#include <string>

using namespace std;

int main(){

     float area;
     float base;
     float altura;

     cout << "Favor ingrese la base menor (b) del triangulo";
     cin >> base;

     cout << "Favor ingrese la altura (h) del triangulo";
     cin >> altura;

     system("cls");
     area = (base * altura) / 2;
     cout << "area del triangulo: " << area << endl;

     return 0;
}
