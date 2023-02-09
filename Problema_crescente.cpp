#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Digite dois numeros: " << endl;
    cin >> num1;
    cin >> num2;

    while (num1 != num2) {
        if (num1 > num2) {
            cout << "DECRESCENTE!" << endl;
        }
        else {
            cout << "CRESCENTE!" << endl;
        }
        cout << "Digite outros dois numeros: " << endl;
        cin >> num1;
        cin >> num2;
    }

    return 0;


}
