#include<iostream>
using namespace std;

class Queue{
    int val;
    int* arr;
    int front;
    int back;
    int capacity;

    public:
        Queue(int capacity){
            this->arr = new int[capacity];
            this->capacity=capacity;
            int front=-1;
            int back=-1;
        }
};



int main(){
    
    return 0;
}