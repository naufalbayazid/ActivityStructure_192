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

	mhs1.nim = "20220140191";
	mhs1.nama = "Codet";
	mhs1.alamat = "Tapis";
	mhs1.umur = 22;

	cout << "Masukkan nim: ";
	cin >> mhs2.nim;
	cout << "Masukkan nama: ";
	cin >> mhs2.nama;
	cout << "Masukkan alamat: ";
	cin >> mhs2.alamat;
	cout << "Masukkan umur: ";
	cin >> mhs2.umur;

	cout << "\nNim : " << mhs1.nim;
	cout << "\nNama : " << mhs1.nama;
	cout << "\Alamat : " << mhs1.alamat;
	cout << "\numur : " << mhs1.umur;

	cout << "nNim : " << mhs2.nim;
	cout << "nNama : " << mhs2.nama;
	cout << "nAlamat : " << mhs2.alamat;
	cout << "numur : " << mhs2.umur;

		