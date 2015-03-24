#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
class stacks{
public:
    stacks();
    void push(int);
    void pop();
    int top()const;
    bool emptiness()const;
    void print();
    bool full()const;
private:
    int pointer_to_top;
    int capacity;
    int arr[100];
};
stacks num_stacks(int );

#endif // STACK_H_INCLUDED
