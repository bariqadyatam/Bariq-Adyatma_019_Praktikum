#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

main(){
	menu:
	char nama[30];
	int jm, totjm, mnt, totmnt, dtk, totdtk, totw, jwb;
	
	cout<<"================================================================"<<endl;
	cout<<"Program Menentukan Harga dan Waktu Dalam Billing Warnet"<<endl<<endl;
	cout<<"Masukkan Data Di Bawah Ini Dengan Benar"<<endl;
	cout<<"Nama="; cin>>nama;
	cout<<"Lama Jam Bermain="; cin>>jm;
	cout<<"Lama Menit Bermain="; cin>>mnt;
	cout<<"Lama Detik Bermain="; cin>>dtk;
	cout<<"================================================================"<<endl<<endl<<endl;
	system("cls");
	
	totjm=jm*5000;
	totmnt=mnt*2500/30;
	totdtk=dtk*2500/1800;
	totw=totjm+totmnt+totdtk;
	
	cout<<"================================================================"<<endl;
	cout<<"Nama User="<<nama<<endl;
	cout<<"Total Yang Harus Dibayarkan=Rp."<<totw<<endl;
	cout<<"================================================================"<<endl<<endl;
	cout<<"Press Any Key To Continue..."; getch ();
	system("cls");
	
	t:
	cout<<"Apakah Mau Mengulangi Perhitungan(0=tidak 1=iya)="; cin>>jwb;
	if(jwb==1){
		system("cls");
		goto menu;
	}
	else if(jwb==0){
		system("cls");
		cout<<"Terima Kasih :)"<<endl;
	}
	else{
		cout<<"WARNING Ketikan Anda Salah"<<endl;
		cout<<"Press Any Key To Continue..."; getch ();
		system("cls");
		goto t;
	}
	
	cout<<"Press Any Key To Stop The Program...."; getch();
}
