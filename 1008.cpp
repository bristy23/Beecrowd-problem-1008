#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //n = employee's number
    //h = working hour
    //s = salary
    //ph = per hour recive amount in floating point
    int  n,h;
    float s,ph;
    cin >> n >> h >> ph;
    s = (h * ph);
    cout << "NUMBER = " << n << fixed << setprecision(2) << endl;
    cout << "SALARY = U$ " << s << endl;
}
