#include<iostream>
using namespace std;
int lenStr(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}
void revStr(char *str,int size){
    int l=0,h=size-1;
    while(l<=h){
        swap(str[l++],str[h--]);
    }

}
int main(void){
    cout<<"enter name :-"<<endl;
    char s[19];
    cin>>s;
    int size=lenStr(&s);
    cout<<"size of string is "<<size<<endl;
    revStr(s,size);
    cout<<s;
}
