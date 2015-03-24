#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
class Number{
public:
Number();
Number(int);
~Number();
int get_number();
int capacity=4;
int change_capacity(int &);
int* pointer=new int [capacity];
//push ();
//pop ();
void print ()const;
bool emptiness()const;
int* get_top();
private:
int number_in_decimal;
};


#endif // STACK_H_INCLUDED
