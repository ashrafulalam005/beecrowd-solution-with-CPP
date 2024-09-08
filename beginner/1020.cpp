#include <iostream>
using namespace std;

int main()
{
    int d;
    cin >> d;
    int ano = d/365;
    int mes = (d-(365*ano))/30;
    int dia = (d-(365*ano)-(30*mes));
    cout << ano << " ano(s)" <<endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" <<endl;
    return 0;
}
