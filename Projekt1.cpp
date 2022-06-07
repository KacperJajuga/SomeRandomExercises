#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int n;
    cout << "Prosze o podanie liczby: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << setw(4) << i;
    }
    cout << endl;
    for (int i = n; i > 0; i--){
        cout << setw(4) << i;
    }
    cout << endl;
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0)
            cout << setw(4) << i;
        else
            continue;
    }
    return 0;
}
