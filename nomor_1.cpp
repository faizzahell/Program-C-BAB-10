#include <iostream>
using namespace std;

int pilihan;
string tampilan, lanjutkan;

static string hari[7] = {
    "Minggu",
    "Senin",
    "Selasa",
    "Rabu",
    "Kamis",
    "Jum'at",
    "Sabtu"
};

void search(string *day) {
  day = hari;
  tampilan = *(day + (pilihan - 1));
}


int main() {
  cout << "=========================================================" << endl;
  cout << "-----------  PROGRAM MENAMPILKAN PILIHAN HARI  ----------" << endl;
  cout << "=========================================================" << endl << endl;

  cout << "          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~        " << endl;
  cout << "         :  Menampilkan Hari Sesuai Dengan Kode  :       " << endl;
  cout << "          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~        " << endl << endl;

  cout << "  Daftar Kode Hari  :" << endl << endl;
  cout << "  1. Minggu" << endl;
  cout << "  2. Senin" << endl;
  cout << "  3. Selasa" << endl;
  cout << "  4. Rabu" << endl;
  cout << "  5. Kamis" << endl;
  cout << "  6. Jum'at" << endl;
  cout << "  7. Sabtu" << endl << endl;

  cout << "=========================================================" << endl << endl;

  programBerjalan:

  cout << "  Masukkan Kode Hari  :  "; cin >> pilihan;
  cout << endl;
  cout << "=========================================================" << endl << endl;

  search(hari);

  if (pilihan > 7 || pilihan < 1) {
    cout << "========================================================" << endl;
		cout << "-------  Kode pilihan yang anda masukkan SALAH!  -------" << endl;
		cout << "========================================================" << endl << endl;
    goto programBerjalan; 
  }

  cout << "  =>  Kode hari yang anda pilih adalah " << pilihan << endl;
  cout << "  =>  Menampilkan Hari " << tampilan << endl << endl;

  melanjutkan:

  cout << "========================================================" << endl << endl;
	cout << "  Melanjutkan menjalankan program ? (y/n)  :  "; cin >> (lanjutkan);
	cout << endl;
	cout << "========================================================" << endl << endl;

  if (lanjutkan == "y" || lanjutkan == "Y") {
		goto programBerjalan;
	} else if (lanjutkan == "n" || lanjutkan == "N") {
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

  cout << "source code by : Faizahel Joasa Ariesta";
  return 0;

}
