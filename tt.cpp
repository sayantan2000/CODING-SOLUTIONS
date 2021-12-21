#include<bits/stdc++.h>
#include<cmath>
#include<iostream>
using namespace std;

class bichi{
    public:
        bool status=false;
        bichi(bool status){
            this->status=status;
        }
            void setter(string name,string surname,int age,int id,long long int phone){
                if(status==true){
                    this->name=name;
                    this->surname=surname;
                    this->age=age;
                    this->id=id;
                    this->phone=phone;

                }
               
            }
            void show(){
                if(status==true){
                    cout<<"Name: "<<name+" "+surname<<endl;
                  //  cout<<"Surname: "<<surname<<endl;
                    cout<<"Age: "<<age<<endl;
                    cout<<"ID: "<<id<<endl;
                    cout<<"Phone: "<<phone<<endl;
                }
                else{
                    cout<<"No data"<<endl;
                }
            }
            
        
        private:
         string name;
         string surname;
         int age;
         int id;
         long long int phone;

};

int main(void){
    bichi *ss=new bichi(true);
    ss->setter("Sayantan","Sadhukhan",21,442254,7980692503);
    ss->show();
    cout<<"-------------"<<endl;
    bichi *ak=new bichi(true);
    ak->setter("Akash","kundu",19,14478,8890258654);
    ak->show();
    return 0;
}