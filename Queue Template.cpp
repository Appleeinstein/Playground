#include <iostream>
#include <stack>
using namespace std;
#define elif else if

class queue{
    stack<int> s1;
    stack<int> s2;

    public:
    void push(int x){
        s1.push(x);
    }

    int  pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Queue is Empty\n";
            return ;
        }
        elif(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            
            }
        }
        int topval = s2.top();
        s2.pop();
        return topval;
        }
    }
     
    void dequeue(){
        if()
    }

    
}