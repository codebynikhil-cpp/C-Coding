#include<iostream>
using namespace std;

class Cricketer{
    public:
    char name;
    int age;
    int noOfTestMatches;
    int avgscore;
};
int main(){
    Cricketer virat;
    virat.name='V';
    virat.age=30;
    virat.noOfTestMatches=100;
    virat.avgscore=80;

    Cricketer Dhoni;
    Dhoni.name='D';
    Dhoni.age=40;
    Dhoni.noOfTestMatches=200;
    Dhoni.avgscore=100;

    // for(int i=0;i<2;i++){
    //     Cricketer *cricketer = new Cricketer;
    //     cricketer->naem = ;
    //     cricketer.add(*cricketer);
    // }
    Cricketer cricketer[2] = {virat,Dhoni};

    for(int i=0;i<2;i++){
        cout<<cricketer[i].name<<endl;
        cout<<cricketer[i].age<<endl;
        cout<<cricketer[i].noOfTestMatches<<endl;
        cout<<cricketer[i].avgscore<<endl;
    }
}