#include "calculator.h"

main()
{
    assert(calculate('+',2,3)==5);
    assert(calculate('-',5,3)==2);
    assert(calculate('*',2,3)==6);
    assert(calculate('/',5,2)==2.5);
    printf("Calculator works fine");
}
