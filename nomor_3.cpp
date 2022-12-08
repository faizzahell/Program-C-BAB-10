#include <iostream>
#include <conio.h>
using namespace std;

char word[100];
string lanjutkan;

void convert(char *s) {
  if (*s >='a' && *s <= 'z') {
    *s -= 32;
  }
}

int main() {
  cout << "=========================================================" << endl;
  cout << "--------  PROGRAM EFEK HURUF AWAL BERUPA KAPITAL  -------" << endl;
  cout << "=========================================================" << endl << endl;

  cout << "         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :       Huruf Pertama Berupa Kapital      :       " << endl;
  cout << "         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

  cout << "  Contoh Program :" << endl << endl;
  cout << "  =>  Masukkan  =  faizahel" << endl;
  cout << "  =>  Keluaran  =  Faizahel" << endl << endl;

  cout << "=========================================================" << endl << endl;
  cout << "  Masukkan kalimat / kata   :  "; gets(word);
  convert(word);
  cout << "  Kalimat / kata yang baru  :  " << word << endl << endl;
  cout << "=========================================================" << endl << endl;

  cout << "========================================================" << endl;
  cout << "------   PROGRAM EFEK HURUF AWAL KAPITAL SELESAI  ------" << endl;
  cout << "========================================================" << endl << endl;

  cout << "source code by : Faizahel Joasa Ariesta";
  return 0;

}
