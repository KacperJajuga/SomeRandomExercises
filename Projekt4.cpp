#include <iostream>

using namespace std;

int main ()
{
    char pytanie;
    int a;
    do{
        cout << "Podaj liczbe: ";
        cin >> a;
        cout << a << "  " << a*a << endl;
        cout << "Czy wykonac ponownie? (t/n): ";
        cin >> pytanie;
    } while (pytanie == 't' || pytanie == 'T');
    return 0;
}
