#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "2021014011";
	mhs1.nama = "tasya";
	mhs1.alamat = "semarang";
	mhs1.umur = 20;

cout << "Masukkan nim: ";
cin >> mhs2.nim;
cout << "Masukkan nama: ";
cin >> mhs2.nama;
cout << "Masukkan alamat: ";
cin >> mhs2.alamat;
cout << "Masukkan umur: ";
cin >> mhs2.umur;

cout << "\nnim : " << mhs1.nim;
cout << "\nnama : " << mhs1.nama;
cout << "\nalamat : " << mhs1.alamat;
cout << "\numur : " << mhs1.umur;

cout << "\nNim : " << mhs2.nim;
cout << "\nnama :  " << mhs2.nama;
cout << "\nalamat : " << mhs2.alamat;
cout << "\numur : " << mhs2.umur;