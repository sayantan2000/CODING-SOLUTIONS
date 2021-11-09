#include<bits/stdc++.h>
#include<iostream>
#include<array>
#include<string.h>
#include<algorithm>
#include<malloc.h>
#include<math.h>
using namespace std;

class school{
    private:
      string  studentname;
      int roll_no;
       char classs;
      char sec;

      public:
       //value assign using constructors
       school(string name,int roll,char clas,char sec){
           this->studentname=name;
           this->roll_no=roll;
           this->classs=clas;
           this->sec=sec;
       }

       void sho_data(){
           cout<<"Name =  "<<studentname<<endl;
           cout<<"Roll No= "<<roll_no<<endl;
           cout<<"Class =  "<<classs<<endl;
           cout<<"Section =  "<<sec<<endl;
       }
};

int main(void){
    /*school sch("arvind",14,'v','a');
    sch.sho_data();*/
    school *sch=new school("arvind",14,'v','a');
    sch->sho_data();

    return 0;
}