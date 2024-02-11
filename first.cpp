
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
srand(time(NULL));
int user=0;
int computer=0;

cout<<"Welcome to Stone Paper Scissor Game"<<endl;
cout<<"1) Rock"<<endl;
cout<<"2) Paper"<<endl;
cout<<"3) Scissor"<<endl;

cin>>user;
if(user==1){
cout<<"you choose Rock"<<endl;
}

else if(user==2){
cout<<"you choose Paper"<<endl;
}

else{
cout<<"You choose Scissor"<<endl;
}

computer=rand()%3+1;

if(computer==1){
cout<<"computer choose Rock"<<endl;
}

else if(computer==2){
cout<<"computer choose Paper"<<endl;
}

else{
cout<<"computer choose Scissor"<<endl;
}

if(user== computer){
cout<<"Game is Draw"<<endl;
}

else if(user==1){
if(computer==2){
cout<<"you loose!"<<endl;}
if(computer==3){
cout<<"you win"<<endl;
}
}

else if(user==2){
if(computer==1){
cout<<"you win!"<<endl;}
if(computer==3){
cout<<"you loose"<<endl;
}
}

else if(user==3){
if(computer==1){
cout<<"you loose!"<<endl;}
if(computer==2){
cout<<"you win"<<endl;
}
}
return 0;


}

