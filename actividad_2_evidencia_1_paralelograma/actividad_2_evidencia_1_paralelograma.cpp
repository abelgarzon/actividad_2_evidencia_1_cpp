#include <iostream>
#include <string>

using namespace std;

int main(){

     float area;
     float base;
     float altura;

     cout << "Favor ingrese la base del paralelograma: ";
     cin >> base;

     cout << "Favor ingrese la altura del paralelograma: ";
     cin >> altura;

     system("cls");
     area = base * altura;
     cout << "area del paralelograma: " << area << endl;

     return 0;
}
