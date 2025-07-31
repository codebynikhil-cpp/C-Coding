#include<iostream>

using namespace std;
class player {
    private:
    int score; //data members
    int health;
public:
    //setter
    void setscore(int s){
        cout<<"score set kiya ja rha hai";
        score = s;
    }
    void sethealth(int h){
        cout<<"health change kiya ja rha hai";
        health = h;
    }
    // void showhealth(){ //members funtion
    //     cout<<"Health is :"<<health;
    // }
    // void showscore(){
    //     cout<<"Score :"<<score;
    // }

    //getter
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
};

// class calculator{
// private:
//     int a ;
//     int b;
// public:
//     void add(){
//         cout<<a+b;
//     }
//     void subtract(){
//         cout<<a-b;
//     }
// };

int main() {
    // int score[100] = {};
    // int health[100] = {};

    // // player player[10];
    // player amit; // variable
    // amit.score = 90;
    // amit.health = 100;
    // amit.showhealth();
    // amit.showscore();

    // calculator calci;
    // calci.a = 10;
    // calci.b = 7;
    // calci.add();
    // calci.subtract();

    player harsh;
    harsh.setscore(10);
    harsh.sethealth(50);
    cout<<harsh.getscore()<<endl;
    cout<<harsh.gethealth()<<endl;
}
