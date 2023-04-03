#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;

};

struct Mahasiswa {
	string nim;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs;

	cout << "Masukkan nim: ";
	cin >> mhs.nim;
	cout << "Masukkan nama: ";
	cin >> mhs.nama;
	cout << "Masukkan Alamat: ";
	cout << "\tNama desa : ";
	cout << "Alamat:: " << endl;
	cout << "\tNama desa : ";
	cin >> mhs.alamat.desa;
	cout << "\tNama kota : ";
	cin >> mhs.alamat.kota;
	cout << "Masukkan umur : ";
	cin >> mhs.umur;

	cout << "\nNim : " << mhs.nim;
	cout << "\nNama : " << mhs.nama;
	cout << "\ndesa : " << mhs.alamat.desa;
	cout << "\nKota : " << mhs.alamat.kota;
	cout << "\numur : " << mhs.umur;
}


