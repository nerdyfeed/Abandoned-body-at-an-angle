#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
setlocale (LC_ALL, "rus");
double V, T;
cout << " V = "; cin >> V;
cout << "\n T = "; cin >> T;
cout << "Угол = "<< asin(9.8*T/(V+V))*(90/asin(1.0)) << endl;
cin.ignore();
cin.get();
return 0;
}