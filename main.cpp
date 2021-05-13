#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d, e, f, perimetro, area;
    cout.precision(1);
    cin >> a;
    cin >> b;
    cin >> c;
    d = a - b;
    e = a - c;
    f = b - c;
    if (d >= c || e >= b || f >= a){
        area = ( ( a + b ) * c ) / 2;
        cout << "Area = " << fixed << area <<endl;
    }else{
    perimetro = a + b + c;
    cout << "Perimetro = " << fixed << perimetro <<endl;
    }
    return 0;
}
