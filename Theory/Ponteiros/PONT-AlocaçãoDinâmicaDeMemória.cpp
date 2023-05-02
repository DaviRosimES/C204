#include <iostream>
#include <iomanip>

using namespace std;

struct aluno
{
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    void media();
};

void aluno::media()
{
    cout << (this->nota1 + this->nota2 + this->nota3 + this->nota4)/4.0;
}

int main()
{
    aluno *aluno = new struct aluno;

    cin >> aluno->nota1;
    cin >> aluno->nota2;
    cin >> aluno->nota3;
    cin >> aluno->nota4;

    aluno->media();

    delete aluno;

    return 0;
}
