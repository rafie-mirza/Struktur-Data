#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int i, n, data[50];
    float rata,jum;

    cout << " Banyaknya Data = ";
    cin >> n;
    cout << endl;

    for (i=0; i<n; i++)
        {
           cout << " Data " << "[" << i+1 << "]" << " = ";
           cin >> data[i];
           jum += data[i];
        }

    rata=jum/n;

    cout << endl;
    cout << " Banyaknya data = " << n << endl;
    cout << " Rata-rata = " << rata << endl;
    cout << " Jumlah = " << jum << endl;

    double sigma = sigma+sqrt(data[i]-rata);
    double sd = sqrt(sigma/n);
    cout << " Sigma = " << sd;

  	getch();
}
