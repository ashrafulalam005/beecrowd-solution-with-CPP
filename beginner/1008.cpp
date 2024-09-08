#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    int a,b;
    float c;
    cin >> a >> b >> c;
    double  x = b*c;
    cout << "NUMBER = " << a << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << x << endl;
    return 0;
}
