#include<bits/stdc++.h>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;

class rol{
    public:
        char name[21];
        int wins;
        int tot;
        float perc;
        rol(){
            strcpy(name,"no_name");
            tot=1;
            wins=0;
            perc=(wins/(tot*1.00))*100;
        }
        rol(int i, char* n){
            strcpy(name,n);
            wins=0;
            tot=1;
            perc=(wins/(tot*1.00))*100;
        }
        void sho()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Visits here: "<<tot<<endl;
            cout<<wins<<endl;
            cout<<"Win percentage: "<<setprecision(2)<<fixed<<perc<<endl;
        }
        void upda(char* n){
            fstream f;
            f.open("avengers.txt", ios::in | ios::out | ios::ate);
            f.seekg(0);
            f.read((char*)this, sizeof(*this));
            while (!f.eof()) {
            if (!strcmp(n, name)) {
            strcpy(n,name);
            tot++;                                                                  
            perc=(wins/(tot*1.00))*100;
            f.seekp(f.tellp() - sizeof(*this));
            f.write((char*)this, sizeof(*this));
            }
            f.read((char*)this, sizeof(*this));
            }
            f.close();
            }
        void updawin(char* n){
            fstream f;
            f.open("avengers.txt", ios::in | ios::out | ios::ate);
            f.seekg(0);
            f.read((char*)this, sizeof(*this));
            while (!f.eof()) {
            if (!strcmp(n, name)) {
            strcpy(n,name);
            wins++;                                                                
            perc=(wins/(tot*1.00))*100;
            f.seekp(f.tellp() - sizeof(*this));
            f.write((char*)this, sizeof(*this));
            }
            f.read((char*)this, sizeof(*this));
            }
            f.close();
            }
        bool sname(char* n){
            ifstream f;
            f.open("avengers.txt",ios::in);
            f.read((char*)this,sizeof(*this));
            while(!f.eof()){
                if(!strcmp(n,name)){
                    return 1;
                }
                f.read((char*)this,sizeof(*this));
            }
            f.close();
            return 0;
        }
        void sett(){
            ofstream f;
            f.open("avengers.txt", ios::app );
            f.write((char*)this, sizeof(*this));
            f.close();
        }
        void sear(char* n){
            ifstream f;
            f.open("avengers.txt", ios::in);
            f.read((char*)this, sizeof(*this));
            while (!f.eof()) {
            if (!strcmp(n, name)) {
                sho();
            }
            f.read((char*)this, sizeof(*this));
            }
            f.close();
        }
    };
void setup(rol ly){
    char nm[21];
    cin.getline(nm,20);
    if(ly.sname(nm)){
        cout<<"User already exists, is this you?"<<endl;
        ly.sear(nm);
        int tr;
        cout<<"Enter 1 if yes, otherwise 0 "<<endl;
        cin>>tr;
        if(tr==1){
            ly.upda(nm);
        }
        else{
            setup(ly);
        }
    }
    else{
        rol ly(0,nm);
        ly.sho();
        ly.sett();
    }
}