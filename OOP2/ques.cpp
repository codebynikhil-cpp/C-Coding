#include<iostream>
using namespace std;

class Book{
public:
    char name;
    int price;
    int noofPages;

    int countBooks(int p){
        if(price<p) return 1;
        else return 0;
    }
    bool isbookpresent(char book){
        if(name==book) return true;
        else return false;
    }
};
int main(){
    Book harrypotter;
    harrypotter.name = 'H';
    harrypotter.price = 1000;
    harrypotter.noofPages = 500;

    cout<<harrypotter.countBooks(2000);
    cout<<harrypotter.isbookpresent('B');
}