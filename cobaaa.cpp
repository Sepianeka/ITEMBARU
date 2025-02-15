#include <iostream>
using namespace std;

int main () {
	
	string nama;
	string kelas;
	int binggris;
	int bindo;
	int mtk;
	
	
	cout<<"Masukan nama siswa : ";
	cin>>nama;
	
	cout<<"Masukan kelas : ";
	cin>>kelas;
	
	cout<<"Masukan nilai bahasa inggris : ";
	cin>>binggris;
	cout<<"Masukan nilai bahasa indonesia : ";
	cin>>bindo;
	cout<<"Masukan nilai matemtika : ";
	cin>>mtk;
	
	if ((((binggris>45)&&(bindo>45)&&(mtk>45)))) {
		cout<<"Siswa atas nama ";
		cout<<nama;
		cout<<" dari kelas ";
		cout<<kelas;
		cout<<" dinyatakan lulus";
		
	} else if ((((binggris>45)||(bindo>45)||(mtk>45)))) {
		
		if ((binggris<45)&&(bindo<45)) {
			
			cout<<"Siswa atas nama ";
			cout<<nama;
			cout<<" dari kelas ";
			cout<<kelas;
			cout<<" dinyatakan tidak lulus karena nilai mapel bahasa inggris dan bahasa indonesia tidak memenuhi";
		} else if ((binggris<45)and(mtk<45)) {
			cout<<"Siswa atas nama ";
			cout<<nama;
			cout<<" dari kelas ";
			cout<<kelas;
			cout<<" dinyatakan tidak lulus karena nilai mapel bahasa inggris dan matematika tidak memenuhi";
		} else if ((bindo<45)and(mtk<45)) {
			cout<<"Siswa atas nama ";
			cout<<nama;
			cout<<" dari kelas ";
			cout<<kelas;
			cout<<" dinyatakan tidak lulus karena nilai mapel bahasa indonesia dan matematika tidak memenuhi";
		} else if (binggris<45) {
			cout<<"Siswa atas nama ";
			cout<<nama;
			cout<<" dari kelas ";
			cout<<kelas;
			cout<<" dinyatakan tidak lulus karena nilai mapel bahasa inggris tidak memenuhi";
		} else if (bindo<45){
			
			cout<<"Siswa atas nama ";
			cout<<nama;
			cout<<" dari kelas ";
			cout<<kelas;
			cout<<" dinyatakan tidak lulus karena nilai mapel bahasa indonesia tidak memenuhi";
		} else if (mtk<45){
			cout<<"Siswa atas nama ";
			cout<<nama;
			cout<<" dari kelas ";
			cout<<kelas;
			cout<<" dinyatakan tidak lulus karena nilai mapel matematika tidak memenuhi";
		}
		
		
	} else {
		cout<<"Siswa atas nama ";
		cout<<nama;
		cout<<" dari kelas ";
		cout<<kelas;
		cout<<" dinyatakan tidak bisa lulus";
		
	}
	
	
	
	return 0;
} 