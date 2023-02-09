#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{
    double media;
    int idade1, idade2;
    string name1, name2;

    cout << "Dados da primeira pessoa: " << endl;
    cout << "Nome: ";
    getline(cin, name1);
    cout << "Idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa: " << endl;
    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, name2);
    cout << "Idade: ";
    cin >> idade2;

    cout << endl;

    media = (double) (idade1 + idade2) / 2;

    cout << fixed << setprecision(1);
    cout << "A idade media de " << name1 << " e "
            << name2 << " e de " << media << " anos" << endl;

    return 0;
}
