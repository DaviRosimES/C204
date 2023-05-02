#include <iostream>

using namespace std;

int main()
{
    // Questão 1
    int x, y;
    int *p, *q;

    x = 2;
    y = 3;

    p = &x;
    *p++;

    q = &y;

    cout << "Questão 1: " << (*p)+y << endl;

    //Questão 2
    float x2[3];
    float y2;
    float *p2;

    y2 = 4;
    p2 = &y2;

    cout << "Questão 2: ";
    for(int i=0;i<3;i++)
    {
        x2[i] = *p2*i;
        cout << x2[i] << " ";
    }
    cout << endl;

    //Questão 3
    int *p3;
    int x3[10];

    p3 = x3;
    cout << "Questão 3: " << *p3 << " ";

    p3 = &x3[2];
    cout << *p3 << endl;

    //Questão 4
    int a,b,c;
    int *p4;

    p4 = &a;

    *p4 = 2;
    p4=&b;
    *p4 = 3;
    c = 0;
    c = c+(*p4);
    p4 = &a;
    c = c+(*p4);
    cout << "Questão 4: " << c << endl;

    return 0;
}
