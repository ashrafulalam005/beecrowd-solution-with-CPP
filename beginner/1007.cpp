#include <iostream>
using namespace std;
 
int main()
{ 
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    int PROD1 = A*B;
    int PROD2 = C*D;
    int DIFERENCA = PROD1-PROD2;
    cout << "DIFERENCA = " << DIFERENCA <<endl;
    return 0;
}
