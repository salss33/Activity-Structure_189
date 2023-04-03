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
}