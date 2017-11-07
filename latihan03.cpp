#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main () {
	int gape,jake,lembur,gt,pajak;
	cout << "Masukkan gaji pegawai : ";
	cin >> gape;
	cout << "Masukkan jam kerja    : ";
	cin >> jake;
	lembur= jake - 40;
	gt = (lembur*1.5+40)+gape;
	pajak=gt*0.15;
	gt=gt-pajak;
	
}
