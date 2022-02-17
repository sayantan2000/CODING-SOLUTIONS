// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
bool palinDrome(string str,int s,int e){

        while(s<=e){
            if(str[s++]!=str[e--])
                return false;

        }
        return true;

}
int main(void) {
    using namespace std;
    // Write C++ code here
    //std::cout << "Hello world!"
    string str="sayantan";
    bool p=palinDrome(str,0,str.length()-1);
    if(p)
       cout<<"yes"<<endl;
    else
       cout<<"No";

    return 0;
}