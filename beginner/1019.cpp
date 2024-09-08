#include <iostream>
using namespace std;

int main()
{
    int s;
    cin >> s;
    int h = (s/3600);
    int m = (s-(h*3600))/60;
    int se = (s-(h*3600)-(60*m));
    cout << h << ":" << m << ":" << se <<endl;
    return 0;
}
