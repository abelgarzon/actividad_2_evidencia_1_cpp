#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

     float area;
     float radio;

     cout << "Favor ingrese el redio (r) del circulo: ";
     cin >> radio;

     system("cls");
     area = M_PI * pow(radio, 2);
     cout << "area del circulo: " << area << endl;

     return 0;
}
