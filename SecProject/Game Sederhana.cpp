#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
struct pemain{
	char nama[50];
	string senjata;
	int life = 100, power=10,defends=5,magic=7, spirit=25;
	int gold = 100;
	int maxlife=100;
};
struct monster{
	int gold;
	string nama;
	int power, life;	
};
main(){
	int Pricelife=50;
	int levelupprice=500;
	struct pemain nama1;
	
	struct monster monster1;
	monster1.life=50;
	monster1.power=10;
	monster1.gold=100;
	monster1.nama="Boss of Knight Tree";
	
	struct monster monster2;
	monster2.life=25;
	monster2.power=5;
	monster2.gold=200;
	monster2.nama="Boss of Knight of Pegasus";
	
 	int pil1, pil2, pil3,pil4;
 	int turn, enemyturn;
 	int exit=0;
 	char yourstatus;
 	
 	cout<<"Hello...Welcome in Game Lilo and Lily"<<endl;
 	cout<<"Choice your Character..."<<endl;
 	cout<<"1. Lilo"<<endl;
 	cout<<"2. Lily"<<endl;
 	
 	cout<<"Your choice: ";
 	cin>>pil1;
 	cout<<endl;
 	if(pil1==1){
 		cout<<"Your Character is Lilo"<<endl;
    }else if (pil1==2){
 	    cout<<"YourCharacter is Lily"<<endl;
	}
 	cout<<"Set Your Name in here: ";
 	cin>>nama1.nama;
 	system("cls");
 	
 	cout<<"Hello Lilo, Set Find your equipment weapon"<<endl;
 	cout<<"1. Sword"<<endl;
 	cout<<"2. Axe"<<endl;
 	cout<<"3. Arrow"<<endl;
 	cout<<"4. Magic Wand"<<endl;
 	cout<<"Your choice :";
 		cin>>pil2;
 	if(pil2==1){
 		nama1.senjata="sword";
    }else if (pil2==2){
 	    nama1.senjata="axe";
	}else if(pil2==3){
		nama1.senjata="arrow";
	}else if(pil2==4){
		nama1.senjata="magic wand";
	}
	cout<<"Wow, you choice weapon "<<nama1.senjata<<". That's great choice, klik for play now and start your game!!!"<<endl;


	
	while(exit==0){
		cout<<endl<<endl;
		cout<<"Village of Esa Unggul University"<<endl;
		cout<<"1. Cek Status"<<endl;
	 	cout<<"2. Battle with Enemy"<<endl;
	 	cout<<"3. Set full your life"<<endl;
	 	cout<<"4. increase your status"<<endl;
	 	cout<<"5. Exit The Game"<<endl;
	 	cout<<"Your choice :"; 
		cin>>pil3;
		if(pil3==1){
			cout<<endl<<endl;
			cout<<"Cek Your Status"<<endl;
			cout<<"Set Life: "<<nama1.life<<endl;
			cout<<"Set Power: "<<nama1.power<<endl;
			cout<<"Set Defends: "<<nama1.defends<<endl;
			cout<<"Set Magic: "<<nama1.magic<<endl;
			cout<<"Set Magic: "<<nama1.spirit<<endl;
		
		}else if(pil3==2){
			cout<<endl<<endl;
			cout<<"Battle with enemy"<<endl;
			cout<<"1. Boss Of Knight Tree"<<endl;
			cout<<"2. Boss of Knight of Pegasus"<<endl;
			cout<<"Choice your Boss enemy: ";
			cin>>pil4;
			if(pil4==1){
				turn=monster1.life/nama1.power;
				enemyturn=turn-1;
				if(enemyturn*monster1.power>=nama1.life){
					cout<<"Game over"<<endl;
				}else{
					nama1.gold+=monster1.gold;
					nama1.life-=monster1.power*enemyturn;
					cout<<"\nBoss Of Knight Tree defeated"<<endl;
					cout<<"Get Reward: "<<monster1.gold<<endl;
					cout<<"life remaining: "<<nama1.life<<endl;
				}
				
			}else if(pil4==2){
					turn=monster2.life/nama1.power;
				enemyturn=turn-1;
				if(enemyturn*monster2.power>=nama1.life){
					cout<<"Game over"<<endl;
				}else{
					nama1.gold+=monster2.gold;
					nama1.life-=monster2.power*enemyturn;
					cout<<"\nBoss Of Knight of Pegasus defeated"<<endl;
					cout<<"Get Reward: "<<monster2.gold<<endl;
					cout<<"life remaining: "<<nama1.life<<endl;
				}
			}
		}else if(pil3==3){
			cout<<endl<<endl;
			if(nama1.gold>=Pricelife){
			cout<<"you don't have enough gold"<<endl;
			}else{
			nama1.gold-Pricelife;
			cout<<"your life is full"<<endl;
			nama1.life=nama1.maxlife;
			}
				
		}else if(pil3==4){
			cout<<endl<<endl;
			cout<<"Increase your status(Y/N)? ";
			cin>>yourstatus;
			cout<<"Pay: 500 Gold"<<endl;
			if (yourstatus=='Y'){
				if(nama1.gold>=levelupprice){
				cout<<"you don't have enough gold"<<endl;
				}else{
					nama1.gold-=levelupprice;
					nama1.maxlife+=10;
					nama1.power+=10;
					nama1.defends+=5;
					nama1.magic+=8;
					nama1.spirit+=15;
					cout<<"Gets"<<endl<<endl;
					cout<<"Life: 10 "<<endl;
					cout<<"Power: 10 "<<endl;
					cout<<"Defends: 5 "<<endl;
					cout<<"Magic: 8 "<<endl;
					cout<<"Spirit: 15 "<<endl;
					cout<<"Your status have been increased"<<endl;	
				}
			}
		}else if(pil3==5){
			exit=1;
		}
		
	}
	char yourdata;
	cout<<"Save your Data game, Before Exit(Y/N)? ";
	cin>>yourdata;	
	if (yourdata=='Y'){
		ofstream profile1("savedata.txt");
		profile1<<"Nama Pemain: "<<nama1.nama<<endl;
		profile1<<"Sisa gold  : "<<nama1.gold<<endl;
		profile1<<"Life       : "<<nama1.life<<endl;
		profile1<<"Power      : "<<nama1.power<<endl;
		profile1<<"Defends    : "<<nama1.defends<<endl;
		profile1<<"Magic      : "<<nama1.magic<<endl;
		profile1<<"Spirit     : "<<nama1.spirit<<endl;
		profile1.close();
	}
}

	  
 	
 		

