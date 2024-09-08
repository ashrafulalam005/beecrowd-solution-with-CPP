#include <iostream>
#include <iomanip> 
using namespace std;
 
int main()
{
    int t,v;
    cin >> t >> v ;
    int d = v*t;
    double r = (d/12.0);
    cout << fixed << setprecision(3) << r <<endl;
    return 0;
}
