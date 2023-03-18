#include<iostream>
using namespace std;
/*
super class           sub class
access modifier    mode of inheritance
public                  public           ----- public
public                  private          ----- private
public                  protected        ----- protected

protected               public           ----- protected
protected               protected        ----- protected
protected               private          ----- private

private                 public           ----- Not ACCessble
private                 protected        ----- Not ACCessble
private                 private          ----- Not ACCessble


*/

/*
class Human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight= w;
    }
};

// class Male: public Human{
// class Male: protected Human{
class Male: private Human{
    public:
    string color;
    void sleep(){
        cout<<"Male sleeping "<<endl;
    }
    int getHeight(){
        return this->height;
    }
};


*/

/********************************************************************************************************/

  //  *****************TYPE OF INHERITANCE ***************//
//1. single 2.Multilevel 3. Multiple 4. Hybrid 5. Hierachical
/*
class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Barking "<<endl;
    }
};
class Dog: public Animal{

};

class GernamShepherd: public Dog{

};

//multiple inheritance
class Human{
    public:
    string color;
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class Hybrid: public Animal, public Human{

};


//hierachical inheritance
class A{
    public:
    void func1(){
        cout<<"Inside fuction 1"<<endl;
    }
};
class B: public A{
    public:
    void func2(){
        cout<<"Inside fuction 2"<<endl;
    }
};
class C: public A{
    public:
    void func3(){
        cout<<"Inside fuction 3"<<endl;
    }
};

//hybrid inheritance
class f{
     public:
    void func1(){
        cout<<"Inside fuction 1"<<endl;
    }
};
class d{
     public:
    void func4(){
        cout<<"Inside fuction 4"<<endl;
    }
};
class g: public f{
     public:
    void func2(){
        cout<<"Inside fuction 2"<<endl;
    }
};
class s: public f, public d{
     
};






/*******************************************************************************/
//   ***** Inheritance Ambiguity ***************//
/*
class q{
    public:
    void func(){
        cout<<"Inside q func"<<endl;
    }
};
class y{
    public:
    void func(){
        cout<<"Inside y func"<<endl;
    }
};
class t: public q, public y{

};

*/
//*******************Polymorphism**************************//
//fucntion overloading
class A{
    public:
    void sayHello(){
        cout<<"HEllo User "<<endl;
    }

    int sayHello(string name, int n){
        cout<<"hello user "<<endl;
        return n;
    }
    void sayHello(string name){
        cout<<"hello "<<name<<endl;
    }
};
//operator overlaping
class B{
    public:
    int a,b;
    int add(){
        return a+b;
    }
    void operator+ (B &obj){
        int value1=this->a;
        int value2= obj.a;
        cout<<"Output: "<<value2-value1<<endl;
    }
    void operator() (){
        cout<<"this is bracket operator "<<this->a<<endl;
    }
};


//***********Run time polymorphism***********

class Animal{
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"Barking "<<endl;
    }
};


int main(){
    //polymorphism
    A obj;
   // obj.sayHello();

    //operator overlaping
    // B obj1, obj2;
    // obj1.a= 4;
    // obj2.a= 7;
    // obj1+obj2;
    // obj1();

    //Rum time polymorphism
    Dog oj;
    oj.speak();
    Animal ojj;
    ojj.speak();







// inheritance ambiguity
    // t mp;
    // //mp.func(); //----->inheritace ambigutiy
    // mp.q::func();











    //hybrid
    // s objj1;
    // objj1.func4();










    //hierachial  
    // A object1;
    // object1.func1();

    // B object2;
    // object2.func2();

    // C object3;
    // object3.func1();














    // Dog d;
    // d.speak();
    // cout<<d.age<<endl;
    // GernamShepherd g;
    // g.speak();

    // Hybrid obj1;
    // obj1.bark();
    // obj1.speak();





















    // Male object;
    // cout<<object.age<<endl;
    // cout<<object.weight<<endl;
    // cout<<object.height<<endl;

    // cout<<object.color<<endl;
    // Male m1;
    // cout<<m1.getHeight()<<endl;
}