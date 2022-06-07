#include <iostream>
#include <cmath>

using namespace std;

int main (){
    double a, b, kat, rad;
    cout << "Podaj dlugosc boku a: ";
    cin >> a;
    cout << "Podaj slugosc boku b: ";
    cin >> b;
    cout << "Podaj kat miedzy bokami (w stopniach): ";
    cin >> kat;
    rad = (kat*M_PI)/180;
    cout << "Pole tego trojkata jest rowne: " << (a*b*sin(rad))/2;
    return 0;
}
 //Kacper Jajuga D2
