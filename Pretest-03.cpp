/*
Nama Program	: Pretest-03
Nama			: SITTI UFAIROH AZZAHRA
NPM				: 140810180002
Deskriptif		: program ini dibuat untuk 
Tanggal			: 
*/

#include<iostream>
using namespace std;

struct r_mhs{
    char npm[14];
    char nama[40];
    float ipk;
};

typedef r_mhs larikMhs[30];

void banyakdata(int& n){
	cout << "Masukkan Banyak Data : "; cin >> n;
}

void inputMhs(larikMhs& mhs,int n){
	for(int i = 0; i < n; i++){
		cout<< "\nData Mahasiswa Ke- " << i+1 <<endl;
		cout<< "Nama : "; cin>>mhs[i].nama;
        cout<< "NPM : "; cin>>mhs[i].npm;
        cout<< "IPK : "; cin>>mhs[i].ipk;
        cout<<endl;
	}
}

void cetakMhs(larikMhs mhs, int n){
	cout << "\t\t DATA MAHASISWA " <<endl;
	cout << "==========================================" <<endl;
	cout << "No  NPM          	Nama        	IPK "<<endl;
	for (int i=0; i<n; i++){
		cout << i+1 << "    ";
        cout<<mhs[i].npm<<"  ";
        cout<<mhs[i].nama<<"           ";
        cout<<mhs[i].ipk;
        cout<<endl;
	}
}

void sortNama(larikMhs& mhs,int n){
    for(int i=0;i<n-1,i++;){
        for(int j=0;j<n-i-1;j++){
            if(mhs[i].nama<mhs[i+1].nama){
            }
        }
    }
}

int main(){
	larikMhs Mhs;
	int n;
	banyakdata(n);
	inputMhs (Mhs,n);
	cetakMhs(Mhs,n);
}
