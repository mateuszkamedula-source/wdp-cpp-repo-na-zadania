#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double licz;

    cout << "Podaj rzeczywista: ";
    cin >> licz;

    cout << fixed;
    cout << setprecision(1) << liczba << endl;
    cout << setprecision(3) << liczba << endl;
    cout << setprecision(5) << liczba << endl;

    return 0;
}
