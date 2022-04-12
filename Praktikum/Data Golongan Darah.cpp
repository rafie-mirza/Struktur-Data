#include<conio.h>
#include<iostream>
#include<iomanip.h>
using namespace std;
main()
{
int i,s;
char nama[5][20];
float nilai1[5];
float nilai2[5];
double hasil[5];

cout<<"Masukkan jumlah siswa: ";
cin>>s;
clrscr();
for(i=1;i<=s;i++)
{
cout<<"Data Ke – "<<i<<endl;
cout<<"Nama Siswa : "; cin>>nama[i];
cout<<"Golongan Darah : "; cin>>nilai1[i];
cout<<"Jumlah Saudara: "; cin>>nilai2[i];
hasil[i] = (nilai1[i] * 0.40)+ (nilai2[i] * 0.60);
cout<<endl;
}

for(i=1;i<=s;i++)
{
cout<<setiosflags(ios::left)<<setw(4)<<i;
cout<<setiosflags(ios::left)<<setw(20)<<nama[i];
cout<<setprecision(2)<<" "<<nilai1[i];
cout<<setprecision(4)<<" "<<nilai2[i];
cout<<setprecision(8)<<" "<<hasil[i]<<endl;
}

cout<<"——————————————";
cout<<"——-"<<endl;
getch();

}
