#include<bits/stdc++.h>
using namespace std;
//00ps
class Hero{
     int health;
     public:
     char level;
     char *name;
    static int timeToComplete;

    Hero( ){
        cout<<"Constructor called "<<endl; 
        name = new char[100];
    }

    //Parameterized constructor
    Hero(int health){
        // cout<<"this-> address: "<<this<<endl;
        this->health=health; 
    }
    Hero(int health, char level){
        this->level=level;
        this->health=health; 
    }
//copy construtor
    Hero(Hero& temp){
        char *ch= new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch; 

        cout<<"copy constructor called"<<endl;
        this->health = temp.health;
        this->level= temp.level;
    }


    void print(){
        cout<<endl;
        cout<<"[ Name: "<<this->name<<" , ";
        cout<<"level: "<< this->level<<" , ";
        cout<<"health: "<< this->health<<" ]" <<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health= h;
    }
    void setLevel(int l){
        level= l;
    }
    void setName(char name[]){
        strcpy(this->name, name);
    }

    static int random(){
        return timeToComplete;
    }




    //Destuctor
    ~Hero(){
        cout<<"Desturctor called "<<endl;
    }

};


//static keyword initalize
int Hero::timeToComplete = 5;




int main(){
    //static function
    // cout<<Hero::timeToComplete<<endl;
     cout<<Hero::random()<<endl;

    









// //Destructor
//     Hero s;

//     //dynamic destructor
//     Hero *b=new Hero();
//     delete b;


    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7]="Babbar";
    // hero1.setName(name);
    // // hero1.print();
    // cout<<endl;

    // //use default copy constructor
    // Hero hero2(hero1);
    // // hero2.print();
    // cout<<endl;

    // hero1.name[0]='G';
    // hero1.print();

    // hero2.print();
//copy assignment
    // hero1=hero2;
    // hero1.print();
    // hero2.print();
    






    //copy constructor
//    Hero suresh(70, 'c');
//     suresh.print();
   
//    Hero r(suresh);
//    r.print(); 
   
   
   
//    //object created statically
//    Hero suresh(10);
// //    cout<<"Addres of suresh: "<<&suresh<<endl;

//         Hero temp(22,'A');
   
    // //static allocation
    // Hero a;
    // a.setHealth(100);
    // a.setLevel('C');
    // cout<<"level is " <<a.level<<endl;
    // cout<<"health: "<<a.getHealth()<<endl;

    // //dynamic allocation
    // Hero *b = new Hero;
    // b->setHealth(50);
    // b->setLevel('A'); 
    // cout<<"level is " <<(*b).level<<endl;
    // cout<<"health: "<<(*b).getHealth()<<endl;
    // //this keyword
    // cout<<"level is " <<b->level<<endl;
    // cout<<"health: "<<b->getHealth()<<endl;
    
    
    
    // Hero ramesh;
    // cout<<"ramesh health "<<ramesh.getHealth()<<endl;
    // ramesh.health= 70;
    // ramesh.level= 'A';
    // ramesh.print(); 

     
    // Hero h1;
    // cout<<"size: "<<sizeof(h1)<<endl;
}