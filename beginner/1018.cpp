#include <iostream>
using namespace std;
 
int main()
{
    int x,a,b,c,d,e,f,g;
    cin >> x;
    a = x/100;
    b = (x-(100*a))/50;
    c = (x-(100*a)-(50*b))/20;
    d = (x-(100*a)-(50*b)-(20*c))/10;
    e = (x-(100*a)-(50*b)-(20*c)-(10*d))/5;
    f = (x-(100*a)-(50*b)-(20*c)-(10*d)-(5*e))/2;
    g = (x-(100*a)-(50*b)-(20*c)-(10*d)-(2*f)-(5*e)); 
    cout << x << endl;
    cout << a << " nota(s) de R$ 100,00" << endl;
    cout << b << " nota(s) de R$ 50,00" << endl;
    cout << c << " nota(s) de R$ 20,00" << endl;
    cout << d << " nota(s) de R$ 10,00" << endl;
    cout << e << " nota(s) de R$ 5,00" << endl;
    cout << f << " nota(s) de R$ 2,00" << endl;
    cout << g << " nota(s) de R$ 1,00" << endl;
    return 0;
}
