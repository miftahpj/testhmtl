#include<iostream>
using namespace std;
void sayur(int &energi){
	energi +=10;
}
void makan(int &energi){
	energi += 10;
	sayur(energi);
	cout<<" Makan Ayam menambahkan 20 energi"<<endl;
}

void sport(int &energi){
	energi -=20;
	cout<<" Cape!";
}


void menu(string nama,int &energi){
	cout<<"\n =======STUDY======= \n";
	cout<<" Nama: "<<nama<<endl;
	cout<<" Jumlah Energi: "<<energi<<endl;
	cout<<" \n 1.Makan \n";
	cout<<" \n 2.Sport \n ";
	cout<<" \n 0.Berhenti \n ";
	cout<<" Pilihan: ";
}
void game(string nama, int &energi){
	int pilihan;
	do{
		menu(nama,energi);
		cin>>pilihan;
		switch(pilihan){
			case 1 : makan(energi);break;
			case 2 : sport(energi);break;
			case 0 : " STOP ";break;
		default:
			cout<<" Pilihan Tidak Sesuai ";
		}
	}while (energi<200 && pilihan !=0);
}

int main(){
	string nama;
	cout<<" Nama: ";
	cin>>nama;
	int energi;
	cout<<" Energi: ";
	cin>>energi;
	
	game(nama,energi);
	
	
}
