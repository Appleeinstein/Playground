#include <iostream>
using namespace std;
#define n 100
class Stack{
    int* arr;
    int top;

    public:
    Stack(){
        arr=new int[n];
        top=-1;
    }

    void Push(int x){
        if(x==n-1){
            cout << "Stack Overflow (Gandhi + Nukes)";
            return ;
        }
        else{
            top++;
            arr[top]=x;
        }
    }

    void Pop(){
        if(top==-1){
            cout << "Stack Underflow";
            return ;
        }
        else{
            top--;
        }
    }

    int Top(){
        if(top==-1){
            cout << "Stack is null";
            return -1;
        }
        else{
            return arr[top];
        }
    }

};

int main(){
    Stack steck;
    steck.Push(2);
    steck.Push(0);
    steck.Push(0);
    steck.Push(5);
    cout << steck.Top()<<endl;
    steck.Pop();
    steck.Top();
    cout << steck.Top()<<endl;

    
}