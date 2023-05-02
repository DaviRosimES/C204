#include <iostream>

using namespace std;

int main()
{
    int tam, x;
    int *vetor, *p;

    // Entrada
    cin >> tam;

    vetor = new int[tam];
    p = vetor;
    for(int i = 0; i < tam; i++)
    {
        cin >> x;
        *p = x;
        p++;
    }

    // Saída
    p = vetor;
    for(int i = 0; i < tam; i++)
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    delete[] vetor;

    return 0;
}
