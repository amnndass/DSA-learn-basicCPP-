#include <iostream>
using namespace std;

class Hero{

    //properties
    private:
    int health;
    
    public:
    char level;

    Hero(){
        cout << "constructor called" << endl;
    }

    //parameterised constructor

    Hero(int health){
        cout << "this ->" << this << endl;
        this -> health = health;
    }

    void print(){
        cout << level << endl;
    }


    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){

    //creation of object
    // Hero ramesh;

    // cout << "ramesh heath is " << ramesh.getHealth() << endl;
    // // ramesh.health = 70;
    // ramesh.level = 'A';

    // //use setter
    // ramesh.setHealth(6);
  
    // cout << "health is: " << ramesh.getHealth() << endl;
    // cout << "level is: " << ramesh.level << endl;

    // cout << "size : " << sizeof(h1) << endl;


/*

    //static allocation
    Hero a;

    //setter
    a.setHealth(56);
    a.setLevel('C');
        
    //print level and health
    cout << "level is " << a.level << endl;
    cout << " health is " << a.getHealth() << endl;

    //dynamic allocation
    Hero *b = new Hero;

    //setter
    b->setHealth(100);
    b->setLevel('B');

    cout << "level is " << (*b).level << endl;
    cout << " health is " << (*b).getHealth() << endl;

    //alternative way
    cout << "level is " << b->level << endl;
    cout << " health is " << b->getHealth() << endl;

*/  

    //object created statically

    Hero ramesh(10);
    cout << " Addres of ramesh" << &ramesh << endl;

    //dynamically
    Hero *h = new Hero(11);

    
}