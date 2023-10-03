#include<iostream>
using namespace std;

class Enemy{
public:
virtual void print();

};
class BossEnemy: public Enemy{
    public:
    void print(){
        cout<<"Boss is Attacking";

    }
};

int main()
{
    Enemy *p;
    BossEnemy b;
    p=&b;
    p->print();
    return 0;
}
