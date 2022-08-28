#include<iostream>
#include<vector>
#include<time.h>
#include<string>
using namespace std;
void decor(string a){
    cout<<" ";
    for(int i=0;i<a.size();i++){
                    cout<<char(174);
                }
                cout<<endl;
                cout<<"___|"<<a<<"|"<<endl;
                cout<<"    ";
                for(int i=0;i<a.size();i++){
                    cout<<char(175);
                }
}
int kbc(){
    int kbcnothing=0;
    vector<string> q1={"According to the Mahabharata, which of these characters got married through a swayamvara?","Kunti","Madri","Gandhari","Satyavati"};
    vector<string> q2={"In the Film 'OMG Oh My God' Kanji Bhai filed a case against whom for the damage of his shop due to an earthquake ?","Bhagwan(god)","Mumbai City","Bharat Mata","Parliament(Bhartiya Sansad)"};
    vector<string> q3={"What is the new name of the Hyderabad franchise that would replace Deccan Chargers in IPL6?","Sunrises Hyderabad|","Andhra Aces","Nizam Jyothi","Sun Chargers"};
    vector<string> q4={"In India, under which Union Ministry does the `Rajbhasha Vibhag` function?","Home Affairs","Culture","Law and Justice","HRD"};
    vector<string> q5={"According to a proverb, what is said to be `the mother of invention` ?","Necessity"," Society" ,"Problem","Science"};
    vector<string> q6={"Floor exercise, vault, and uneven bars are events in which sport ?","Gymnastics","Wrestling","Synchronised Swimming","Skating"};
    vector<string> q7={"Which actress got married to Siddharth Roy Kapur in 2012 ?","Vidya Balan","Prachi Desai","Lisa Ray","Sushmita Sen"};
    vector<string> q8={"Which among these is an Island country ?","Maldives","Oman","Yemen","Peru"};
    vector<string> q9={"What has been the currency of Greece since 2002?","Euro","Peso","Drachma","Lira"};
    vector<string> q10={"Which constituency does Abhijit Mukherjee represents in the 15th Lok Sabha ?","Jangitpur","Birhum","Jadavpur","Mindapore"};
    vector<string> q11={"which Indian sportsperson was awarded the “order of Australia” award in 2012?","Sachin Tendulkar","Sania Mirza","Rahul Dravid","Sania Nehwal"};
    vector<string> q12={"Which incarnation of Vishnu appeared when the demon king Bali ruled the entire universe ?","Vamana","Rama","Varaha","Parashurama"};
    vector<string> q13={"To whom did Ravindranath Tagore dedicate his book `Visva Parichay` written on science?","Satyendra Nath Bose","CV Raman","Jagdish Chandra Bose","P. C. Roy" };
    vector<string> q14={"Which of these ships was not part of Christopher Columbus`s first voyage in 1492 ?","la Gorda","Nina","Pinata","Santa Maria"};
    vector<string> q15={"Which of the following mean head of Police Station “Thanedaar ” ?","Daroga","Kirani","Hawaldar","Munshi"};
    vector<string> q16={"What do the five rings of the Olympics represent?","Five continents","Five games","Five languages","Five oceans"};
    vector<string> q17={"Lockjaw is a symptom of which of these disease?","Tetanus","Cholera","Plague","Diptheria"};
    vector<string> q18={"Bharatpur Bird Century was named Keoladeo Ghana National Park after a temple dedicated to which God or Goddess?","Shiva","Kali","Yama","Kuber" };
    vector<string> q19={"With which religion would you associate the practice of Santhara fasting unto death?","Jainism","Sikhism","Shintoism","Buddhism"};
    vector<string> q20={"The cricket Test series played between India and England in India is contested for which trophy?","Anthony de mello trophy","Pataudi trophy","M.A.Chidambaram trophy","Gooch Gavaskar trophy"};
    vector<string> q21={"Which of these tourist attractions is situated on an island ?","Elephanta Caves","Ellora Caves","Ajanta Caves","Kanheri Caves"};
    vector<string> q22={"Which of these actress is married to a professional golfer?","Chitrangada Singh","Celina Jaitly","Esha Deol","Ayesha Takia"};
    vector<string> q23={"According to the Devi, Bhagavata, from the tears of which god is the rudraksha tree believed to have been created?","Shiva","Vishnu","Brahma","Kamadeva"};
    vector<string> q24={"What was the first ministerial portfolio held by Indira Gandhi?","Information&Broadcasting","Home Affairs","Science&Technology","Education"};
    vector<string> q25={"Which of these is a chemical element present in the periodic table?","Americium","Eurocium","Asiacium","Africium"};
    vector<string> q26={"Industrial Toxicology- Research Centre, is situated in which of the following states?","U.P.","Gujarat","M.P.","Bihar"};
    vector<string> q27={"Which of these world champions is a parent of twins?","M. C. Mary Kom","Sushil Kumar","Vishwanathan Anand","Gagan Narang"};
    vector<string> q28={"Which of these numbers is used before the word “Shringar” to describe a fully beautiful women ?","Solah","Chhattees","Chhappan","Gyarah"};
    vector<string> q29={"Who is the author of the book 'Amrit Ki Ore'?","Narendra Mohan","Mukesh Kumar","Upendra Nath","Nirad C. Chaudhary"};
    vector<string> q30={"Whose different forms are “Shailputri”, “Brahmcharani” and “Chandraghanta” ?","Durga","Rati","Ganga","Menaka"};
    vector<string> q31={"The sanskrit word “Himalaya” means “The place of ____”?","Ice","Devata","Hindu","Tapasya"};
    vector<string> q32={"Which of the following is observed as Sports Day every year?","29th August","2nd October","26th July","22nd April"};
    vector<string> q33={"Which of these is not a work of Kalidas?","Kadambari","Raghuvamsham","Meghadutam","Vikramorvasyam"};
    vector<string> q34={"Kalarippayat isthe martial art  of the State of","Kerala","Nagaland","Mizoram","Madhya Pradesh"};
    vector<string> q35={"World Health Day is observed on","Apr 7","Mar 6","Mar 15","Apr 28"};
    vector<string> q36={"Which of these names means `lightning`?","Damini","Saumaya","Shreya","Mahima"};
    vector<string> q37={"Pongal is a popular festival of which state?","Tamil nadu","Andhra Pradesh","Kerala","Karnataka"};
    vector<string> q38={"Which city of India was first of all affected by plague?","Surat","Bombay","Jaipur","Kanpur"};
    vector<string> q39={"Dogri is spoken in which of the following states ","Jammu and Kashmir","Assam","Orissa","Bihar"};
    vector<string> q40={"The festival celebrated to commemorate the ordeal of Islamics is","Id-ul-Zuha","Moharram","Id-i-Milad","Id-ul-Fitr"};
    vector<string> q41={"Which of these brands of pens is named after highest peak in Western Europe?","Montblanc","Reynolds","Faber-Castell","Sheaffer"};
    vector<string> q42={"Which of these names means `gold-like`?","Sonam","Sonakshi","Sumita","Sanjana"};
    vector<string> q43={"The 227 year old 'Nawab Saheb Ki Haveli' is Iocated at","Jaipur","Ajmer","Lucknow","Hyderabad"};
    vector<string> q44={"Which of the following years was celebrated as the World Communication Year?","1983","1969","1999","2002"};
    vector<string> q45={"'Good Friday' is observed to commemorate the event of","Cruxification of Jesus","Birth of St. Peter","Birth of Jesus Christ","Rebirth of Jesus"};
    vector<string> q46={"Which of these is the name of an island as well as a type of coffee","Java","Mocha","Arabica","OOlong"};
    vector<string> q47={"Which of these personalities is known as the `Flying Sikh`","Milkha Singh","Gurbachan Singh Randhawa","Navjot Singh Siddhu","Harbhajan Singh"};
    vector<string> q48={"Which actor played the title role of ”Agent Vinod” in the 1977 film of the same name","Mahendra Sandhu","Vinod Mehra","Vinod Khanna","Navin Nischol"};
    vector<string> q49={"Which is the least populated state of India?","Sikkim","Manipur","Arunachal Pradesh","Goa"};
    vector<string> q50={"Who wrote the poem `Hum Panchi Unmukt Gagan Ke`?","Shivmangal Singh `Suman`","Ayodhya Singh Upadhyay `Hariaudh`","Suryakanth Tripathi `Nirala`","Jayshankar Prasad"};
    vector<string> q51={"Who is the singer of `Pi`s Lullby, the Oscar-nominated song from the movie `Life of Pi`?","Bombay Jayashri","Mahalakshmi Iyer","K.S.Chithra","Suchitra"};
    vector<string> q52={"In which edition of the Olympics did women participate for the first time?","Paris, 1900","London, 1908","Antwerp, 1920","Berlin, 1916"};
    vector<string> q53={"Which of these did Bimbisara, the king of Magadha, get as dowry on marrying the daughter of the king of Kosala?","Kashi","Pataliputra","Anga","Vaisali"};
    vector<string> q54={"With reference to genetics, which of these would best describe DNA and RNA?","Acid","Base","Salt","Metal"};
    vector<string> q55={"Who amount these was the first lady Air Marshal of the Indian Air Force?","Padmavathy Bandopadh","Puneet Arora","Nirmala Kannan","Lakshmi Sehgal"};
    vector<string> q56={"After which of these personalities, one time Lieutenant Governor of Punjab, is a suburb in Dharamshala named?","Sir Donald Mcleod","Lord Dalhousie","Sir Edward Bames","Lord Lansdowne"};
    vector<string> q57={"Kaiser-i-Hind, found mostly in Nepal and the north-eastern part of India, is a rare species of which type of organism?","Butterfly","Lizard","Bee","Fish"};
    vector<string> q58={"Who amount these was the first lady Air Marshal of the Indian Air Force?","Padmavathy Bandopadh","Puneet Arora","Nirmala Kannan","Lakshmi Sehgal"};
    vector<string> q59={"Kalarippayat is the martial art  of the State of","Kerala","Nagaland","Mizoram","Madhya Pradesh"};
    vector<string> q60={"Which of these vice president of India was earlier chief minister of his state?","Bhairon Singh Shekhawat","Zakir Hussain","R. Venkalaraman","V. V. Giri"};
    vector<string> q61={"Which of these terms is used for a state of political hostility characterized by threats or propaganda between countries?","Cold War","Summer War","Rainy War","Spring War"};
    vector<string> q62={"In 2011, who replaced Gary Kirsten as the coach of the Indian Test cricket team?","Duncan Fletcher","Dav Whatmore","John Wright","Gerg Chappel"};
    vector<string> q63={"Who founded the political party National People`s Party (NPP) in January 2013?","P A Sangama","Amar Singh","B. S. Reddyuruppa","Keshubhai Patel"};
    vector<string> q64={"During the start of his political life, Sher Shah Suri was the `jagirdar` of which place?","Sasaram","Rohtak","Mathua","Darbhaga"};
    vector<string> q65={"Which state or UT of India is divided into four districts - all named after the four cardinal directories?","Sikkim","Goa","Manipur","Chandigarh"};
    vector<string> q66={"Who holds the record of being elected to the Lok Sabha for the most number of terms?","Indrajit Gupt","Atal Bihari Vajpayee","P. M. Sayeed","Babu Jagjivan Ram"};
    vector<string> q67={"What was the name of Jain tirtankar Mahavira`s wife?","Yashoda","Devki","Rohini","Subhadra"};
    vector<string> q68={"Which of these Indian currency notes does not have the special geometrical shape that helps the visually impaired denominations?","Rs 10","Rs 100","Rs 50","Rs 1000"};
    vector<string> q69={"Which mathematician did the most numerous work in mathematics,physics and engineering?","Euler","Gauss","Jacobi","Ramanujan"};
    vector<string> q70={"Emulsion, primer and undercoat are all terms connected with what ?","Painting","Knitting","Sewing","Cooking"};
    vector<string> q71={"Which of these is the name for a kind of shot in badminton ?","Drop","Bounce","Yorker","Bout"};
    vector<string> q72={"Which of these Chief Minister of an Indian State is an IIT Graduate ?","Manohar Parrikar","Okram Ibobi Singh","Kiran Kumar Reddy","Omar Abdullah"};
    vector<string> q73={"Who did Viswanathan Anand defeat in 2012 to retain the world Chess Champion title ?","Boris Gelfand","Rusian Poromariov","Vladimir Knamnik","Vesselin Topalov"};
    vector<string> q74={"Which river was set as the eastern boundary of Maharaja Ranjit Singh`s kingdom by the Treaty of Amritsar of 1809 ?","Sutlej","Beas","Ghaggar","Ravi"};
    vector<string> q75={"Complete the Hindi proverb : “Ab Pachhtave hoth kya jab Chidiya Chug gayi________” ?","Khet","Daana","Moti","Beej"};
    vector<string> q76={"Vijay Kumar Won a Silver medal at the 2012 London Olympics in which sport ?","Shooting","Boxing","Badminton","Wrestling"};
    vector<string> q77={"Which Country`s Head of State visited Ajmer Sharif in April 2012 and announced a donation of Rs. 5 Crore ?","Pakistan","Bangladesh","Afghanistan","Iran"};
    vector<string> q78={"According to the Ramayana, whose flag had a veena motif on it ?","Ravana","Bharata","Meghnada","Vibhishana"};
    vector<string> q79={"Which State did P. A. Sangama serve a s Chief Minister from 1988 to 1990 ?","Meghalaya","Arunachal Pradesh","Assam","Manipur"};
    vector<string> q80={"Which of these buildings in Rajasthan was built to provide employment to people during a period of famine ?","Umaid Bhawan palace","Amber Fort","Hawa Mahal","Mehrangarh Fort"};
    vector<string> q81={"Which of these must a player hold during a Raid in a game of Kabaddi ?","Breath","Ball","Tears","Anger"};
    vector<string> q82={"Which type of professionals are the lead characters of the TV serial `Kuch toh Log kahenge` ?","Doctors","Engineers","Architects","Lawyers"};
    vector<string> q83={"“Time ho gaya hai, pack up” were reported to be the last words of which film star ?","Rajesh Khanna","Shammi Kapoor","Dev Anand","Joy Mukherjee"};
    vector<string> q84={"Which poet wrote-'Rann beech chowkri bhar bharkar chetak ban gaya nirala tha, Rana Pratapne ghore se, pad gaya hawa ka pala tha' ?","Shyam Narayan Pandey","MaithleeSharan Gupt.","Dwaraka Prasad Mukherjee","Subhadra Kumari Chauhan"};
    vector<string> q85={"Which of these cities does the Yamuna Express Way connect with greater Noida ?","Agra","Jhansi","Kanpur","Haridwar"};
    vector<string> q86={"Who is the only woman to become the Chief Election Commissioner of India ?","V S Ramadevi","C. B. Muthamma","Punita Arora","Anna George Malhotra"};
    vector<string> q87={"Which of these beauty queens shares her name with the surname of a West Indian Cricket legends ?","Lara","Diana","Priyanka","Sushmita"};
    vector<string> q88={"Which of these is held annually in India ?","Budget Session of Parliament","Lok Sabha Elections","Presidential Elections","Vidhan Sabha Elections"};
    vector<string> q89={"Kamadeva got the name `Ananga` after he was burned to ashes by the fire of which god`s third eye ?","Shiva","Agni","Vishnu","Indra"};
    vector<string> q90={"How many bones does an elephant`s trunk have ?","0","5","1","10"};
    vector<string> q91={"In which city is the Peer Dastageer Sahib Shrine that was damaged in a fire in June 2012 Situated ?","Srinagar","Ajmer","Aligarh","Hyderabad"};
    vector<string> q92={"Who succeeded General V. K. Singh as the Chief of Army Staff of India ?","Gen Bikram Singh","Gen Tejinder Singh","Gen Dalbir Singh Suhag","Gen Deepak Kapoor"};
    vector<string> q93={"According to Kalhana`s `Rajatarangini`, who drained out the water from Kashmir Valley, that was a vast Lake, and made it habitable ?","Kashyapa","Agastya","Valmiki","Parashurama"};
    vector<string> q94={"In May 2012, which country`s prime minister became its president and the president became the prime minister ?","Russia","Poland","Ukrane","France"};
    vector<string> q95={"In 2011, India`s first air-conditioned double-decker train started between which two cities ?","Howrah-Darbhnaga","Habibganj-Indore","Sealdah-Delhi","Howrah-Dhanbad"};
    vector<string> q96={"The awarding of gold medals for first place, silver medals for second and bronze medals for third began in which Olympics ?","1904, St Louis","1900, Paris","1908,London","1912,Stockholm"};
    vector<string> q97={"In 1860, Which British official became the first auditor General of India ?","Sir Edmund Drummond","Sir A. F. Cox","Sir Proby Cautley","Lord Sallsbury"};
    vector<string> q98={"Which of these sweets are often cast in various moulds to resemble flowers, fruit and shells ?","Sandesh","Rosogulla","Rasmalai","Ledikeni"};
    vector<string> q99={"Which of these sportswomen is a five-time world champion in her sport ?","M C Mary Kom","Deepika Kumari","Krishna Poonia","Saina Nehwal"};
    vector<string> q100={"Who is the first woman to become CEO of the soft drink giant PepsiCo ?","Indra Nooyi","Virginia Rometty","Ursula Burns","Meg Whitman"};
    vector<vector<string>> kbcl1={q1,q2,q3,q4,q5,q6,q7,q8,q9,q10};
    vector<vector<string>> kbcl2={q11,q12,q13,q14,q15,q16,q17,q18,q19,q20};
    vector<vector<string>> kbcl3={q21,q22,q23,q24,q25,q26,q27,q28,q29,q30};
    vector<vector<string>> kbcl4={q31,q32,q33,q34,q35,q36,q37,q38,q39,q40};
    vector<vector<string>> kbcl5={q41,q42,q43,q44,q45,q46,q47,q48,q49,q50};
    vector<vector<string>> kbcl6={q51,q52,q53,q54,q55,q56,q57,q58,q59,q60};
    vector<vector<string>> kbcl7={q61,q62,q63,q64,q65,q66,q67,q68,q69,q70};
    vector<vector<string>> kbcl8={q71,q72,q73,q74,q75,q76,q77,q78,q79,q80};
    vector<vector<string>> kbcl9={q81,q82,q83,q84,q85,q86,q87,q88,q89,q90};
    vector<vector<string>> kbcl10={q91,q92,q93,q94,q95,q96,q97,q98,q99,q100};
    vector<vector<vector<string>>> kbct={kbcl1,kbcl2,kbcl3,kbcl4,kbcl5,kbcl6,kbcl7,kbcl8,kbcl9,kbcl10};
        cout<<"________________________________WELCOME TO KBC________________________________";
        cout<<endl<<endl<<endl;
        cout<<"______________________________________________________Enter 1 to continue..."<<endl;
        string kbca;
        cin>>kbca;
        cout<<"________________________________The game begins________________________________"<<endl;
        int kbcc=0;
        for(int i=0;i<11;i++){
            if (kbcc==4){
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Congratulations! You passed the first level"<<endl;
            }
            if (kbcc==7){
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Congratulations! You passed the second level"<<endl;
            }
            if (kbcc==9){
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Congratulations! Behold the final question_______~\\(^^)/~"<<endl;
            }
            if (kbcc==10){
                  cout<<"______________________________________________________Celebrate! It's your luck day : You WIN!!!"<<endl;
                  cout<<"______________________________________________________WHAT DID YOU EXPECT?"<<endl<<endl<<endl;
                  cout<<"______________________________________________________A REWARD?   Naah"<<endl;
                  cout<<"______________________________________________________THANK YOU FOR PLAYING"<<endl;
            }
            srand(time(NULL));
            if (kbcc!=10){
                cout<<"Question no."<<i+1<<endl;
                vector<vector<string>> kbca=kbct[i];
                vector<string> kbcd=kbca[rand()%10];
                cout<<"   ";
                decor(kbcd[0]);
                cout<<endl;
                vector<string> kbch=kbcd;
                string kbcp=kbcd[1];
                vector<string> kbcv=kbch;
                int kbcf=(rand()%4)+1;
                cout<<"A. ";
                decor(kbch[kbcf]);
                cout<<endl;
                string kbcdf=kbch[kbcf];
                kbch.erase(kbch.begin()+kbcf);
                kbcf=(rand()%3)+1;
                cout<<"B. ";
                decor(kbch[kbcf]);
                cout<<endl;
                string kbcsf=kbch[kbcf];
                kbch.erase(kbch.begin()+kbcf);
                kbcf=(rand()%2)+1;
                cout<<"C. ";
                decor(kbch[kbcf]);
                cout<<endl;
                string kbcfg=kbch[kbcf];
                kbch.erase(kbch.begin()+kbcf);
                cout<<"D. ";
                decor(kbch[1]);
                cout<<endl;
                string kbcrt=kbch[1];
                kbch.erase(kbch.begin()+1);
                string kbcm;
                cin>>kbcm;
                cout<<endl;
                if (kbcm=="A"){
                    if (kbcdf==kbcp){
                        cout<<"CORRECT ANSWER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                        kbcc++;
                    }
                    else{
                        cout<<"BETTER LUCK NEXT TIME"<<endl;
                        cout<<"THANK YOU FOR PLAYING"<<endl;
                        break;
                    }
                }
                else if (kbcm=="B"){
                    if (kbcsf==kbcp){
                        cout<<"CORRECT ANSWER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                        kbcc++;
                    }
                    else{
                        cout<<"BETTER LUCK NEXT TIME"<<endl;
                        cout<<"THANK YOU FOR PLAYING"<<endl;
                        break;
                    }
                }
                else if (kbcm=="C"){
                    if (kbcfg==kbcp){
                        cout<<"CORRECT ANSWER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                        kbcc++;
                    }
                    else{
                        cout<<"BETTER LUCK NEXT TIME"<<endl;
                        cout<<"THANK YOU FOR PLAYING"<<endl;
                        break;
                    }
                }
                else if (kbcm=="D"){
                    if (kbcrt==kbcp){
                        cout<<"CORRECT ANSWER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                        kbcc++;
                    }
                    else{
                        cout<<"BETTER LUCK NEXT TIME"<<endl;
                        cout<<"THANK YOU FOR PLAYING"<<endl;
                        break;
                    }
                }
                else{
                    cout<<"BETTER LUCK NEXT TIME"<<endl;
                    cout<<"THANK YOU FOR PLAYING"<<endl;
                    break;  
                }   
            }
        }    
        string kbcchance;
        cin>>kbcchance;
        cout<<endl;
    return 0;
}