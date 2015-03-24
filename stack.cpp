using namespace std;
#include <iostream>
#include "stack.h"
stacks::stacks(){
pointer_to_top=0;
arr[0]=0;
}



void stacks::push(int x){
if (full()){cout<<"stack is full!"<<endl; return;}
pointer_to_top++;
arr[pointer_to_top]=x;
}

void stacks::pop(){
if (!emptiness()) pointer_to_top--;
else cout<<"empty stack!"<<endl;
}

int stacks::top()const{
return arr[pointer_to_top];
}

bool stacks::emptiness()const{
return pointer_to_top==0;
}

bool stacks::full()const{
return pointer_to_top==99;
}

void stacks::print(){
    while(!emptiness()){
        cout<<top();
        pop();
    }
cout<<endl;
}

stacks num_stacks(int x)
{
stacks st;
    while (x){
        st.push(x%2);
        x/=2;
    }
return st;}
