#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class shop{
       protected:
            int product_id;

    public:
    void setId(int id){
       product_id = id;
    }
   virtual void getId(){
        cout<<"Product id is: "<<product_id<<endl;
    }
};
class fog:public shop{
    void getId(){
        cout<<"Fog id is: "<<product_id<<endl;
    }
};
int main(){
    shop *s,s1;
    fog f;
    s = &f;
    s->setId(10);
    s->getId();
    s1.setId(20);
    s1.getId();
    
    return 0;
}