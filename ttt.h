#include<iostream>
#include <iomanip>
using namespace std;
int choice;
char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int tab[]={0,0,0,0,0,0,0,0,0};
char turn;
void show(){system("cls");
cout<<"                                 |     |     "<<endl; 
cout<<"                              "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"    "<<endl;
cout<<"                              ___|_____|___"<<endl;
cout<<"                                 |     |     "<<endl;
cout<<"                              "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][2]<<"    "<<endl;
cout<<"                              ___|_____|___"<<endl;
cout<<"                                 |     |     "<<endl;
cout<<"                              "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"    "<<endl;
cout<<"                                 |     |     "<<endl<<endl;
}
void ttp_turn1()
{cout<<"......................................................=> x's turn to play: ";
int choice;
if(turn=='x')
cout<<"......................................................=> ttp [x]: ";
cin>>choice;
while(tab[choice-1]!=0){
    cout<<endl;
    cout<<".................................................Invalid choice, try again ";
    cin>>choice;
    cout<<endl;
}
tab[choice-1]=1;
 switch(choice)
{case 1:
arr[0][0]='x';
break;
case 2:
arr[0][1]='x';
break;
case 3:
arr[0][2]='x';
break;
case 4:
arr[1][0]='x';
break;
case 5:
arr[1][1]='x';
break;
case 6:
arr[1][2]='x';
break;
case 7:
arr[2][0]='x';
break;
case 8:
arr[2][1]='x';
break;
case 9:
arr[2][2]='x';
break;
default:
cout<<"invalid choice"<<endl;}
}
void ttp_turn2(){
cout<<"......................................................=> o's turn to play: ";
if(turn=='0')
cout<<"......................................................=> ttp [0]: ";
cin>>choice;
while(tab[choice-1]!=0){
    cout<<endl;
    cout<<".................................................Invalid choice, try again ";
    cin>>choice;
    cout<<endl;
}
tab[choice-1]=-1;
 switch(choice)
{case 1:
arr[0][0]='0';
break;
case 2:
arr[0][1]='0';
break;
case 3:
arr[0][2]='0';
break;
case 4:
arr[1][0]='0';
case 5:
arr[1][1]='0';
break;
case 6:
arr[1][2]='0';
break;
case 7:
arr[2][0]='0';
break;
case 8:
arr[2][1]='0';
break;
case 9:
arr[2][2]='0';
break;
default:
cout<<"invalid choice"<<endl;}

}
bool chk(char arr[][3]){
    if((tab[0]==tab[1])&&(tab[1]==tab[2])&&(tab[1]!=0)
    ||(tab[3]==tab[4])&&(tab[4]==tab[5])&&(tab[4]!=0)
    ||(tab[6]==tab[7])&&(tab[7]==tab[8])&&(tab[7]!=0)
    ||(tab[0]==tab[3])&&(tab[3]==tab[6])&&(tab[3]!=0)
    ||(tab[1]==tab[4])&&(tab[4]==tab[7])&&(tab[4]!=0)
    ||(tab[2]==tab[5])&&(tab[5]==tab[8])&&(tab[5]!=0)
    ||(tab[0]==tab[4])&&(tab[4]==tab[8])&&(tab[4]!=0)
    ||(tab[2]==tab[4])&&(tab[4]==tab[6])&&(tab[4]!=0)
    ){
        return true;
    }
    return false;
}
int ttt()
{int f=0;
int iii=0;
    while(true){
show();
iii++;
ttp_turn1();
show();
if(chk(arr)==1){
    for(int i=0;i<30;i++){
        cout<<char(244)<<char(245);
    }
    cout<<"_________x wins_________";
    for(int i=0;i<30;i++){
        cout<<char(245)<<char(244);
    }
    cout<<endl<<endl;
    f=1;
    cout<<"_______________________________________________________=>Press enter to exit"<<endl;
    cin.get();
    break;
}
if(iii==5){
    break;
}
ttp_turn2();
show();
if(chk(arr)==1){
    for(int i=0;i<30;i++){
        cout<<char(245)<<char(244);
    }
     cout<<"_________o wins_________";
    for(int i=0;i<30;i++){
        cout<<char(245)<<char(244);
    }
    cout<<endl<<endl;
    f=1;
    cout<<"_______________________________________________________=>Press enter to exit"<<endl;
    cin.get();
    break;
}
}
    if(f==0){
        for(int i=0;i<30;i++){
        cout<<char(245)<<char(244);
    }
         cout<<"_________It's a tie_________";
    for(int i=0;i<30;i++){
        cout<<char(245)<<char(244);
    }
    cout<<endl<<endl;
        cout<<"_______________________________________________________=>Enter 0 to exit"<<endl;
        cin.get();
    }
return 0;
}