#include<iostream>
using namespace std;

class Gun{
public:
    int ammo;
    int damage;
    int scope;
};

class player{
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;

    // Helmet class (corrected)
    class Helmet{
        int hp;
        int level;
    public:
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };

    Helmet helmet; // Corrected Helmet member

public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool isAlive(){
        return alive;
    }
    Gun getGun(){
        return gun;
    }
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setIsAlive(bool alive){
        this->alive = alive;
    }
    void setGun(Gun gun){
        this->gun = gun;
    }

    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);

        int hp = 0;
        if(level == 1)
            hp = 25;
        else if(level == 2)
            hp = 50;
        else if (level == 3)
            hp = 100;
        else {
            cout << "Error, invalid level !!!" << endl;
            return;
        }

        helmet->setHp(hp);
        this->helmet = *helmet; // Assigning to player's helmet
        // delete helmet; // Clean up dynamically allocated memory
    }

    int getHelmetHp(){
        return helmet.getHp();
    }
    int getHelmetLevel(){
        return helmet.getLevel();
    }
};

int addScore(player a, player b){
    return a.getScore() + b.getScore();
}

player getMaxScorePlayer(player a, player b){
    if(a.getScore() > b.getScore())
        return a;
    else 
        return b;
}

int main(){
    player nikhil; // Static allocation
    player raghav; // Static allocation

    player *urvi = new player; // Dynamic allocation

    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;

    nikhil.setAge(21);
    nikhil.setScore(100);
    nikhil.setIsAlive(true);
    nikhil.setHealth(70);
    nikhil.setGun(akm); // Pass Gun object
    nikhil.setHelmet(2);

    // Set helmet for Nikhil
    nikhil.setHelmet(2); // Set level 2 helmet
    // cout << "Nikhil's helmet HP: " << nikhil.getHelmetHp() << endl;

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;

    raghav.setAge(24);
    raghav.setScore(20);
    raghav.setIsAlive(true);
    raghav.setHealth(100);
    raghav.setGun(awm); // Pass Gun object
    raghav.setHelmet(3);

    Gun gun123 = raghav.getGun();
    cout<<gun123.damage<<endl;
    cout<<gun123.ammo<<endl;
    cout<<gun123.scope<<endl;

    Player players[3] = {harsh, raghav, *urvi};
    cout<<players[0].getAge();

    urvi->setHealth(20);
    urvi->setScore(40);
    urvi->setAge(90);

    // cout << "Urvi's score: " << urvi->getScore() << endl; // Dereference urvi

    // cout << "Total score (Nikhil + Raghav): " << addScore(nikhil, raghav) << endl;

    // player sanket = getMaxScorePlayer(nikhil, raghav);
    // cout << "Sanket's score: " << sanket.getScore() << endl;
    // cout << "Sanket's health: " << sanket.getHealth() << endl;

    // delete urvi; // Clean up dynamically allocated memory
    return 0;
}
