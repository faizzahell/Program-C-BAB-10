#include <iostream>
#include <stdio.h>
using namespace std;

char kalimat[100], karakter[100], pilihan[1], fitur[1], lanjutkan[1];
string program;

int jumlah(char *s) {
  int x = 0;
  for ( ; *s != '\0'; s++)
  ++x;
  return x;
}

// Enkripsi Program

int siftingEnkripsi(char *s) {
  for (int i = 0; i < jumlah(kalimat); i++) {
    if (*s >= 'y' && *s <= 'z' || *s >= 'Y' && *s <= 'Z') {
      *s -= 24; 
    } else {
      *s += 2;
    }
    s++;
  }
}

int capitalizeEnkripsi(char *s) {
  for (int i = 0; i < jumlah(kalimat); i++) {
    if (i % 2 == 0) {
      if (*s >= 'a' && *s <= 'z') {
        *s -= 32;
        karakter[i] = true;
      } else {
        karakter[i] = false;
      }
    } else {
      if (*s >= 'A' && *s <= 'Z') {
        *s += 32;
        karakter[i] = true;
      } else {
        karakter[i] = false;
      }
    }
    s++;
  }
}

int simbolEnkripsi(char *s) {
  for (int i = 0; i < jumlah(kalimat); i++) {
    *s += ((i + 1) * 28 / 2 + 9);
    s++;
  }
}


// Deskripsi Program

int siftingDeskripsi (char *s) {
   for (int i = 0; i < jumlah(kalimat); i++) {
    if (*s >= 'a' && *s <= 'b' || *s >= 'A' && *s <= 'B') {
      *s += 24; 
    } else {
      *s -= 2;
    }
    s++;
  }
}

int capitalizeDeskripsi(char *s) {
  for (int i = 0; i < jumlah(kalimat); i++) {
    if (karakter[i] == true) {
      if (i % 2 == 0) {
        if (*s >= 'A' && *s <= 'Z') {
          *s += 32;
        }
      } else {
        if (*s >= 'a' && *s <= 'z') {
          *s -= 32;
        } 
      }
    } else {
      *s = *s;
    }
    s++;
  }
}

int simbolDeskripsi(char *s) {
  for (int i = 0; i < jumlah(kalimat); i++) {
    *s -= ((i + 1) * 28 / 2 + 9);
    s++;
  }
}


int main() {
  cout << "=========================================================" << endl;
  cout << "------------  PROGRAM ENKRIPSI DAN DESKRIPSI  -----------" << endl;
  cout << "=========================================================" << endl << endl;

  programBerjalan:

  cout << "          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~        " << endl;
  cout << "         : Pilihan Program Enkripsi / Deskripsi  :       " << endl;
  cout << "          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~        " << endl << endl;

  cout << "  =>  1. Enkripsi" << endl;
  cout << "  =>  2. Deskripsi" << endl << endl;

  cout << "=========================================================" << endl << endl;
  cout << "  Masukkan pilihan program  :  "; gets(pilihan);
  cout << endl;
  cout << "=========================================================" << endl << endl;

  switch (pilihan[0]) {
    case '1': program = "ENKRIPSI";
    break;

    case '2': program = "DESKRIPSI";
    break;

    default: cout << "========================================================" << endl;
		cout << "-------  Kode pilihan yang anda masukkan SALAH!  -------" << endl;
		cout << "========================================================" << endl << endl;
    goto programBerjalan;
    break;
  }

  cout << "          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~        " << endl;
  cout << "         :          Program ( " << program << " )         :       " << endl;
  cout << "          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~        " << endl << endl;

  cout << "  Pilihan program " << program << "  : " << endl << endl;
  cout << "  1.  Sifting " << endl;
  cout << "  2.  Capitalize-Uncapitalize " << endl;
  cout << "  3.  Simbolic Special " << endl << endl;

  cout << "=========================================================" << endl << endl;
  cout << "  Masukkan pilihan program  :  "; gets(fitur);
  cout << "  Masukkan kata / kalimat   :  "; gets(kalimat);
  cout << endl;
  cout << "=========================================================" << endl << endl;

  if (pilihan[0] == '1') {
    if (fitur[0] == '1') {
      siftingEnkripsi(kalimat);
    } else if (fitur[0] == '2') {
      capitalizeEnkripsi(kalimat);
    } else if (fitur[0] == '3') {
      simbolEnkripsi(kalimat);
    } else {
      cout << endl;
      cout << "========================================================" << endl;
      cout << "-------  Kode pilihan yang anda masukkan SALAH!  -------" << endl;
      cout << "========================================================" << endl << endl;
    }
  } else if (pilihan[0] == '2') {
    if (fitur[0] == '1') {
      siftingDeskripsi(kalimat);
    } else if (fitur[0] == '2') {
      capitalizeDeskripsi(kalimat);
    } else if (fitur[0] == '3') {
      simbolDeskripsi(kalimat);
    } else {
      cout << endl;
      cout << "========================================================" << endl;
      cout << "-------  Kode pilihan yang anda masukkan SALAH!  -------" << endl;
      cout << "========================================================" << endl << endl;
    }
  }

  cout << "  =>  Hasil kata / kalimat " << program << "  :  " << kalimat << endl << endl;

  melanjutkan:

  cout << "========================================================" << endl << endl;
	cout << "  Melanjutkan menjalankan program ? (y/n)  :  "; gets(lanjutkan);
	cout << endl;
	cout << "========================================================" << endl << endl;

  if (lanjutkan[0] == 'y' || lanjutkan[0] == 'Y') {
		goto programBerjalan;
	} else if (lanjutkan[0] == 'n' || lanjutkan[0] == 'N') {
		cout << endl;
		cout << "========================================================" << endl;
		cout << "---------   PROGRAM MENAMPILKAN HARI SELESAI   ---------" << endl;
		cout << "========================================================" << endl << endl;
	} else {
		cout << endl;
		cout << "========================================================" << endl;
		cout << "-------  Kode pilihan yang anda masukkan SALAH!  -------" << endl;
		cout << "========================================================" << endl << endl;
		goto melanjutkan;
	}

  cout << "========================================================" << endl;
  cout << "-------------   PROGRAM " << program << " SELESAI   -------------" << endl;
  cout << "========================================================" << endl << endl;

  cout << "source code by : Faizahel Joasa Ariesta";
  return 0;

}