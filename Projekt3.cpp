#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    srand(time(0));
    for (int i = 40; i <= 125; i++){
        cout << setw(3) << char(i);
    }
    cout << endl;
    for (int i = 0; i < 10; i++){
        int j=rand()%85+40;
        cout << j << " " << char(j) << ", ";
    }
    return 0;
}
