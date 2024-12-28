#include<iostream>
#include<set>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the NameList: ";
    cin>>size;

    string name;
    set<string> nameList;
    for(int i=0;i<size;i++){
        cin>>name;
        nameList.insert(name);
    }

    cout<<endl<<"Name present in the list is "<<endl;
    for(auto listname:nameList) cout<<listname<<endl;

    return 0;
}