#include <iostream>
#include <stdio.h>
using namespace std;

int jumlah(const char *s) {
  int x=0;
  for ( ; *s != '\0'; s++)
  ++x;
  return x;
}

int main() {
  char string[100];

  cout << "=========================================================" << endl;
  cout << "----------  PROGRAM MENGETAHUI JUMLAH KALIMAT  ----------" << endl;
  cout << "=========================================================" << endl << endl;

  cout << "         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :       Menghitung Jumlah Karakter        :       " << endl;
  cout << "         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

  cout << "  Contoh Program :" << endl << endl;
  cout << "  =>  Masukkan  =  Faizahel" << endl;
  cout << "  =>  Keluaran  =  8" << endl << endl;

  cout << "=========================================================" << endl << endl;
  cout << "  Masukkan Kata / Kalimat  :  "; gets(string);
  cout << "  Jumlah Karakter adalah   :  " << jumlah(string) << endl << endl;

  cout << "========================================================" << endl;
  cout << "------   PROGRAM EFEK HURUF AWAL KAPITAL SELESAI  ------" << endl;
  cout << "========================================================" << endl << endl;

  cout << "source code by : Faizahel Joasa Ariesta";
  return 0;
}