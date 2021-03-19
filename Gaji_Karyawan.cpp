#include <iostream>
#include <conio.h>

using namespace std;

main(){
	
	string nama_karyawan;
	char golongan;
	int JamKerja, jumlahlembur, gaji_perjam, kerja, gaji2, uang;
	jumlahlembur = 0;
	long gaji, lembur;
	
	cout<<"Masukkan Nama Karyawan : ";
	cin>>nama_karyawan;
	cout<<"Masukkan Golongan Karyawan (A/B/C/D): ";
	cin>>golongan;
	cout<<"Masukkan Jumlah Jam Kerja : ";
	cin>>JamKerja;
	
	cout<<"--------------------------------"<<endl;
	kerja = JamKerja - 48;
	lembur = 3000;
	uang = kerja*3000;
	
	if( JamKerja > 48 ){
		jumlahlembur = JamKerja - 48;
	}
	
	switch (golongan){
		case 'A':
			gaji_perjam = 4000;
			gaji2 = 48 * 4000;
			gaji = ( JamKerja - jumlahlembur) * gaji_perjam;
			break;
			
		case 'B':
			gaji_perjam = 5000;
			gaji2 = 48 * 5000;
			gaji = ( JamKerja - jumlahlembur) * gaji_perjam;
			break;
			
		case 'C':
			gaji_perjam = 6000;
			gaji2 = 48 * 6000;
			gaji = ( JamKerja - jumlahlembur) * gaji_perjam;
			break;
			
		case 'D':
			gaji_perjam = 7000;
			gaji2 = 48 * 7000;
			gaji = ( JamKerja - jumlahlembur) * gaji_perjam;
			break;
			
		default :
			cout<<"Silahkan masukkan golongan yang benar ! "<<endl;
			gaji   = 0;
			lembur = 0;
			
	}
	
	if ( JamKerja > 48){
		gaji = gaji + (( JamKerja - 48) * lembur);
	}
	
	cout<<"Total Gaji Pokok    : 48 x " <<gaji_perjam<<"            = " <<gaji2 <<endl;
	cout<<"Total Gaji Tambahan : "<<kerja    <<" x 3.000/perjam     = " <<uang  <<endl;
	cout<<"--------------------------------------------------------------------------- + "<<endl;
	cout<<"Total               : " <<gaji;
	getch ();
}
