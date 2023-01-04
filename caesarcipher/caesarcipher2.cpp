#include <iostream>
#include <string.h>
using namespace std;

void enkripsi()
{
   string plainteks, cipherteks;
   int i, k;
   char c;

   cout << "Ketikkan Pesan : ";
   cin.ignore();
   getline(cin, plainteks);
   cout << "Masukkan Jumlah pergeseran (0-25) : ";
   cin >> k;

   for (i = 0; i < plainteks.length(); i++)
   {
      c = plainteks[i];
      if (isalpha(c))
      {
         c = toupper(c);
         c = c - 65;
         c = (c + k) % 26;
         c = c + 65;
      }
      cipherteks = cipherteks + c;
   }
   cout << "Cipherteks : " << cipherteks << endl
        << endl;
}

void dekripsi()
{
   string plainteks, cipherteks;
   int i, k;
   char c;

   cout << "Ketikkan cipherteks: ";
   cin.ignore();
   getline(cin, cipherteks);

   cout << "Masukkan jumlah pergeseran (0-25): ";
   cin >> k;

   for (i = 0; i < cipherteks.length(); i++)
   {
      c = cipherteks[i];
      if (isalpha(c))
      {
         c = toupper(c);
         c = c - 65;
         if (c - k < 0)
         {
            c = 26 + (c - k);
         }
         else
         {
            c = (c - k) % 26;
            c = c + 65;
            c = tolower(c);
         }
         plainteks = plainteks + c;
      }
   }
   cout << "plainteks: " << plainteks << endl;
}

int main()
{
   int pil;
   bool stop;
   stop = false;
   while (!stop)
   {
      cout << "========================" << endl;
      cout << "|     Pilih Menu       |" << endl;
      cout << "========================" << endl;
      cout << "|     1. Enkripsi      |" << endl;
      cout << "|     2. Dekripsi      |" << endl;
      cout << "|     3. Exit          |" << endl;
      cout << "========================" << endl;
      cout << "Pilih Menu :  ";
      cin >> pil;
      switch (pil)
      {
      case 1:
         enkripsi();
         break;
      case 2:
         dekripsi();
         break;
      case 3:
         stop = true;
         break;
      }
   }
}