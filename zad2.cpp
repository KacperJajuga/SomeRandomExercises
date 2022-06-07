#include <iostream>
#include <math.h>

using namespace std;

int main (){
    double x, y;
    cout << "Prosze o podanie wartosci x: ";
    cin >> x;
    if (x >= -10 && x <= 0)
        cout << "Wartosc funkcji y(x) = " << ((2*x*x)/3)+(x/2);
    else if (x > 0 && x <= M_PI)
        cout << "Wartosc funkcji y(x) = " << 1/(sin(x)+2);
    else
        cout << "Wartosc funkcji y(x) = " << -2*x;
    return 0;
}
 //Kacper Jajuga D2
