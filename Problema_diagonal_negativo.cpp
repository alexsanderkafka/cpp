#include <iostream>

using namespace std;

int main ()
{
    int n;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int matriz[10][10];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << "Elemento [" << i << " , " << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        cout << matriz[i][i] << "   ";
    }

    cout << endl;

    int contNegativos = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            if (matriz[i][j] < 0) {
                contNegativos++;
            }
        }
    }

    cout << "Quantidade de negativos = " << contNegativos << endl;

    return 0;
}
