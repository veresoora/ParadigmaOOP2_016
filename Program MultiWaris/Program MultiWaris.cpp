#include <iostream> 
#include <string> 
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dihapus\n" << endl;
	}
	~orang() {
		cout << "orang dihapus\n" << endl;
	}
};

class manusia {
public:
	string jenisKelamin;

	manusia(string pJenisKelamin) :
		jenisKelamin(pJenisKelamin) {
		cout << "manusia dibuat\n" << endl;
	}
	~manusia() {
		cout << "manusia dihapus\n" << endl;
	}
};

class pelajar : private manusia, public orang {
public:
	string sekolah;

	pelajar(string pNama, string pJenisKelamin, string psekolah) :
		orang(pNama),
		manusia(pJenisKelamin),
		sekolah(psekolah) {
		cout << "pelajar dibuat\n" << endl;
	}
	~pelajar() {
		cout << "pelajar dihapus\n" << endl;
	}
	string perkenalan() {
		return "Hallo, nama saya " + nama + " dengan jenis kelamin "
			+ jenisKelamin + " dari sekolah " + sekolah + "\n\n";
	}
};

int main() {
	pelajar siswa("andi laksono", "laki-laki", "SMAN 1 Bantul");
	cout << siswa.perkenalan();

	return 0;
}