#include <iostream>
using namespace std;

//suhu ruangan
int main(){
	double c;
	float r, k, f ;
	cin>>c;
	
	r = (4*c)/5;
	k = c + 273;
	f = ((9*c)/5) + 32;
	
	cout<<endl;
	
	cout<<"Celcius : "<<c<<endl;
	cout<<"Reamor : "<<r<<endl;
	cout<<"Fahrenheit : "<<f<<endl;
	cout<<"Kelvin : "<<k<<endl;
	
	
	return 0;
}

//lingkaran
int main(){
	float pi, r, luas;
	pi = 3.14;
	cin>>r;
	
	if(r >= 1 && r <= 1000){
		luas = pi * r * r;
		cout<<luas;
	}

	else{
	}
	return 0;
}

//introduce your self
int main(){
	string nama, kelas;
	float nilai, panjang;
	
	getline(cin, nama);
	cin>>kelas;
	cin>>nilai;
	
	panjang = nama.length();
	cout<<endl;
	
	cout<<"Izin memperkenalkan diri nama saya "<<nama<<" dengan jumlah huruf "<<panjang
	<<". Saya mahasiswa S1 Ilmu komputer dari kelas "<<kelas<<". Nilai DDP saya adalah "<<nilai<<".";
	return 0;
}

//angka baik
int main(){
	int n, i;
	cin>> n;
	cout<<endl;
	
	for(i = 0; i <= n; i++){
		if(i % 5 == 0){
			continue;
		}
		
		else if(i == 31){
			cout<<"NOT FOUND";
			break;
		}
		cout<<i<<endl;
	}
	return 0;
}
