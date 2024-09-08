#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    double R,volume;
    cin >> R;
    double pie = 3.14159;
    volume = (4.0/3)*pie*R*R*R;
    cout << "VOLUME = " << fixed << setprecision(3) << volume <<endl;
    return 0;
}
