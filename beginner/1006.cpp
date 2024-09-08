#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    double average = ((2*a)+(3*b)+(5*c))/(2+3+5);
    cout << "MEDIA = " << fixed << setprecision(1) << average << endl;
    return 0;
}
