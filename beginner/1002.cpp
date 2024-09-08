#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double r;
    cin >> r;
    double pi = 3.14159;
    double area = pi * r * r;
    cout << "A=" << fixed << setprecision(4) << area <<endl;
    return 0;
}
