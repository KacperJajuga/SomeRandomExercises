#include <iostream>
#include <math.h>

using namespace std;

int main (){
    int wybor;
    cout << "Wcisnij: "<< endl;
    cout << "1 - Aby obliczyc objetosc kuli." << endl;
    cout << "2 - Aby obliczyc objetosc stozka." << endl;
    cout << "3 - Aby obliczyc pole prostokata."<< endl;
    cin >> wybor;
    switch(wybor){
    case 1:
        double R;
        cout << "Prosze podac promien kuli: ";
        cin >> R;
        cout << "Promien kuli wynosi: " << (4*M_PI*R*R*R)/3 << endl;
        break;
    case 2:
        double r, h;
        cout << "Prosze podac promien podstawy stozka: ";
        cin >> r;
        cout << "Prosze podac wysokosc stozka: ";
        cin >> h;
        cout << "Objetosc tego stozka wynosi: " << (M_PI*r*r*r*h)/3 << endl;
        break;
    case 3:
        double a, b;
        cout << "Prosze podac dlugosc boku a: ";
        cin >> a;
        cout << "Prosze podac slugosc boku b: ";
        cin >> b;
        cout << "Pole tego prostokata wynosi: " << a*b << endl;
    default:
        cout << "Podana zostala bledna liczba" << endl;
        break;
    }
    return 0;
}
 //Kacper Jajuga D2
