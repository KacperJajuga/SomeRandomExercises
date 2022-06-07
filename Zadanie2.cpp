#include <iostream>
#include <cmath>

using namespace std;

int main (){

//    Zadanie 1

    cout << "-------------" << endl;
    cout << "Zadanie 1" << endl;
    cout << "-------------" << endl << endl;

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
        cout << x << " jest liczba parzysta" << endl << endl;
    else
        cout << x << " jest liczba nieparzysta" << endl << endl;

    //Zadanie 2

    cout << "-------------" << endl;
    cout << "Zadanie 2" << endl;
    cout << "-------------" << endl << endl;

    double u;
    cout << "Prosze o podanie wartosci x: ";
    cin >> u;
    if (u >= -10 && u <= 0)
        cout << "Wartosc funkcji y(x) = " << ((2*u*u)/3)+(u/2) << endl << endl;
    else if (u > 0 && u <= M_PI)
        cout << "Wartosc funkcji y(x) = " << 1/(sin(u)+2) << endl << endl;
    else
        cout << "Wartosc funkcji y(x) = " << -2*u << endl << endl;

    //Zadanie 3

    cout << "-------------" << endl;
    cout << "Zadanie 3" << endl;
    cout << "-------------" << endl << endl;

    int wybor;
    cout << "Podaj: "<< endl;
    cout << "1 - Aby obliczyc objetosc kuli." << endl;
    cout << "2 - Aby obliczyc objetosc stozka." << endl;
    cout << "3 - Aby obliczyc pole prostokata."<< endl;
    cin >> wybor;
    switch(wybor){
    case 1:
        double R;
        cout << "Prosze podac promien kuli: ";
        cin >> R;
        cout << "Promien kuli wynosi: " << (4*M_PI*R*R*R)/3 << endl << endl;
        break;
    case 2:
        double r, h;
        cout << "Prosze podac promien podstawy stozka: ";
        cin >> r;
        cout << "Prosze podac wysokosc stozka: ";
        cin >> h;
        cout << "Objetosc tego stozka wynosi: " << (M_PI*r*r*r*h)/3 << endl << endl;
        break;
    case 3:
        double a, b;
        cout << "Prosze podac dlugosc boku a: ";
        cin >> a;
        cout << "Prosze podac slugosc boku b: ";
        cin >> b;
        cout << "Pole tego prostokata wynosi: " << a*b << endl << endl;
        break;
    default:
        cout << "Podana zostala bledna liczba" << endl << endl;
    }

//    Zadanie 4

    cout << "-------------" << endl;
    cout << "Zadanie 4" << endl;
    cout << "-------------" << endl << endl;

    double c, d, kat, rad;
    cout << "Podaj dlugosc boku a: ";
    cin >> c;
    cout << "Podaj slugosc boku b: ";
    cin >> d;
    cout << "Podaj kat miedzy bokami (w stopniach): ";
    cin >> kat;
    rad = (kat*M_PI)/180;
    cout << "Pole tego trojkata jest rowne: " << (c*d*sin(rad))/2 << endl << endl;

//    Zadanie 5

    cout << "-------------" << endl;
    cout << "Zadanie 5" << endl;
    cout << "-------------" << endl << endl;

    double waga_paczki;
    int odleglosc;
    cout << "Prosze podac wage paczki (w kilogramach): ";
    cin >> waga_paczki;
    cout << "Prosze podac odleglosc (w kilometrach): ";
    cin >> odleglosc;
    if (waga_paczki < 0 || waga_paczki > 20 || odleglosc <= 0)
        cout << "Nie mozna wyslac takiej paczki." << endl;
    else{
        if (waga_paczki <= 2){
            if (odleglosc % 100 != 0)
                cout << "Za przesylke zaplacisz: " << ((odleglosc/100)+1)*1.1 << endl;
            else
                cout << "Za przesylke zaplacisz: " << (odleglosc/100)*1.1 << endl;
        }
        else if (waga_paczki <= 6){
            if (odleglosc % 100 != 0)
                cout << "Za przesylke zaplacisz: " << ((odleglosc/100)+1)*2.2 << endl;
            else
                cout << "Za przesylke zaplacisz: " << (odleglosc/100)*2.2 << endl;
        }
        else if (waga_paczki <= 10){
            if (odleglosc % 100 != 0)
                cout << "Za przesylke zaplacisz: " << ((odleglosc/100)+1)*3.7 << endl;
            else
                cout << "Za przesylke zaplacisz: " << (odleglosc/100)*3.7 << endl;
        }
        else if (waga_paczki <= 20){
            if (odleglosc % 100 != 0)
                cout << "Za przesylke zaplacisz: " << ((odleglosc/100)+1)*4.8 << endl;
            else
                cout << "Za przesylke zaplacisz: " << (odleglosc/100)*4.8 << endl;
        }
    }

//    Zadanie 5 próba 2

    cout << "-------------" << endl;
    cout << "Zadanie 5v2" << endl; //nie byłem pewien czy odległość może być typu int, więc zrobiłem też wersję z double 😅
    cout << "-------------" << endl << endl;

    double waga_paczki_v2, odleglosc_v2, zmienna_pomocnicza1 = 0;
    int zmienna_pomocnicza2 = 0;
    cout << "Prosze podac wage paczki (w kilogramach): ";
    cin >> waga_paczki_v2;
    cout << "Prosze podac odleglosc (w kilometrach): ";
    cin >> odleglosc_v2;
    zmienna_pomocnicza1 = odleglosc_v2;
    while (zmienna_pomocnicza1>99){
                zmienna_pomocnicza2++;
                zmienna_pomocnicza1 -= 100;
    }
    if (waga_paczki_v2 < 0 || waga_paczki_v2 > 20 || odleglosc_v2 <= 0)
        cout << "Nie mozna wyslac takiej paczki." << endl;
    else{
        if (waga_paczki_v2 <= 2){
            if (odleglosc_v2 - (zmienna_pomocnicza2*100) != 0){
                cout << "Za przesylke zaplacisz: " << (zmienna_pomocnicza2+1)*1.1 << endl;
            }
            else
                cout << "Za przesylke zaplacisz: " << zmienna_pomocnicza2*1.1 << endl;
        }
        else if (waga_paczki_v2 <= 6){
            if (odleglosc_v2 - (zmienna_pomocnicza2*100) != 0){
                cout << "Za przesylke zaplacisz: " << (zmienna_pomocnicza2+1)*2.2 << endl;
            }
            else
                cout << "Za przesylke zaplacisz: " << zmienna_pomocnicza2*2.2 << endl;
        }
        else if (waga_paczki_v2 <= 10){
            if (odleglosc_v2 - (zmienna_pomocnicza2*100) != 0){
                cout << "Za przesylke zaplacisz: " << (zmienna_pomocnicza2+1)*3.7 << endl;
            }
            else
                cout << "Za przesylke zaplacisz: " << zmienna_pomocnicza2*3.7 << endl;
        }
        else if (waga_paczki_v2 <= 20){
            if (odleglosc_v2 - (zmienna_pomocnicza2*100) != 0){
                cout << "Za przesylke zaplacisz: " << (zmienna_pomocnicza2+1)*4.8 << endl;
            }
            else
                cout << "Za przesylke zaplacisz: " << zmienna_pomocnicza2*4.8 << endl;
        }
    }

    return 0;
}
 //Kacper Jajuga D2
