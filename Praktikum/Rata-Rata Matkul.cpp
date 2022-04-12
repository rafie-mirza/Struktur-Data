//Menggunakan For
#include<stdio.h>
int main(){
	char nama[10],matkul[25];
	int i,n ;
    float ratarata, jumlah, x;
    printf("Nama Mahasiswa :\n");
    scanf("%d",nama);
    printf("Mata Kuliah :\n");
    scanf("%d",matkul);
    printf("Masukkan banyak data :  ");
    scanf ("%d",&n);
    jumlah = 0;
    for (i=1;i<=n;i++)
    {
        printf ("Masukkan nilai data ke-%d: ",i);
        scanf ("%f",&x);
        jumlah=jumlah+x;

    }
    ratarata=jumlah/n;
    printf("Ratarata: %.2f",ratarata);
}

//Menggunakan While
#include<stdio.h>
int main(){
	char nama[10],matkul[25];
	int i,n ;
    float ratarata, jumlah, x;
    printf("Nama Mahasiswa :\n");
    scanf("%d",nama);
    printf("Mata Kuliah :\n");
    scanf("%d",matkul);
    printf ("Masukkan banyak data : ");
    scanf ("%d",&n);
    jumlah=0; i=1;
    while (i<=n)
    {
        printf ("Masukkan nilai data ke- %d: ",i);
        scanf ("%f",&x);
        jumlah=jumlah+x;
        i++;
    }
    ratarata=jumlah/n;
    printf("ratarata: %.2f",ratarata);
}

