#include <iostream>
using namespace std;

struct AlamatDetail 
{
	string desa;
	string kota;
};

struct mahasiswa
{
	string Nim;
	string nama;
	AlamatDetail alamat;
	int Umur;
};

int main() {
	mahasiswa mhs;

	cout << "masukan NIM : ";
	cin >> mhs.Nim;
	cout << "masukan nama : ";
	cin >> mhs.nama;
	cout << "alamat : ";
	cout << "\tDesa : ";
	cin >> mhs.alamat.desa;
	cout << "\tKota : ";
	cin >> mhs.alamat.kota;
	cout << "masukan umur : ";
	cin >> mhs.Umur;
}