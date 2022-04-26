#include <iostream>
using namespace std;

// deklrasi variabel
void merge(int arr[], int l, int m, int r) {
  int i = l;
  int j = m + 1;
  int k = l;

  // membuat temp array 
  int temp[5];

  while (i <= m && j <= r) {
    if (arr[i] <= arr[j]) {
      temp[k] = arr[i];
      i++;
      k++;
    } else {
      temp[k] = arr[j];
      j++;
      k++;
    }

  }

  // menyalin elemen yang tersisa di babak kedua jika ada  
  while (i <= m) {
    temp[k] = arr[i];
    i++;
    k++;

  }

  // menyalin elemen yang tersisa di babak kedua jika ada 
  while (j <= r) {
    temp[k] = arr[j];
    j++;
    k++;
  }

  // menyalin temp array ke array asli 
  for (int p = l; p <= r; p++) {
    arr[p] = temp[p];
  }
}

// l untuk indeks sebelah kiri and r untuk indeks sebelah kanan di subarray dari array untuk disortir  
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
      
    // mencari titik tengah
    int m = (l + r) / 2;

    // Rekrusif mergesort bagian pertama dan kedua
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // merge
    merge(arr, l, m, r);
  }
}

int main() {
  int myarray[5];
  //int arr_size = sizeof(myarray)/sizeof(myarray[0]);
  int arr_size = 5;

  cout << "Enter 5 integers in any order: " << endl;
  for (int i = 0; i < 5; i++) {
    cin >> myarray[i];
  }
  cout << "Before Sorting" << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }
  cout << endl;
  
  // memanggil mergesort(array,kanan,kiri) 
  mergeSort(myarray, 0, (arr_size - 1)); 
  
  // menampilkan hasil sorting melalui looping input
  cout << "After Sorting" << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }
  
  cout<<" "<<endl;
  return 0;
}
