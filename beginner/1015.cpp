#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    float x1,x2,y1,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    double dist1 = (x1-x2)*(x1-x2);
    double dist2 = (y1-y2)*(y1-y2);
    double distance = sqrt(dist1+dist2);
    cout << fixed << setprecision(4) << distance << endl;
    return 0;
}
