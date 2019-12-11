#include<iostream>
#include<conio.h>
#include "define.h"
#include "rumus.h"

using namespace std;


int mulai() {
	int pil,i;
	string baru;
	tumpuk.atas=-1;
	
	cetak<<"===============VENDING MACHINE =================\n"<<endl;
	
	lakukan {
		cetak<<"Hal yang bisa anda lakukan :\n";
		cetak<<"1.Memasukkan Minuman\n";
		cetak<<"2.Membeli Minuman\n";
		cetak<<"3.Print Data\n";
		cetak<<"4.End Data\n";
		cetak<<"\nPilihan = ";
		input>>pil;
