// Kelompok 4 UTP DDP Kelas D_dengan tema "Cafe"
// 1. Aliya Zalfa Putri_2117051042
// 2. Deta Sari Aslina_2217051117
// 3. Anggi Adelia Putri_2257051023


#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

	void list(){
	string menu_makanan[6] = {"Kentang Goreng", "Burger", "Spaghetti bolognese", "Corn Dog", "Es Jeruk", "Oreo Milkshake"};
	cout<< "Berikut pilihan menu makanan yang tersedia di DAA Cafe : " <<"\n";
	cout<<"----------------------------------------------"<<"\n";
	cout<< "1. "<< menu_makanan[0]<<"\n";
	cout<< "2. "<< menu_makanan[1]<<"\n";
	cout<< "3. "<< menu_makanan[2]<<"\n";
	cout<< "4. "<< menu_makanan[3]<<"\n";
	cout<< "5. "<< menu_makanan[4]<<"\n";
	cout<< "6. "<< menu_makanan[5]<<"\n";
	cout<<"----------------------------------------------"<<"\n";
	cout<<"Ketik 0 jika selesai melakukan pemesanan"<<endl<<endl;
}


int main(){
	string nama;
	cout << "=======================================" <<"\n";
	cout << "||   Selamat Datang di DAA Cafe   ||"<<"\n";
	cout << "=======================================" <<"\n";
	cout << endl;
	cout << "Pesanan atas nama :  ";
	cin >> nama;
	cout<< endl;
	list();

	int menu,uang, kembalian, pilih[10],Jumlah[10],Jumlah1[10],price[10];
	string menu_makanan[6];
	int i=0;
	int  Total=0;
	bool selesai=false;


  while(selesai==false){
    	
		cout<<"Silahkan pilih menu yang mau anda pesan : ";
    	cin>>pilih[i];
    
	if (pilih[i]<=6){
    		
    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu_makanan[i]="Kentang Goreng      "; price[i]=10000;break;
		    		case 2 : menu_makanan[i]="Burger              "; price[i]=13000;break; 
		    		case 3 : menu_makanan[i]="Spaghetti Bolognese "; price[i]=12000;break;
		    		case 4 : menu_makanan[i]="Corn Dog            "; price[i]=10000;break;
		    		case 5 : menu_makanan[i]="Es Jeruk            "; price[i]=5000;break;
		    		case 6 : menu_makanan[i]="Oreo Milkshake	  "; price[i]=7000;break;
		    		default : menu_makanan[i]="";price[i]=0;
				}
				
				cout<<"Jumlah Porsi "<<menu_makanan[i]<<" : ";
		    	cin>>Jumlah[i];
		    	cout<<"\n";
		    	
		    	Jumlah1[i]=Jumlah[i]*price[i];
		    	
		    	Total = Total +Jumlah1[i]; 
	    		i++;

}
		} else {
			cout<<"Maaf menu yang dipilih tidak tersedia"<<"\n";
			cout<<endl;
		}
}

	cout<<endl;
	cout<<"           	              BILL PEMBELIAN 		     				 "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu_makanan[a]<<"	"<<price[a]<<"		"<<Jumlah[a]<<"		"<<Jumlah1[a]<<endl;
	}
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp "<<Total<<endl;
	while(uang<Total){
		cout << "Masukkan uang Anda : Rp ";
				cin >> uang;
				if (uang >= Total){
					kembalian = uang - Total;
				    cout <<"-----------------------------------"<<endl;
					cout <<"Kembalian Anda     : Rp " << kembalian << endl;
					cout << endl;
					cout << "Terima Kasih, Orderan anda kami terima ^_^" << endl;
					cout <<"-------------------------------------------"<<endl;
					cout << endl;					
}
	else {
					cout << "Maaf, Uang Anda tidak cukup" << endl;
}
}
}

	

