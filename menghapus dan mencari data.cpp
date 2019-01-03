#include<iostream>
using namespace std;
int main(){
	int B[10],jumlah,ganti,hapus,cari,ketemu=0;
	std::cout<<"masukan jumlah data :"<<'\n';
	std::cin>>jumlah;
	if(jumlah>9)
	{
		std::cout<<"\nMaaf maximal data adalah 10\n"<<'\n';
	}
	else
	{
		for(int i=0; i <jumlah; i++){
			std::cout<<"masukan data ke-"<<i+1 <<":";
			std::cin >>B[i];
		}
		std::cout<<"data yang telah dimasukan:"<< '\n';
		for(int j =0; j<jumlah; j++){
			std::cout<<"B["<<j<<"]="<<B[j]<<'\n';
		}
	}
}
