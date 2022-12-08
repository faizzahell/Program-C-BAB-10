#include <iostream>
using namespace std;

char word[100];
string lanjutkan;

int jumlah(char *s) {
  int x = 0;
for ( ; *s != '\0'; s++)
  ++x;
  return x;
}

char reverse(char *s) {
  for (int i = (jumlah(word) - 1); i >= 0; i--) {
    cout << *(s + i);
  }
}

int main() {
  cout << "=========================================================" << endl;
  cout << "---------  PROGRAM MEMBALIKAN KALIMAT (REVERSE)  --------" << endl;
  cout << "=========================================================" << endl << endl;

  cout << "         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       : Menampilkan huruf terbalik dari Kalimat :       " << endl;
  cout << "         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

  cout << "  Contoh Program :" << endl << endl;
  cout << "  =>  Masukkan  =  I Love U" << endl;
  cout << "  =>  Keluaran  =  U evoL I" << endl << endl;

  cout << "=========================================================" << endl << endl;
  cout << "  Masukkan kalimat          :  "; gets(word);
  cout << "  Kalimat setelah direverse :  "; reverse(word); 
  cout << endl << endl;

  cout << "========================================================" << endl;
  cout << "---------   PROGRAM MENAMPILKAN HARI SELESAI   ---------" << endl;
  cout << "========================================================" << endl << endl;

  cout << "source code by : Faizahel Joasa Ariesta";
  return 0;

}