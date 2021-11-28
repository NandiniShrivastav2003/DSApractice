#include<iostream>
using namespace std;
void subset(string s,string user,int index){
    if(index == s.length()){
        cout<<user<<endl;
        return ;
    }
    subset(s,user,index+1);
    subset(s,user+s[index],index+1);
}
int main(){
    string s="abc";
    string user="";
    int index=0;
    subset(s,user,index);
    return 0;
}

