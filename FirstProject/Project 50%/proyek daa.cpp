#include<iostream>
using namespace std;

struct katalog{
	int no;
	string judul;
	int harga;
	int stok;
	struct katalog *next;
};

katalog *head;
katalog *tail;
katalog *baru;
katalog *bantu;

struct konsumen{
	string nama;
	string alamat;
	string telpon;
	int total;
	int jml;
	string jdl;
	int hrg;
	struct konsumen *next;
};

konsumen *head1;
konsumen *tail1;
konsumen *baru1;
konsumen *bantu1;

void init(){
	head= new katalog;;
	head= NULL;
}
	
int isEmpty(){
	if(head==NULL)
	return 1;
	else
	return 0;
}

void init1(){
	head1= new konsumen;;
	head1= NULL;
}
	
int isEmpty1(){
	if(head1==NULL)
	return 1;
	else
	return 0;
}

void tambah_data(){
	cout<<"Masukkan Data Katalog"<<endl;
	baru=new katalog;
	cout<<"Nomor Katalog: ";
	cin>>baru->no;
	cin.ignore(1, '\n');
	cout<<"Judul Katalog: ";getline(cin,baru->judul);
	cout<<"Harga katalog: ";
	cin>>baru->harga;
	cout<<"Jumlah stok katalog: ";
	cin>>baru->stok;
	baru->next=baru;
	
	if(isEmpty()){
	head=tail=baru;
	head->next=head;
	tail->next=tail;
	}
	else{
	tail->next=baru;
	tail=baru;
	tail->next=head;
	}
	cout<<"Data Masuk\n\n"<<endl;
}


void data_katalog(){
	cout<<"-------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\t\tDAFTAR KATALOG\t\t\t\t"<<endl;
	cout<<"-------------------------------------------------------------------------"<<endl;
	cout<<"| Nomor Katalog |\tJudul\t|\tHarga\t\t|\tStok\t|"<<endl;
	cout<<"-------------------------------------------------------------------------"<<endl;
	if(isEmpty()==0){
	bantu=head;
	cout<<"|\t"<<bantu->no<<"\t|\t"<<bantu->judul<<"\t|\tRp."<<bantu->harga<<"\t|\t"<<bantu->stok<<"\t|\t"<<endl;
	bantu=bantu->next;
	while(bantu!=head){
	cout<<"|\t"<<bantu->no<<"\t|\t"<<bantu->judul<<"\t|\tRp."<<bantu->harga<<"\t|\t"<<bantu->stok<<"\t|\t"<<endl;
	bantu=bantu->next;
	}
	cout<<endl;
	}
	else{
	cout<<"\t\t\tDATA KOSONG\t\t\t"<<endl;
	}
}

void cari_data(){
	int nomor;
	struct katalog *cari = head;
	if(!isEmpty()){
		cari=head;
		cout<<"Masukkan nomor katalog yang ingin dibeli: ";
		cin>>nomor;
		if(cari->no==nomor) {
		baru1->hrg= cari->harga;
		baru1->jdl= cari->judul;
		cout<<"Judul katalong: "<<baru1->jdl<<endl;cin.ignore(1, '\n');
		cout<<"Harga katalog: "<<baru1->hrg<<endl;
		cout<<"Jumlah katalog yang dipesan: ";
		cin>>baru1->jml;
		cari->stok = cari->stok - baru1->jml;
		baru1->total = baru1->jml*cari->harga;
		cout<<"Harga total: "<<baru1->total;
		}
		cari=cari->next;
	while (cari != head){
 		if(cari->no==nomor) {
 		baru1->hrg= cari->harga;
 		baru1->jdl= cari->judul;
		cout<<"Judul katalong: "<<baru1->jdl<<endl;
		cout<<"Harga katalog: "<<baru1->hrg<<endl;
		cout<<"Jumlah katalog yang dipesan: ";
		cin>>baru1->jml;
		cari->stok = cari->stok - baru1->jml;
		baru1->total= baru1->jml*cari->harga;
		cout<<"Harga total: "<<baru1->total<<endl;
		}
 		cari= cari->next;
 		}	
	}
}

void pemesanan(){
	data_katalog();
	baru1 =new konsumen;
	cout<<"Masukkan Nama: ";getline(cin,baru1->nama);	
	cin.ignore(1, '\n');
	cout<<"Masukkan Alamat: ";getline(cin,baru1->alamat);
	cin.ignore(1, '\n');
	cout<<"Masukkan Nomor telepon: ";getline(cin,baru1->telpon);
	cin.ignore('\n');
	cari_data();
 	baru1->next=baru1;
 	
 	if(isEmpty1()){
	head1=tail1=baru1;
	head1->next=head1;
	tail1->next=tail1;
	}
	else{
	tail1->next=baru1;
	tail1=baru1;
	tail1->next=head1;
	}
	cout<<"\nData Masuk";
}


 	
	

void data_pemesanan(){
	if(!isEmpty()){
	bantu1=head1;
	cout<<"Nama Pemesan: "<<bantu1->nama<<endl;
	cout<<"Alamat: "<<bantu1->alamat<<endl;
	cout<<"Nomor telepon: "<<bantu1->telpon<<endl;
	cout<<"Katalog yang dibeli: "<<bantu1->jdl<<endl;
	cout<<"Harga Katalog: "<<bantu1->hrg<<endl;
	cout<<"Jumlah Katalog: "<<bantu1->jml<<endl;
	cout<<"Total harga: "<<bantu1->total<<endl;
	bantu1=bantu1->next;
	while(bantu1!=head1){
	cout<<"Nama Pemesan: "<<bantu1->nama<<endl;
	cout<<"Alamat: "<<bantu1->alamat<<endl;
	cout<<"Nomor telepon: "<<bantu1->telpon<<endl;
	cout<<"Katalog yang dibeli: "<<bantu1->jdl<<endl;
	cout<<"Harga Katalog: "<<bantu1->hrg<<endl;
	cout<<"Jumlah Katalog: "<<bantu1->jml<<endl;
	cout<<"Total harga: "<<bantu1->total<<endl;
	bantu1=bantu1->next;
	}
	cout<<endl;
	}
	else{
	cout<<"Data Kosong"<<endl;
	}
}

int main(){
int pil, i, a;
 awal:
 cout<<"\n \tPROGRAM PEMESANAN KATALOG\n";
 cout<<" ===========================\n";
 cout<<" 1. Tambah Data\n";
 cout<<" 2. Data Katalog\n";
 cout<<" 3. Pemesanan Katalog \n";
 cout<<" 4. Laporan Pemesanan katalog\n";
 cout<<" 5. Keluar\n";
 cout<<" ===========================\n\n";
 cout<<"Pilihan Anda = ";cin>>pil;
 if(pil==1)
 {
 system("cls");
 cout<<"Jumlah data yang dimasukkan: ";
 cin>>a;
 for(i=0;i<a;i++){
 tambah_data();
 }
 goto awal;
 }
 if(pil==2){
 system("cls");
 data_katalog();
 goto awal;
 }
 if(pil==3){
 system("cls");
 pemesanan();
 goto awal;
 }
 if(pil==4){
 system("cls");
data_pemesanan();
 goto awal;
 }
 if(pil==5){
 system("CLS");
 cout<<"Program Selesai";
 }

return 0;
}





