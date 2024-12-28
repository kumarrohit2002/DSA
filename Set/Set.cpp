#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    //insertion
    s.insert(0);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout<<s.size()<<endl;
    s.insert(3);
    cout<<s.size()<<endl;  //because duplicate value are not inserted

    //trivarsal
    set<int>::iterator itr;
    for(auto itr=s.begin();itr!=s.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    for(auto value:s){
        cout<<value<<" ";
    }
    cout<<endl;

    itr=s.begin();

    //deletetion
    s.erase(2);
    for(auto value:s) cout<<value<<" ";
    cout<<endl;
    s.erase(++itr); //position 2
    for(auto value:s) cout<<value<<" ";
    cout<<endl;

    s.insert(10);
    s.insert(11);
    s.insert(12);
    s.insert(13);

    for(auto value:s) cout<<value<<" ";
    cout<<endl;

    auto it=s.begin();
    advance(it,3); //3 step move
    s.erase(it);
    cout<<"delete position 4"<<endl;

    for(auto value:s) cout<<value<<" ";
    cout<<endl;

    it=s.begin();
    it++;
    auto end=s.begin();
    advance(end,3);

    s.erase(it,end);
    for(auto value:s) cout<<value<<" ";
    cout<<endl;


    return 0;

}