#include <iostream>

using namespace std;

int main (){
    int x, y;
    cout << "Podaj x: ";
    cin >> x;
    cout << "Podaj y: ";
    cin >> y;
    if (x > y)
        cout << x << " jest wieksze od " << y << endl;
    else if (y > x)
        cout << y << " jest wieksze od " << x << endl;
    else
        cout << x << " jest rowne " << y << endl;
    if (x%2==0)
        cout << x << " jest liczba parzysta" << endl;
    else
        cout << x << " jest liczba nieparzysta" << endl;
    return 0;
}
 //Kacper Jajuga D2
