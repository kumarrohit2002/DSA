#include<iostream>
using namespace std;

class Stack{
    int* array;
    int Size;
    int top;
    public:
    Stack(int size){
        array = new int[size];
        Size=size;
        cout<<"Size of Stack: "<<Size<<endl;
        top=-1;
    }
    
    int getTop(){
        if(Size<0) return -1;
        else return array[top];
    }

    void push(int data){
        if(top>=Size-1){ 
            cout<<"Stack OverFlow element "<<data<<" not inserted !!"<<endl;
            return;
        }
        top++;
        array[top]=data;
    }

    void pop(){
        if(top<0) cout<<"Stack Underflow"<<endl;
        top--;
    }

    int size(){
        return Size;
    }

};



int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    cout<<st.getTop();
    return 0;
}