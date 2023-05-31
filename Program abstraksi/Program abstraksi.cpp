#include <iostream>
using namespace std;

class AbstraksiKlas {
private: string x, y;
public:

	// Method untuk mengisi nilai
	// Private member
	void setXY(string a, string b) {
		x = a;
		x = b;
	}
	// Menampilkan nilai
	void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};

int main() {
	AbstraksiKlas ak;
	ak.setXY("Yogyakart", "Kampus");
	ak.display();

	return 0;
}