#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{
    int n, i;
    double alturaMedia, somaAltura, percentualMenores;

    cout << "QUANTAS PESSOAS SERAO DIGITADAS? ";
    cin >> n;

    string nomes[10] ;
    int idades[10];
    double alturas[10];

    for (i = 0; i < n; i++) {
        cout << "Dados da " << i + 1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    somaAltura = 0;
    for (i = 0; i < n; i++) {
        somaAltura = somaAltura + alturas[i];
    }

    alturaMedia = somaAltura / n;

    cout << fixed << setprecision(2) <<  "Altura media: " << alturaMedia << endl;

    int contMenor = 0;
    for(i = 0; i < n; i++) {
        if (idades[i] < 16) {
            contMenor++;
        }
    }

    percentualMenores = (double) contMenor * 100 / n;

    cout << fixed << setprecision(1) << "Pessoas com menos de 16 anos: " << percentualMenores <<  "%" << endl;
    for (i = 0; i < n; i++) {
        if (idades[i] < 16) {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
