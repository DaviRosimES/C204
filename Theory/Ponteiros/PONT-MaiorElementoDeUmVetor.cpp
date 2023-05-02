#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{
    int tam, x, maior=INT_MIN;
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
        if(x > maior)
        {
            maior = x;
        }
    }

    // Saída
    cout << maior << endl;

    delete[] vetor;

    return 0;
}
