#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;

int jumlahkarakter(char *text) {
 int jumlah = 0;
 while (*(text++) != '\0')
  jumlah++;

 return jumlah;
}

int main() {
 char string[100];
 std::cout << "Tuliskan kata: ";
 std::cin.getline(string, 100);
 std::cout << "Jumlah Karakter: " << jumlahkarakter(string);

 return 0;
}
