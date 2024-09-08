#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    float A,B,C;
    cin >> A >> B >> C;
    double pie = 3.14159;
    double triangulo = (0.5)*A*C;
    double circulo = (pie)*C*C;
    double trapezio = (0.5)*(A+B)*C;
    double quadrado = B*B;
    double retangulo = A*B;
    
    cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circulo << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezio << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << quadrado << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << retangulo << endl;  
    return 0;
}
