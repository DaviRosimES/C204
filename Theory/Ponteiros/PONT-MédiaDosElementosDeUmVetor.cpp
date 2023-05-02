#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int tam, x;
    int *vetor, *p;
    float media=0.0;

    // Entrada
    cin >> tam;

    vetor = new int[tam];
    p = vetor;
    for(int i = 0; i < tam; i++)
    {
        cin >> x;
        media += x;
        *p = x;
        p++;
    }

    // Saída
    media /= tam;

    cout << fixed << setprecision(2) << media;

    delete[] vetor;

    return 0;
}
