#include<iostream>
#include<D:\Microsoft VS Code\program\gammer geezer\avengers.h>
#include<D:\Microsoft VS Code\program\gammer geezer\ttt.h>
#include<D:\Microsoft VS Code\program\gammer geezer\kbc.h>
#include<D:\Microsoft VS Code\program\gammer geezer\tord.h>
#include<D:\Microsoft VS Code\program\gammer geezer\guessthen.h>
#include<D:\Microsoft VS Code\program\gammer geezer\swg.h>
using namespace std;
int main(){
    int a=-1;
    while(a!=0){
    cout<<"1.Guess the Number"<<endl;
    cout<<"2.Tic Tac Toe"<<endl;
    cout<<"3.KBC"<<endl;
    cout<<"4.Snake Water Gun"<<endl;
    cout<<"5.Avengers Secret Wars"<<endl;
    cout<<"6.Truth or Dare"<<endl;
    cout<<"0.Exit"<<endl;
    int choice;
    cin>>choice;
    switch (choice)
    {
    system("CLS");
    case 1:
        guessthen();
        break;
    case 2:
        ttt();
        cin.get();
        break;
    case 3:
        kbc();
        break;
    case 4:
        swg();
        break;
    case 5:
        avengers();
        break;
    case 6:
        tord();
        break;
    case 0:
        a=0;
        break;
    default:
        break;
    }
    system("CLS");
    }
    return 0;
}