#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int tam, x, aux;
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
        if(x > 0 && x%2==0)
        {
            aux++;
        }
    }

    // Saída
    cout << aux << endl;

    delete[] vetor;

    return 0;
}
