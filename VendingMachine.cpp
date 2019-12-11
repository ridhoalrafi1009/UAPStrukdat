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

switch(pil) {
		case 1:
			{
				jika(tumpuk.atas==7-1) {
					cetak<<"Tumpukan Penuh\n";
					getch();
				} lain {
					cetak<<"Masukkan Minuman yang akan di Jual : ";
					input>>baru;
					tumpuk.atas++;
					tumpuk.minuman[tumpuk.atas]=baru;
				}
				cetak<<"==================================\n";
				break;
			}
		case 2:
			{
				jika(tumpuk.atas==-1) {
					cetak<<"Tumpukan Kosong\n";
					getch();
				} lain {
					cetak<<"Masukkan uang anda : ";
					int uang ;
					input>>uang;
					jika (uang==5000) {
						cetak<<"Minuman yang dibeli: "<<tumpuk.minuman[tumpuk.atas];
						tumpuk.atas--;
						cetak<<endl;
						getch();
					} lain {
						cetak<<"\nMasukkan uang 5000 ";
					}
				}
				cetak<<"\n\n==================================\n";
				break;
			}
		case 3:
			{
				jika(tumpuk.atas==-1) {
					cetak<<"Tumpukan Kosong\n";	
					getch();
				} lain {
					cetak<<"\nMinuman pada tumpukan saat ini adalah : \n";
					for(int i=0; i<=tumpuk.atas; i++) {
						cetak<<"minuman ke "<<i<<" : "<<tumpuk.minuman[i]<<endl;
					}
					cetak<<endl;
					getch();
				}
				cetak<<"===================================\n";
				break;
			}
			default:
				cetak<<"\nTidak ada dalam pilihan";
 				cetak<<endl;
 				cetak<<"=====================================\n";
 				
		}
	}
	while(pil!=4);
	getch();
}

