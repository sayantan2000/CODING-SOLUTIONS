#include<iostream>
using namespace std;
void swaap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
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
        swaap(&str[l++],&str[h--]);
    }

}
int main(void){
    cout<<"enter name :-";
    char s[18];
    cin.getline(s,18);
    int size=lenStr(s);
    cout<<"size of string is "<<size<<endl;
    revStr(s,size);
    cout<<s;
}

