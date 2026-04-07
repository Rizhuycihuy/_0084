#include <iostream>
using namespace std;

struct detailalamat{
	string desa;
	string kota;
};

struct orang {
	string nama;
	detailalamat alamat;
	int umur;
};

int main() {
	orang mhs;
	cout << "Nama Mahasiswa:";
	cin >> mhs.nama;
	cout << "Alamat Desa:";
	cin >> mhs.alamat.desa;
	cout << "Alamat Kota:";
	cin >> mhs.alamat.kota;
	cout << "Umur:";
	cin >> mhs.umur;
	cout << endl;
	
	cout << "Nama: "<<mhs.nama<<endl;
	cout << "Desa: " <<< mhs.alamat.desa<<endl;
	cout << "Kota : "<< mhs.alamat.kota<<endl;
	cout << "Umur : "<< mhs.umur<<endl;
}