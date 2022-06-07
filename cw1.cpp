#include <iostream>

using namespace std;

int main (){
    int liczbaOczek;
    cin >> liczbaOczek;
    switch(liczbaOczek){
case 1:
    cout << "-----" << endl;
    cout << "|   |" << endl;
    cout << "| o |" << endl;
    cout << "|   |" << endl;
    cout << "-----" << endl;
case 2:
    cout << "-----" << endl;
    cout << "|o  |" << endl;
    cout << "|   |" << endl;
    cout << "|  o|" << endl;
    cout << "-----" << endl;
case 3:
    cout << "-----" << endl;
    cout << "|o  |" << endl;
    cout << "| o |" << endl;
    cout << "|  o|" << endl;
    cout << "-----" << endl;
case 4:
    cout << "-----" << endl;
    cout << "|o o|" << endl;
    cout << "|   |" << endl;
    cout << "|o o|" << endl;
    cout << "-----" << endl;
case 5:
    cout << "-----" << endl;
    cout << "|o o|" << endl;
    cout << "| o |" << endl;
    cout << "|o o|" << endl;
    cout << "-----" << endl;
case 6:
    cout << "-----" << endl;
    cout << "|o o|" << endl;
    cout << "|o o|" << endl;
    cout << "|o o|" << endl;
    cout << "-----" << endl;
default:
    cout << "W jaki sposob udalo Ci sie wylosowac inna liczbe?" << endl;
    }
}
