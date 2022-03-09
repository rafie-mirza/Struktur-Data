#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct link{
    int data;
    struct link *prev;
};

struct infoku{
    struct link *atas=0;
    struct link *bawah=0;
}info;

link *hapus_data(infoku *info){
link *sebelumnya=0;
    if(info->atas!=0){
        sebelumnya=info->atas->prev;
        free(info->atas);
        info->atas=sebelumnya;
    }

    if(sebelumnya!=0){
        info->bawah=0;
    }

    return sebelumnya;
}

link *tambah_data(infoku *info){
link *penunjuk=0;
    penunjuk=(link*)malloc(sizeof(link));
    if(info->bawah==0){
        penunjuk->prev=0;
        info->bawah=penunjuk;
    }else penunjuk->prev=info->atas;
    info->atas=penunjuk;
    return penunjuk;
}

int main(){
int i=0;
int n=10;
struct link *penunjuk;
    info.atas=0;
    info.bawah=0;
    printf("Masukkan jumlah data!\n");
    scanf("%d", &n);

    while(i<n){
        penunjuk=tambah_data(&info);
        penunjuk->data=i*2;
        i++;
    }

    i=0;
    penunjuk=info.atas;
    while(penunjuk!=0){
        i++;
        printf("Tumpukan ke-%d : %d\n", i, penunjuk->data);
        penunjuk=penunjuk->prev;
    }

    hapus_data(&info);

    printf("\nSetelah data pertama dalam tumpukan dihapus?\n");
    i=0;
    penunjuk=info.atas;
    while(penunjuk!=0){
        i++;
        printf("Tumpukan ke-%d : %d\n", i, penunjuk->data);
        penunjuk=penunjuk->prev;
    }

    penunjuk=info.atas;
    while(penunjuk!=0){
        penunjuk=hapus_data(&info);
    }
    return 0;
}
