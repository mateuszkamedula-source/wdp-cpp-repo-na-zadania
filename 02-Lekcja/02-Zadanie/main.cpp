#include <iostream>
using namespace std;

int main() {
    double o1, o2, o3, o4, o5;

    cout << "Podaj 5 ocen: ";
    cin >> o1 >> o2 >> o3 >> o4 >> o5;

    double srednia = (o1 + o2 + o3 + o4 + o5) / 5;

    cout << "Srednia ocen: " << srednia << endl;

    return 0;
}
