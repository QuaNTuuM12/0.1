#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

int main()
{	
//Daftar Menu

cout << setw(40) << "Daftar Menu" << endl;

cout << char(214);
for (int x = 0; x < 33; x++) {
	cout << char(196);
}
cout << char(210);
for (int x = 0; x < 33; x++) {
	cout << char(196);
}
cout << char(183) << endl;

cout << char(186) << setw(20) << "Makanan" << setw(14) << char(186) << setw(20) << "Minuman" << setw(14) << char(186) << endl;

cout << char(204);
for (int x = 0; x < 33; x++) {
	cout << char(205);
}
cout << char(206);
for (int x = 0; x < 33; x++) {
	cout << char(205);
}
cout << char(185) << endl;

cout << char(186) << setw (31) << "1. Magelangan       Rp.15.000" << setw(3) << char(186) << setw(27) << "1. Es Extrajoos       Rp.15.000" << setw(3) << char(186) << endl;
cout << char(186) << setw (31) << "2. Nasi Goreng      Rp.15.000" << setw(3) << char(186) << setw(21) << "2. Es Teh             Rp.15.000" << setw(3) << char(186) << endl;
cout << char(186) << setw (31) << "3. Nasi Telur       Rp.15.000" << setw(3) << char(186) << setw(23) << "3. Es Jeruk           Rp.15.000" << setw(3) << char(186) << endl;
cout << char(186) << setw (31) << "4. Nasi Ayam        Rp.15.000" << setw(3) << char(186) << setw(19) << "4. Kopi               Rp.15.000" << setw(3) << char(186) << endl;
	
cout << char(211);
for (int x = 0; x < 33; x++) {
	cout << char(196);
}
cout << char(208);
for (int x = 0; x < 33; x++) {
	cout << char(196);
}
cout << char(189) << endl;

//Input Pesanan

string makanan, minuman, tambahan;
float harga1, harga2, harga3;

while (1) {
	cout << "Nomor Makanan :";
	cin >> makanan;

	if (makanan == "1") {
		cout << "Anda Membeli Magelangan Dan" << endl;
		harga1 = 15.000;
		break;
	}
	else if (makanan == "2") {
		cout << "Anda Membeli Nasi Goreng Dan" << endl;
		harga1 = 15.000;
		break;
	}
	else if (makanan == "3") {
		cout << "Anda Membeli Nasi Telur Dan" << endl;
		harga1 = 15.000;
		break;
	}
	else if (makanan == "4") {
		cout << "Anda Membeli Nasi Ayam Dan" << endl;
		harga1 = 15.000;
		break;
	}
	else {
		cout << "Menu Tidak Tersedia, Silahkan Masukan ulang" << endl;
	}
}
	
while (1) {
	cout << "Nomor Minuman :";
	cin >> minuman;

	if (minuman == "1") {
		cout << "Extra Joss" << endl;
		harga1 = 15.000;
		break;
	}
	else if (minuman == "2") {
		cout << "Es Teh" << endl;
		harga1 = 15.000;
		break;
	}
	else if (minuman == "3") {
		cout << "Es Jeruk" << endl;
		harga1 = 15.000;
		break;
	}
	else if (minuman == "4") {
		cout << "Kopi" << endl;
		harga1 = 15.000;
		break;
	}
	else {
		cout << "Menu Tidak Tersedia, Silahkan Masukan ulang" << endl;
	}
}
	
cout << char(214);
for (int x = 0; x < 33; x++) {
	cout << char(196);
}
cout << char(183) << endl;

cout << char(186) << setw(25) << "Tambahan Pesanan" << setw(9) << char(186) << endl;

cout << char(204);
for (int x = 0; x < 33; x++) {
	cout << char(205);
}
cout << char(185) << endl;

cout << char(186) << setw(31) << "1. Telur             Rp.15.000" << setw(3) << char(186) << endl;
cout << char(186) << setw(31) << "2. Cabe Level 1      Rp.15.000" << setw(3) << char(186) << endl;
cout << char(186) << setw(31) << "3. Cabe Level 2      Rp.15.000" << setw(3) << char(186) << endl;
cout << char(186) << setw(31) << "4. Cabe Level 3      Rp.15.000" << setw(3) << char(186) << endl;
	
cout << char(211);
for (int x = 0; x < 33; x++) {
	cout << char(196);
}
cout << char(189) << endl;

while (1) {
	cout << "Nomor Makanan :";
	cin >> tambahan;

	if (tambahan == "1") {
		cout << "Penambahan Telur" << endl;
		harga3 = 15.000;
		break;
	}
	else if (tambahan == "2") {
		cout << "Cabe Level 1" << endl;
		harga3 = 15.000;
		break;
	}
	else if (tambahan == "3") {
		cout << "Cabe Level 2" << endl;
		harga3 = 15.000;
		break;
	}
	else if (tambahan == "4") {
		cout << "Cabe Level 3" << endl;
		harga3 = 15.000;
		break;
	}
	else {
		cout << "Menu Tidak Tersedia, Silahkan Masukan ulang" << endl;
	}
}
	
//Output Pesanan

cout << 

system("pause");

return 0;
}
