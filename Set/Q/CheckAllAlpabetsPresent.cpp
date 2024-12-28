#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

bool checkAllAlphabets(string s){
    if(s.length()>26) return false;

    transform(s.begin(), s.end(), s.begin(),::tolower);

    set<char> alpha;

    for(auto ch:s){
        alpha.insert(ch);
    }

    return alpha.size()==26;
}

int main(){
    string str;
    cout<<"Enter your String: "<<endl;
    cin>>str;

    if(checkAllAlphabets(str)){
        cout<<"All Alphabets are present in string";
    }else{
        cout<<"All Alphabets are not present in string";
    }

    return 0;
}

//abcdefghiJKlmNopqRstuvWxyZ