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
	string tanggal;
	string nama;
	string alamat;
	string telpon;
	int nomor;
	int total;
	int jml;
	int bayar;
	int kembali;
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

int nomor=1;

void tambah_data(){
	int a;
	cout<<"Jumlah data yang dimasukkan: ";
    cin>>a;
    cout<<endl;
    for(int i=0;i<a;i++){
	cout<<"Masukkan Data Katalog"<<endl;
	baru=new katalog;
	cout<<"Nomor Katalog\t    : ";
	cin>>baru->no;
	cin.ignore(1, '\n');
	cout<<"Judul Katalog\t    : ";getline(cin,baru->judul);
	cout<<"Harga katalog\t    : Rp. ";
	cin>>baru->harga;
	cout<<"Jumlah stok katalog : ";
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
	cout<<"\nData Masuk"<<endl;
	cout<<endl<<endl;
	}
}


void data_katalog(){
	cout<<"---------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\t\tDAFTAR KATALOG\t\t\t\t"<<endl;
	cout<<"---------------------------------------------------------------------------------"<<endl;
	cout<<"| Nomor Katalog |\tJudul\t\t|\tHarga\t\t|\tStok\t|"<<endl;
	cout<<"---------------------------------------------------------------------------------"<<endl;
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

void update_harga(){
	int nomor, hrg;
	struct katalog *cari = head;
	if(!isEmpty()){	
		cari=head;
		cout<<endl;
		cout<<"Masukkan nomor katalog yang ingin diupdate: ";
		cin>>nomor;
		if(cari->no==nomor) {
		cout<<"Judul katalong             : "<<cari->judul<<endl;
		cout<<"Harga katalog              : "<<cari->harga<<endl;
		cout<<"Stok Katalog               : "<<cari->stok<<endl;
		cout<<"\n Masukkan Harga Baru Katalog: ";
		cin>>hrg;
		cari->harga = hrg;
		cout<<"Harga Diubah"<<endl;
		cout<<"Judul katalong             : "<<cari->judul<<endl;
		cout<<"Harga katalog              : "<<cari->harga<<endl;
		cout<<"Stok Katalog               : "<<cari->stok<<endl;
		}
		cari=cari->next;
	while (cari != head){
 		if(cari->no==nomor) {
 		cout<<"Judul katalong             : "<<cari->judul<<endl;
		cout<<"Harga katalog              : "<<cari->harga<<endl;
		cout<<"Stok Katalog               : "<<cari->stok<<endl;
		cout<<"\nMasukkan Harga Baru Katalog: ";
		cin>>hrg;
		cari->harga = hrg;
		cout<<"Harga Diubah"<<endl;
		cout<<"Judul katalong             : "<<cari->judul<<endl;
		cout<<"Harga katalog              : "<<cari->harga<<endl;
		cout<<"Stok Katalog               : "<<cari->stok<<endl;
		}
 		cari= cari->next;
 	}
	}
}

void update_stok(){
	int nomor, stk, total;
	struct katalog *cari = head;
	if(!isEmpty()){	
		cari=head;
		cout<<endl;
		cout<<"Masukkan nomor katalog yang ingin diupdate: ";
		cin>>nomor;
		if(cari->no==nomor) {
		cout<<"Judul katalong             : "<<cari->judul<<endl;
		cout<<"Harga katalog              : "<<cari->harga<<endl;
		cout<<"Stok Katalog               : "<<cari->stok<<endl;
		cout<<"\nMasukkan Jumlah Stok Tambahan: ";
		cin>>stk;
		total= cari->stok + stk;
		cari->stok = total;
		cout<<"Harga Diubah"<<endl;
		}
		cari=cari->next;
	while (cari != head){
 		if(cari->no==nomor) {
 		cout<<"Judul katalong             : "<<cari->judul<<endl;
		cout<<"Harga katalog              : "<<cari->harga<<endl;
		cout<<"Stok Katalog               : "<<cari->stok<<endl;
		cout<<"\n Masukkan Jumlah Stok Tambahan: ";
		cin>>stk;
		total= cari->stok + stk;
		cari->stok = total;
		cout<<"Harga Diubah"<<endl;
		}
 		cari= cari->next;
 	}
	}
}

void notifikasi(){
	if(isEmpty()==0){
	bantu=head;
	if(bantu->stok<=10){
		cout<<"Stock Katalog "<<bantu->judul<<" Menipis"<<endl;
		cout<<"Jumlah stok: "<<bantu->stok<<endl;
	}
	bantu=bantu->next;
	while(bantu!=head){
	if(bantu->stok<=10){
		cout<<"Stock Katalog "<<bantu->judul<<" Menipis"<<endl;
		cout<<"Jumlah stok: "<<bantu->stok<<endl;
	}
	bantu=bantu->next;
	}
	cout<<endl;
	}
	else{
	cout<<"\t\t\tDATA KOSONG\t\t\t"<<endl;
	}
	
}

void update(){
	int x;
	data_katalog();
	notifikasi();
	cout<<"1. Update Harga Katalog"<<endl;
	cout<<"2. Update Stock Katalog"<<endl;
	cout<<"Masukkan Pilihan: ";
	cin>>x;
	if(x==1){
		update_harga();
	}
	else if(x==2){
		update_stok();
	}
}

void cari_data(){
	int nomor;
	struct katalog *cari = head;
	if(!isEmpty()){	
		cari=head;
		cout<<endl;
		cout<<"Masukkan nomor katalog yang ingin dibeli: ";
		cin>>nomor;
		if(cari->no==nomor) {
		baru1->hrg= cari->harga;
		baru1->jdl= cari->judul;
		cout<<"Judul katalong             : "<<baru1->jdl<<endl;
		cout<<"Harga katalog              : "<<baru1->hrg<<endl;
		cout<<"Jumlah katalog yang dipesan: ";
		cin>>baru1->jml;
		cari->stok = cari->stok - baru1->jml;
		baru1->total = baru1->jml*cari->harga;
		cout<<"Harga total : "<<baru1->total<<endl;
		cout<<"Bayar       : ";
		cin>>baru1->bayar;
		if(baru1->bayar>baru1->total){
			baru1->kembali= baru1->bayar - baru1->total;
		    cout<<"Kembali     : "<<baru1->kembali<<endl;
		}
		else{
			baru1->kembali=0;
			cout<<"Kembali: "<<baru1->kembali<<endl;
		}	
		}
		cari=cari->next;
	while (cari != head){
 		if(cari->no==nomor) {
 		baru1->hrg= cari->harga;
 		baru1->jdl= cari->judul;
		cout<<"Judul katalong             : "<<baru1->jdl<<endl;
		cout<<"Harga katalog              : "<<baru1->hrg<<endl;
		cout<<"Jumlah katalog yang dipesan: ";
		cin>>baru1->jml;
		cari->stok = cari->stok - baru1->jml;
		baru1->total = baru1->jml*cari->harga;
		cout<<"Harga total                : Rp. "<<baru1->total<<endl;
		cout<<"Bayar                      : Rp. ";
		cin>>baru1->bayar;
		if(baru1->bayar>baru1->total){
			baru1->kembali= baru1->bayar - baru1->total;
		    cout<<"Kembali                    : Rp. "<<baru1->kembali<<endl;
		}
		else{
			baru1->kembali=0;
			cout<<"Kembali                    : Rp. "<<baru1->kembali<<endl;
		}	
		}
 		cari= cari->next;
 	}
	}
}
	

void pemesanan(){
	char pil; 
	data_katalog();
	baru1 =new konsumen;
	baru1->nomor = nomor;
	cout<<"No. Pemesanan: "<<baru1->nomor<<endl;
	nomor++;
	cout<<"Masukkan Tanggal Pemesanan (DD-MM-YYYY): ";
	cin>>baru1->tanggal;
	cout<<"Masukkan Nama         : ";
	cin>>baru1->nama;
	cout<<"Masukkan Nomor telepon: ";
	cin>>baru1->telpon;
	cout<<"Masukkan Alamat       : ";
	cin>>baru1->alamat;
	cari_data();
 	cout<<endl<<endl;
 	cout<<"\t\t\t STRUK PEMESANAN"<<endl;
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"No. "<<baru1->nomor;
		cout<<"Tanggal       : "<<baru1->tanggal<<endl;
		cout<<"Nama          : "<<baru1->nama<<endl;
		cout<<"Telepon       : "<<baru1->telpon<<endl;
		cout<<"Alamat        : "<<baru1->alamat<<endl<<endl;
		cout<<"Judul Katalog : "<<baru1->jdl<<endl;
		cout<<"Harga         : Rp."<<baru1->hrg<<endl;
		cout<<"Jumlah        :      "<<baru1->jml<<"x"<<endl;
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"Total         : Rp."<<baru1->total<<endl;
		cout<<"Bayar         : Rp."<<baru1->bayar<<endl;
		cout<<"Kembali       : Rp."<<baru1->kembali<<endl;
		cout<<"-------------------------------------------------------------------"<<endl;
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
	cout<<"Data Masuk"<<endl;
	
}

void data_pemesanan_tanggal(){
	string cari;
	cout<<"Masukkan Tanggal Pemesanan (DD-MM-YYYY): ";
	cin>>cari;
	if(!isEmpty()){
	bantu1=head1;
	if(cari==bantu1->tanggal){
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"No. "<<bantu1->nomor<<endl;
		cout<<"Tanggal       : "<<bantu1->tanggal<<endl;
		cout<<"Nama          : "<<bantu1->nama<<endl;
		cout<<"Telepon       : "<<bantu1->telpon<<endl;
		cout<<"Alamat        : "<<bantu1->alamat<<endl<<endl;
		cout<<"Judul Katalog : "<<bantu1->jdl<<endl;
		cout<<"Harga         : Rp."<<bantu1->hrg<<endl;
		cout<<"Jumlah        :      "<<bantu1->jml<<"x"<<endl;
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"Total         : Rp."<<bantu1->total<<endl;
		cout<<"Bayar         : Rp."<<bantu1->bayar<<endl;
		cout<<"Kembali       : Rp."<<bantu1->kembali<<endl;
		cout<<"-------------------------------------------------------------------"<<endl<<endl;
	}
	else{
		cout<<"Data Tidak Ditemukan"<<endl;
	}
	bantu1=bantu1->next;
	while(bantu1!=head1){
	if(cari==bantu1->tanggal){
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"No. "<<bantu1->nomor<<endl;
		cout<<"Tanggal       : "<<bantu1->tanggal<<endl;
		cout<<"Nama          : "<<bantu1->nama<<endl;
		cout<<"Telepon       : "<<bantu1->telpon<<endl;
		cout<<"Alamat        : "<<bantu1->alamat<<endl<<endl;
		cout<<"Judul Katalog : "<<bantu1->jdl<<endl;
		cout<<"Harga         : Rp."<<bantu1->hrg<<endl;
		cout<<"Jumlah        :      "<<bantu1->jml<<"x"<<endl;
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"Total         : Rp."<<bantu1->total<<endl;
		cout<<"Bayar         : Rp."<<bantu1->bayar<<endl;
		cout<<"Kembali       : Rp."<<bantu1->kembali<<endl;
		cout<<"-------------------------------------------------------------------"<<endl<<endl;
	}
	else{
		cout<<"Data Tidak Ditemukan"<<endl;
	}
	bantu1=bantu1->next;
	}
	cout<<endl;
	}
	else{
	cout<<"Data Kosong"<<endl;
	}	
}

void data_pemesanan_nomor(){
	int cari;
	cout<<"Masukkan Nomor Pemesanan: ";
	cin>>cari;
	if(!isEmpty()){
	bantu1=head1;
	if(cari==bantu1->nomor){
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"No. "<<bantu1->nomor<<endl;
		cout<<"Tanggal       : "<<bantu1->tanggal<<endl;
		cout<<"Nama          : "<<bantu1->nama<<endl;
		cout<<"Telepon       : "<<bantu1->telpon<<endl;
		cout<<"Alamat        : "<<bantu1->alamat<<endl<<endl;
		cout<<"Judul Katalog : "<<bantu1->jdl<<endl;
		cout<<"Harga         : Rp."<<bantu1->hrg<<endl;
		cout<<"Jumlah        :      "<<bantu1->jml<<"x"<<endl;
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"Total         : Rp."<<bantu1->total<<endl;
		cout<<"Bayar         : Rp."<<bantu1->bayar<<endl;
		cout<<"Kembali       : Rp."<<bantu1->kembali<<endl;
		cout<<"-------------------------------------------------------------------"<<endl<<endl;
	}
	else{
		cout<<"Data Tidak Ditemukan"<<endl;
	}
	bantu1=bantu1->next;
	while(bantu1!=head1){
	if(cari==bantu1->nomor){
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"No. "<<bantu1->nomor<<endl;
		cout<<"Tanggal       : "<<bantu1->tanggal<<endl;
		cout<<"Nama          : "<<bantu1->nama<<endl;
		cout<<"Telepon       : "<<bantu1->telpon<<endl;
		cout<<"Alamat        : "<<bantu1->alamat<<endl<<endl;
		cout<<"Judul Katalog : "<<bantu1->jdl<<endl;
		cout<<"Harga         : Rp."<<bantu1->hrg<<endl;
		cout<<"Jumlah        :      "<<bantu1->jml<<"x"<<endl;
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"Total         : Rp."<<bantu1->total<<endl;
		cout<<"Bayar         : Rp."<<bantu1->bayar<<endl;
		cout<<"Kembali       : Rp."<<bantu1->kembali<<endl;
		cout<<"-------------------------------------------------------------------"<<endl<<endl;
	}
	else{
		cout<<"Data Tidak Ditemukan"<<endl;
	}
	bantu1=bantu1->next;
	}
	cout<<endl;
	}
	else{
	cout<<"Data Kosong"<<endl;
	}	
}

void data_pemesanan_semua(){
	if(!isEmpty()){
	bantu1=head1;
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"No. "<<bantu1->nomor<<endl;
		cout<<"Tanggal       : "<<bantu1->tanggal<<endl;
		cout<<"Nama          : "<<bantu1->nama<<endl;
		cout<<"Telepon       : "<<bantu1->telpon<<endl;
		cout<<"Alamat        : "<<bantu1->alamat<<endl<<endl;
		cout<<"Judul Katalog : "<<bantu1->jdl<<endl;
		cout<<"Harga         : Rp."<<bantu1->hrg<<endl;
		cout<<"Jumlah        :      "<<bantu1->jml<<"x"<<endl;
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"Total         : Rp."<<bantu1->total<<endl;
		cout<<"Bayar         : Rp."<<bantu1->bayar<<endl;
		cout<<"Kembali       : Rp."<<bantu1->kembali<<endl;
		cout<<"-------------------------------------------------------------------"<<endl<<endl;
	bantu1=bantu1->next;
	while(bantu1!=head1){
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"No. "<<bantu1->nomor<<endl;
		cout<<"Tanggal       : "<<bantu1->tanggal<<endl;
		cout<<"Nama          : "<<bantu1->nama<<endl;
		cout<<"Telepon       : "<<bantu1->telpon<<endl;
		cout<<"Alamat        : "<<bantu1->alamat<<endl<<endl;
		cout<<"Judul Katalog : "<<bantu1->jdl<<endl;
		cout<<"Harga         : Rp."<<bantu1->hrg<<endl;
		cout<<"Jumlah        :      "<<bantu1->jml<<"x"<<endl;
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"Total         : Rp."<<bantu1->total<<endl;
		cout<<"Bayar         : Rp."<<bantu1->bayar<<endl;
		cout<<"Kembali       : Rp."<<bantu1->kembali<<endl;
		cout<<"-------------------------------------------------------------------"<<endl<<endl;
	bantu1=bantu1->next;
	}
	cout<<endl;
	}
	else{
	cout<<"Data Kosong"<<endl;
	}
}

void data_pemesanan(){
	int tunjuk;
	depan:
	cout<<"1. Riwayat Pemesanan Berdasarkan Nomor Pemesanan"<<endl;
	cout<<"2. Riwayat Pemesanan Berdasarkan Tanggal Pemesanan"<<endl;
	cout<<"3. Riwayat Pemesanan Keseluruhan"<<endl;
	cout<<"Masukkan Pilihan: ";
	cin>>tunjuk;
	if(tunjuk==1){
		system("cls");
		data_pemesanan_nomor();
		goto depan;
	}
	else if(tunjuk==2){
		system("cls");
		data_pemesanan_tanggal();
		goto depan;
	}
	else if(tunjuk==3){
		system("cls");
		data_pemesanan_semua();	
	}

}

void jumlah1(){
	int total=0;
	struct konsumen *ttl = head1;
	if(head1!=NULL){
		do{
			ttl=ttl->next;
			total += ttl->jml;
		} while (ttl!=head1);
	}
	cout<<"Total Pemesanan Katalog: "<<total<<" katalog"<<endl;
}

void jumlah(){
	int total=0;
	struct konsumen *jml = head1;
	if(head1!=NULL){
		do{
			jml=jml->next;
			total += jml->total;
		} while (jml!=head1);
	}
	cout<<"Total Pemasukan: Rp."<<total;
}

void report(){
	int pil;
	cout<<"1. Report Stok Katalog"<<endl;
	cout<<"2. Riwayat Pemesanan Katalog"<<endl;
	cout<<"Masukkan Pilihan: ";
	cin>>pil;
	if(pil==1){
		cout<<"\t\t\t Report Stok Katalog"<<endl;
		data_katalog();
		notifikasi();
		jumlah1();
		cout<<endl;
		jumlah();
		cout<<endl;
		
	}
	else if(pil==2){
		data_pemesanan();
	}
}



int main(){
int pil;
 awal:
 cout<<"\n \tPROGRAM PEMESANAN KATALOG\n";
 cout<<" ================================\n";
 cout<<" 1. Tambah Data\n";
 cout<<" 2. Data Katalog\n";
 cout<<" 3. Update Data Katalog\n";
 cout<<" 4. Pemesanan Katalog \n";
 cout<<" 5. Laporan Pemesanan Katalog\n";
 cout<<" 6. Keluar\n";
 cout<<" ================================\n\n";
 cout<<"Pilihan Anda = ";cin>>pil;
 if(pil==1)
 {
 system("cls");
 tambah_data();
 goto awal;
 }
 if(pil==2){
 system("cls");
 data_katalog();
 goto awal;
 }
 else if(pil==3){
 system("cls");
 update();
 goto awal;
 }
 if(pil==4){
 system("cls");
 pemesanan();
 goto awal;
 }
 if(pil==5){
 system("cls");
 report();
 goto awal;
 }
 if(pil==6){
 system("CLS");
 cout<<"PROGRAM SELESAI";
 }

return 0;
}





