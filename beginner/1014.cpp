#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    int X;
    float Y;
    cin >> X >> Y;
    double avg = X/Y;
    cout << fixed << setprecision(3) << avg << " km/l" <<endl;
    return 0;
}
