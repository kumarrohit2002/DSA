#include<iostream>
using namespace std;

int CountVowel(string s,int i){
    if(i>s.size()) return 0;
    int ans=CountVowel(s,i+1);
    if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='O' || s[i]=='o' || s[i]=='u' || s[i]=='U'){
        ans+=1;
    }
    return ans;
}

int main(){
    string s;
    getline(cin,s);
    int i=0;
    cout<<CountVowel(s,i);
    return 0;
}