#include <iostream>
using namespace std;

struct AlamatDetail
{
	char Desa[20];
	char Kota[20];

};

struct mahasiswa
{
	char NIM[12];
	char nama[20];
	AlamatDetail alamat;
	int umur;
};

int main() {
	mahasiswa mhs[3];
	
	for (int i = 0; i < 3; i++) {
		cout << "masukan NIM : ";
		cin.getline(mhs[i].NIM,12);
		cout << "masukan nama : ";
		cin.getline(mhs[i].nama, 20);
		cout << "alamat : ";
		cout << "\n\tMasukan Desa : ";
		cin.getline(mhs[i].alamat.Desa,25);
		cout << "\n\tMasukan Kota : ";
		cin.getline(mhs[i].alamat.Kota, 25);
		cout << "\n masukan umur : ";
		cin.ignore(1, '\n');

	}
}