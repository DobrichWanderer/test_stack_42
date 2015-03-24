#include "stack.h"
Number::Number(){
number_in_decimal=0;
}
Number::Number(int d){
number_in_decimal=d;
}
Number::~Number(){
delete [] pointer;
}
int Number::get_number(){
return number_in_decimal;
}
