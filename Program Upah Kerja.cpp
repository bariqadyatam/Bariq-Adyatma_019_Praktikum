#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

main(){
	menu:
	char nama[30];
	int glg, upjm, totu, bck, jmkrj, bns, jwb, pl;
	
	cout<<"Program Upah Kerja"<<endl<<endl;
	
	cout<<"==========================================="<<endl;
	cout<<"Masukkan Data Dibawah Ini"<<endl;
	cout<<"Nama="; cin>>nama;
	cout<<"jumlah Jam Kerja="; cin>>jmkrj;
	cout<<"Golongan(1=A,2=B,3=C,4=D)="; cin>>glg;
	cout<<"==========================================="<<endl;
	cout<<"Press Any Key To Continue..."<<endl; getch ();
	menu1:
	cout<<"Apakah Data Di Atas Benar(0=tidak dan mengulangi mengisi,1=iya)="; cin>>pl;
	
	if(pl==0){
		system("cls");
		goto menu;
	}
	else if(pl==1){
		system("cls");
	}
	else{
		cout<<"Input Yang Anda Masukkan Salah"<<endl;
		cout<<"Press Any Key To Continue..."; getch();
		goto menu1;
	}
	
	switch (glg){
		case 1:{
			upjm=5000;
			break;
		}
		case 2:{
			upjm=7000;
			break;
		}
		case 3:{
			upjm=8000;
			break;
		}
		case 4:{
			upjm=10000;
			break;
		}
	}
	
	bns=(jmkrj-48)*4000;
	
	totu=jmkrj*upjm;
	
	if(jmkrj>=48){
		totu=totu+bns;
	}
	
	cout<<"==========================================="<<endl;
	cout<<"Nama="<<nama<<endl;
	cout<<"Upah Yang Di Dapat="<<totu<<endl;
	cout<<"==========================================="<<endl;
	cout<<"Press Any Key To Continue...."; getch();
	system("cls");
	
	menu2:
	cout<<"Apakah Mau Menggunakan Program Ini Lagi(0=tidak 1=iya)="; cin>>jwb;
	
	if(jwb==0){
		system("cls");
		cout<<"Terima Kasih :)"<<endl;
		cout<<"Press Any Key To End The Program...."; getch();
	}
	
	else if(jwb==1){
		system("cls");
		goto menu;
	}
	else {
		cout<<"Input Yang Anda Masukkan Salah";
		cout<<"Press Any Key To Continue...."; getch ();
		system("cls");
		goto menu2;
	}
}
