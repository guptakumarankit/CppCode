#include<iostream>
#include<string.h>
using namespace std;

class Hero
{
    // properties
    // public
    private:
    int health;
    public:
    char *name;
    char level;
   

    // default constructor 
    Hero(){
        cout<<"constructor called"<<endl;
        name = new char[100];
    }
/*

   // paramerterised constructor
   Hero(int health){
    cout<<"this  ->"<<this<<endl;
    this->health = health;
   }

   Hero(int health , char level){
    this->health = health;
    this->level = level;
   }

  // copy constructor 
    Hero(Hero& temp){
    char *ch = new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name= ch;
    cout<<"copy constructor called"<<endl;
    this->health = temp.health ;
    this->level = temp.level;
   } 
*/

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
   
    void print(){
        cout<<endl;
        cout<<" [ Name:"<<this->name<<",";
        cout<<"level is: "<<this->level <<",";
        cout<<"health is:"<< this->health << " ] " << endl;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

};



int main()
{
    // shallow & deep copy

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('J');
    char name[7] ="Babber";
    hero1.setName(name);
    hero1.print();

    // use default copy constructor
    Hero hero2(hero1);
   // hero2.print();     // hero2=hero1

    hero1.name[0]='G';
   // hero1.print();

    // after change first index

    //hero2.print();   // hero same value print due to shallow copy constructor

    hero2=hero1;
    hero2.print();
    hero1.print();
}


/* 
int main()
{
    Hero ramesh(10);
    cout<<"address of ramesh : "<<&ramesh<<endl;

    Hero temp(22,'G');
    temp.print();

    Hero R(temp);
    R.print();
}

 */


/* 
int main()
{
    // statically
    Hero ramesh;

    // dynamically
    Hero *h = new Hero();


}
 */



/* 
int main()
{
    // static 
    // object creation
    Hero ramesh;
    cout<<"size of ramesh is : "<<sizeof(ramesh) <<endl;

   // ramesh.health=10;   // this statement gives error beacause health is private modifier..
    ramesh.level='f';
   // cout<<"health is:"<<ramesh.health<<endl;   // not print 
    cout<<"ramesh health is:"<<ramesh.getHealth()<<endl;

    // use setter 
    ramesh.setHealth(5);
    ramesh.level='k';

    cout<<"ramesh health is:"<<ramesh.getHealth()<<endl;

    cout<<"level is:"<<ramesh.level<<endl;

    // dyanamically

    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<<"level is: "<<(*b).level <<endl;
    cout<<"health is :"<<(*b).getHealth()<<endl;

    return 0;
} */