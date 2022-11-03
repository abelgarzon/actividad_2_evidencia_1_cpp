#include <iostream>
#include <string>

using namespace std;

int main()
{

     float area;
     float base_min;
     float base_max;
     float altura;

     cout << "Favor ingrese la base mayor (B) del trapecio: ";
     cin >> base_max;

     cout << "Favor ingrese la base menor (b) del trapecio";
     cin >> base_min;

     cout << "Favor ingrese la altura (h) del trapecio";
     cin >> altura;

     system("cls");
     area = (base_max + base_min) * altura / 2;
     cout << "area del trapecio: " << area << endl;

     return 0;
}
