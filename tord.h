#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;
int RandomPlayer(int a)
{
    int r;
    srand(time(0));
    r = rand() % a + 1;
    return r;
}
vector<string> truthq={};
void truthh(){
    truthq.push_back("If you wanna enjoy a trip among the playing member...Who will it be?");
    truthq.push_back("When was the last time you lied?");
    truthq.push_back("When was the last time you cried?");
    truthq.push_back("What's your biggest fear?");
    truthq.push_back("What's your biggest fantasy?");
    truthq.push_back("Who's the last person you searched on Instagram?");
    truthq.push_back("What's something you're glad your family doesn't know about you?");
    truthq.push_back("What's the worst thing you've ever done?");
    truthq.push_back("Name the person whom you envy the most(among the players)?");
    truthq.push_back("What's a secret you've never told anyone?");
    truthq.push_back("If you have to murder someone whom  it will be (among the players)?");
    truthq.push_back("Who was your first celebrity crush?");
    truthq.push_back("Who is your best friend (among the players)?");
    truthq.push_back("If you were going to be on a reality TV show, which would it be?");
    truthq.push_back("What's the most embarrassing thing you've ever done?");
    truthq.push_back("What's your biggest insecurity?");
    truthq.push_back("Have you ever stayed friends with someone because it benefitted you beyond just the friendship?");
    truthq.push_back("What's the biggest mistake you've ever made?");
    truthq.push_back("What's the most disgusting thing you've ever done?");
    truthq.push_back("What's the strangest dream you've had?");
    truthq.push_back("What's the name of your current crush?");
    truthq.push_back("If the world came to and end with whom do you want to live your last day(among the players)?");
}
vector<string> dareq={}; 
void dareh(){
    dareq.push_back("Write the first letter of your name on your forehead by a Sketch Pen.");
    dareq.push_back("Try to juggle 3 things of the group's choice");
    dareq.push_back("Show the most embarrassing photo on your phone");
    dareq.push_back("Show the last five people you texted and what the messages said");
    dareq.push_back("Let the rest of the group DM someone from your Instagram account");
    dareq.push_back("Eat a raw piece of garlic");
    dareq.push_back("Let the group look in your Instagram DMs");
    dareq.push_back("Say something rude to the person on your left");
    dareq.push_back("Drink 3 glass of liquid");
    dareq.push_back("Yell out the name of the person you hate the most (among the players)");
    dareq.push_back("Keep your eyes closed until it's your go again");
    dareq.push_back("Empty out your wallet/purse and show everyone what's inside");
    dareq.push_back("Whisper a secret to the person on your left");
    dareq.push_back("Say two honest bad things about everyone else in the group");
    dareq.push_back("Try and make the group laugh");
    dareq.push_back("Stay silent till next turn");
    dareq.push_back("Try to lick your nose");
    dareq.push_back("Behave like a drunkard till next turn");
    dareq.push_back("Speak i the voice of opposite gender till next turn");
    dareq.push_back("To text a person of players choice");
    dareq.push_back("Propose a player in the group of your choice");
}
int tord()
{    

    truthh();
    dareh();
    int n, r, Play = 1, Spin, point, TD, Again ;
    cout <<endl<<endl<< "******^^******^^******^^******^^******^^******^^******     ENTER THE NUMBERS OF PLAYERS GOING TO PLAY     ******^^******^^******^^******^^******^^******^^******" << endl<<endl;
    cin >> n;
    string Players[n];
    for (int i = 0; i < n; i++)
    {
        cout << "--------------  Enter the name of player  --------------- " <<endl<<"PLAYER "<< i + 1 << "------> ";
        cin >> Players[i];
    }
    cout << ",,,,,,,,,,,,,,,,,,,,,,  ALL PLAYERS ARE   ,,,,,,,,,,,,,,,,,,,,,,,,,,,,," << endl<<endl;
    for (int j = 0; j < n; j++)
    {
        cout << "..........  " << Players[j] << "  .........." << endl<<endl;
    }
    do
    {
        r = RandomPlayer(n);
        cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^   It's " << Players[r-1] << "'s turn to spin the bottle.  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl<<endl;
        cout << ">>>>>>>>>>>>>>>>> Press 1 to spin the bottle or to exit press 0 <<<<<<<<<<<<<<<<<" << endl;
        cin >> Spin;
        if (Spin == 1)
        {
            point = RandomPlayer(n);
            cout << "The Bottle is pointing at ------------------------------------>>>> " << Players[point-1]  <<endl<<endl;
            cout << "....... So " << Players[point-1] << ", press 1 for TRUTH and 2 for DARE ........." << endl;
            cin >> TD;
            if (TD == 1)
            {
                cout <<endl<<"\t\t\t<<<< "<< truthq[RandomPlayer(truthq.size())-1]<<" >>>>\n\n\n"
                     << endl;
            }
            else if (TD == 2)
            {
                cout <<endl<<"\t\t\t<<<< "<< dareq[RandomPlayer(dareq.size())-1] <<" >>>>\n\n\n"
                     << endl;
            }
            // cout<<"If you wanna spin the bottle again enter 1 and if you wanna exit press 0"<<endl;
            // cin>>Spin;
        }
        else if (Spin == 0)
        {
            Play=0;
            break;
        }
        cout<<"------ENTER 1 to spin the bottle again------"<<endl;
        cin>>Again;
        if(Again==1){
            continue;
        }
        else{
            cout<<"xxxxx You didn't enter '1' xxxxx"<<endl;
            Play=0;
        }

    } while (Play == 1);
            cout <<endl<< "*** *** *** *** *** *** *** *** *** *** ***   THANK YOU FOR PLAYING   *** *** *** *** *** *** *** *** *** *** *** " << endl;
    return 0;
}
