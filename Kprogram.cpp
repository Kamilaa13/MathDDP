#include <iostream>
#include <cmath>
using namespace std;

void hitungPangkat();
void hitungJumlahDigit();
void cekBilanganPrima();
void tampilkanTabelPerkalian();
void tampilkanMenu(); 

int main() { 
int pilihan;
  
  do {
    tampilkanMenu();
    cout << "Pilih operasi yang diinginkan (1-5): ";
    cin >> pilihan; 

    switch(pilihan) {
      case 1:
        hitungPangkat();
        break;
      case 2:
        hitungJumlahDigit();
        break;
      case 3:
        cekBilanganPrima();
        break;
      case 4:
        tampilkanTabelPerkalian();
        break;
      case 5:
        cout << "Keluar dari program. Terima kasih!" << endl;
        break;
      default:
        cout << "Pilihan tidak valid! Silakan coba lagi."<<endl;
    }
  } while(pilihan != 5); 
  return 0;
} 

  
