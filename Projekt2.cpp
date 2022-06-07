#include <iostream>

using namespace std;

int main () {
    int n, suma=0;
    cout << "Prosze podac dodatnia liczbe calkowita: ";
    cin >> n;
    if (n<1)
        cout << "Bledna liczba." << endl;
    else{
        for (int i=0; i <= n; i++){
                suma += i;
        }
        cout << suma << endl;
    }
    return 0;
}
