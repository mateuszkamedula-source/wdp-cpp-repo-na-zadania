#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Podaj trzy liczby: ";
    cin >> a >> b >> c;

    cout << "Suma: " << a + b + c << endl;
    cout << "Roznica pierwszej i drugiej: " << a - b << endl;
    cout << "Iloczyn pierwszej i trzeciej: " << a * c << endl;
    cout << "Iloraz trzeciej i drugiej: " << c / b << endl;

    return 0;
}
