#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string nama;
	string alamat;
	int umur;

};

int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "20220140123";
	mhs1.nama = "Anggi Puspita";
	mhs1.alamat = "Cirebon";
	mhs1.umur = 18;

	cout << "masukan NIM : ";
	cin >> mhs2.NIM;
	cout << "masukan Nama : ";
	cin >> mhs2.nama;
	cout << "masukan alamat : ";
	cin >> mhs2.alamat;
	cout << "masukan umur : ";
	cin >> mhs2.umur;

	cout << "\nNIM = " << mhs1.NIM;
	cout << "\nNama = " << mhs1.nama;
	cout << "\nAlamat = " << mhs1.alamat;
	cout << "\nUmur = " << mhs1.umur;

	cout << "\n\nNIM = " << mhs2.NIM;
	cout << "\nNama = " << mhs2.nama;
	cout << "\nAlamat = " << mhs2.alamat;
	cout << "\nUmur = " << mhs2.umur
}

