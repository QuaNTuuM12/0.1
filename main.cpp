#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	//Daftar Menu
	cout << setw(30) << "Daftar Menu" << endl;

	cout << char(214);
	for (int x = 0; x < 23; x++) {
		cout << char(196);
	}
	cout << char(210);
	for (int x = 0; x < 23; x++) {
		cout << char(196);
	}
	cout << char(183) << endl;

	cout << char(186) << "\t Makanan\t" << char(186) << "\t Minuman\t" << char(186) << endl;

	cout << char(204);
	for (int x = 0; x < 23; x++) {
		cout << char(205);
	}
	cout << char(206);
	for (int x = 0; x < 23; x++) {
		cout << char(205);
	}
	cout << char(185) << endl;

	cout << char(186) << "1. Magelangan Rp.15.000" << char(186) << "1. Es Extrajoos Rp.15.000" << char(186) << endl;
	cout << char(186) << "2. Nasi Goreng Rp.15.000" << char(186) << "2. Es Teh Rp.15.000" << char(186) << endl;
	cout << char(186) << "3. Nasi Telur Rp.15.000" << char(186) << "3. Es Jeruk Rp.15.000" << char(186) << endl;
	cout << char(186) << "4. Nasi Ayam Rp.15.000" << char(186) << "4. Kopi Rp.15.000" << char(186) << endl;
	cout << char(186) << "5. Nasi Ikan Rp.15.000" << char(186) << "5. Magelangan Rp.15.000" << char(186) << endl;
	cout << char(186) << "6. Mie Goreng Rp.15.000" << char(186) << "6. Magelangan Rp.15.000" << char(186) << endl;
	cout << char(186) << "7. Mie Rebus Rp.15.000" << char(186) << "6. Magelangan Rp.15.000" << char(186) << endl;
	cout << char(186) << "8. Bubur Kacang Ijo Rp.15.000" << char(186) << "6. Magelangan Rp.15.000" << char(186) << endl;

	cout << char(211);
	for (int x = 0; x < 23; x++) {
		cout << char(196);
	}
	cout << char(208);
	for (int x = 0; x < 23; x++) {
		cout << char(196);
	}
	cout << char(189) << endl;

	//Input Pesanan
	char makanan, minuman;
	int harga1, harga2;

	while (1) {

		cout << "Pesanan Makanan :";
		cin >> makanan;
		cout << endl;

		switch (makanan){
		case '1':
			cout << "Anda Memesan Magelangan" << endl;
			break;
		case '2':
			cout << "anda memesan Nasi Goreng" << endl;
			break;
		case '3':
			cout << "anda memesan BABI PANGGANG" << endl;
			break;

		default:
			cout << "tidak ada dimenu" << endl;
			
		}
	}
	cout << "Pesanan Minuman :" << endl;
	cin >> minuman;

	//Pengkondisian

	//Output Pesanan

	system("pause");

	return 0;
}
