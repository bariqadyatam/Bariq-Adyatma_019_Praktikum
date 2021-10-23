#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	menu:
	int A=0, B, C, JUMLAH=0, i, n, jwb, jwb1;
	
	cout<<"Program Menghitung Jumlah Deret"<<endl<<endl;
	cout<<"==========================================="<<endl;
	cout<<"Masukkan Data Di Bawah"<<endl;
	cout<<"Bilangan Awal="; cin>>A;
	cout<<"Beda="; cin>>B;
	cout<<"Sampai Deret Ke="; cin>>n;
	cout<<"==========================================="<<endl;
	ulg:
	cout<<"\nApakah Data Di Atas Benar?(0=tidak dan mengulang mengisi,1=iya)="; cin>>jwb;
	
	if(jwb==0){
		system("cls");
		goto menu;
	}
	else if(jwb==1){
		system("cls");
	}
	else{
		cout<<"Warning!!!! Input Yang Anda Masukkan Salah";
		goto ulg;
	}
	
	cout<<"============================"<<endl;
	cout<<"Deret Ke-"<<n<<"="<<A<<",";
	JUMLAH=JUMLAH+A;
	for(i=0; i<n-1; i++){
		C=A+B;
		A=C;
		cout<<C<<",";
		JUMLAH=JUMLAH+C;
	}
	cout<<"\nJumlah Deret Ke-"<<n<<"="<<JUMLAH<<endl;
	cout<<"Press Any Key To Continue...."; getch ();
	system("cls");
}
