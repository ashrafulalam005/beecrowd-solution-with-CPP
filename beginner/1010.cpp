#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    int procode1 , prounit1 , procode2 , prounit2;
    double pricepu1 , pricepu2;
    double vap;
    cin >> procode1 >> prounit1 >> pricepu1;
    cin >> procode2 >> prounit2 >> pricepu2;
    vap = (prounit1*pricepu1)+(prounit2*pricepu2); 
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << vap <<endl; 
    return 0;
}
