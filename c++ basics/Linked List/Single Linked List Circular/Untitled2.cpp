#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

struct simpul
{
    char nim[10], nama[10], gender[5];
    int nilai;

    struct simpul* next;
}mahasiswa,*baru, *awal=NULL, *last=NULL, *hapus, *bantu;

void buat_simpul()
{
    baru=(simpul*)malloc(sizeof(struct simpul));
    cout << " Insert NIM    : " ; cin >> baru->nim;
    cout << " Insert Nama   : " ; cin >> baru->nama;
    cout << " Insert Gender : " ; cin >> baru->gender;
    cout << " Insert Nilai  : " ; cin >> baru->nilai;
    baru->next=NULL;
}

void tambah_belakang()
{
    buat_simpul();
    if (awal==NULL)
        {
            awal=baru;
        }
        else
            {
                last->next=baru;
            }
        last=baru;
        last->next=NULL;

}

void tambah_depan()
{
    buat_simpul();
    if ( awal==NULL )
        {
            awal = baru;
            last = baru;
            last->next = NULL;
        }
            else
                {
                    baru->next=awal;
                    awal = baru;
                }

}

void hapus_depan()
{
    if (awal==NULL)
        cout << " Data Kosong !! " <<endl;
        else
        {
            hapus=awal;
            awal=awal->next;
            free(hapus);
            cout << " Data Bagian Depan Berhasil Dihapus !! " <<endl;
        }
}

void hapus_belakang()
{
    if (awal==NULL)
    cout<<" Data Kosong !! " << endl;
        else if(awal==last)
        {
             hapus=awal;
             awal=awal->next;
             free(hapus);
            cout << " Data Bagian Belakang Berhasil Dihapus !! " <<endl;
       }
        else
            {
                hapus=awal;
                while(hapus->next!=last)
                hapus=hapus->next;
                last=hapus;
                hapus=last->next;
                last->next=NULL;
                free(hapus);
                cout << " Data Bagian Belakang Berhasil Dihapus !! " <<endl;
            }
}
void print()
{
    if ( awal==NULL )
        cout << " Data Kosong !! " <<endl;
        else
            {
                bantu=awal;
                cout.flags(ios::left);
                cout << setw (10) << " NIM      NAMA      GENDER     NILAI " <<endl;
                cout << "--------------------------------------" <<endl;
                while ( bantu!=NULL )
                    {
                        cout<<setiosflags(ios::left)<<setw(10) << bantu->nim;
                        cout<<setiosflags(ios::left)<<setw(10) << bantu->nama;
                        cout<<setiosflags(ios::left)<<setw(10) << bantu->gender ;
                        cout<<setiosflags(ios::left)<<setw(10) << bantu->nilai<< endl;

                        bantu=bantu->next;
                    }
            }
        getch();
}

int main()
{
    char pilih;

    do{
        system ("cls");
        cout << endl <<endl;
        cout << " ---- CIRCULAR SINGLE LINKED LIST --- " <<endl;
        cout << "--------------------------------------" <<endl  <<endl;
        cout << " MENU : 1. Tambah Depan  " <<endl;
        cout << "        2. Tambah Belakang " <<endl;
        cout << "        -------------------" <<endl;
        cout << "        3. Hapus Depan " <<endl;
        cout << "        4. Hapus Belakang " <<endl;
        cout << "        -------------------" <<endl;
        cout << "        5. Tampilkan Data " <<endl;
        cout << "        6. Exit Program " <<endl;
        cout << "        -------------------" <<endl <<endl;
        cout << " Pilih Menu [ 1 - 6 ] : "; cin >> pilih;

        switch (pilih)
            {
                case '1' :
                    cout <<endl;
                    cout << " -- Insert Depan -- " <<endl;
                    tambah_depan();
                    getch ();
                break;

                case '2' :
                    cout <<endl;
                    cout << " -- Insert Belakang -- " <<endl;
                    tambah_belakang();
                    getch ();
                break;

                case '3' :
                    cout <<endl;
                    cout << " -- Hapus Depan -- " <<endl;
                    hapus_depan();
                    getch ();
                break;

                case '4' :
                    cout <<endl;
                    cout << " -- Hapus Belakang -- " <<endl;
                    hapus_belakang();
                    getch ();
                break;

                case '5' :
                    cout <<endl;
                    cout << "      -- Cetak Data Link List -- " <<endl <<endl;;
                    print();
                    getch ();
                break;

                case '6' :
                    cout <<endl;
                    cout << " Exit Program .....  " <<endl;
                    exit (0);
                    getch ();
                break;

                default :
                    cout <<endl;
                    cout << " Menu Yang Andan Pilih Salah !! " <<endl;
                    getch();
                break;
            }


    }while ( pilih != 6 );
    return(0);
}



