#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void result(int a,int b){
    int c=1;
    if(a==b){
        c=-1;
    }
    else if(a!=2){
        if(a+1!=b){
           c=0; 
        }
    }
    else{
        if(b==1){
            c=0;
        }
    }
    if(c==0){
        cout<<"YOU LOSE(Kismat kharab hai tumhari)!! "<<endl;
    }
    else if(c==-1){
        cout<<"---It's a TIE!!---"<<endl<<"--BETTER LUCK NEXT TIME--"<<endl;
    }
    else{
        cout<<"CONGRATULATIONS !!! YOU WIN :)"<<endl<<"Jyada khush mat ho kuch ukhada nahi hai :)"<<endl;
    }

}
int swg(){
    string I[3]={"Snake","Water","Gun"};
    int a;
    cout<<"Press 1 to play"<<endl;
    cin>>a;
    if(a==1){
    srand(time(NULL));
    while(a==1){
        cout<<"-----SNAKE  WATER  GUN------"<<endl;
        for(int i=0;i!=3;i++){
            cout<<"==> Press "<<i+1<<" to choose "<<I[i]<< " :)"<<endl; 
        }
        int b,random;
        random= rand()%3;
        cin>>b;
        cout<<" YOUR CHOICE IS "<<I[b-1]<<" and YOUR OPPONENT CHOOSE "<<I[random]<<endl;
        result(b-1,random);
        a=0;
        cout<<"Do you want to play again?? "<<endl<< "If Yes press 1"<<" OR if No press 0"<<endl;
        int d;
        cin>>d;
        if(d==1){
            a=1;
        }

    }    
    cout<<"----THANKS FOR PLAYING----"<<endl<<"HOPE YOU LIKED IT.";
    }
    else{
        cout<<"You didn't enter 1. Kindly enter 1 to play"<<endl;
    }
    return 0;
}