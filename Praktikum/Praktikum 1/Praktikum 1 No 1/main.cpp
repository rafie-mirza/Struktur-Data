#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, n, data[100];
	float rata, jumlah;

	cout << " Banyaknya Data: ";
	cin >> n;
	cout << endl;

	for (i=0; i<n; i++)
		{
			cout << " Data " << "[" << i+1 << "]" << " = ";
			cin >> data[i];
			jumlah += data[i];
		}

	rata = jumlah/n;

	cout << endl;
	cout << "-------------------------------------" << endl;
    cout << " Banyaknya data = " << n << endl;
    cout << " Rata-rata = " << rata << endl;
    cout << " Jumlah = " << jumlah << endl;

  	getch();
}
