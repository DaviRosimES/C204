#include <iostream>
#include <iomanip>

using namespace std;

struct aluno
{
    int nota1 = 0;
    int nota2 = 0;
    int nota3 = 0;
    int nota4 = 0;
    float mediaIndividual();
    static float mediaTurma(aluno* alunos, int numAlunos);
};

float aluno::mediaIndividual()
{
    return ((this->nota1 + this->nota2 + this->nota3 + this->nota4)/4.0);
}

float aluno::mediaTurma(aluno* alunos, int numAlunos)
{
    float mediaTurma = 0.0;

    for (int i = 0; i < numAlunos; i++)
    {
        mediaTurma += alunos[i].mediaIndividual();
    }

    return mediaTurma / numAlunos;
}

int main()
{
    int numAlunos;

    cin >> numAlunos;

    aluno *alunos = new aluno[numAlunos];

    for (int i = 0; i < numAlunos; i++)
    {
        cin >> alunos[i].nota1;
        cin >> alunos[i].nota2;
        cin >> alunos[i].nota3;
        cin >> alunos[i].nota4;
    }

    float mediaDaTurma = aluno::mediaTurma(alunos, numAlunos);

    cout << fixed << setprecision(2) << mediaDaTurma << endl;

    delete[] alunos;

    return 0;
}
