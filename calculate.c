#include "calculator.h"

float calculate(char mode, float a, float b)
{
        switch(mode)
        {
            case '+': return(a+b);
                      break;

            case '-': return(a-b);
                      break;

            case '*': return(a*b);
                      break;

            case '/': return(a/b);
                      break;

            case 'p': power(a,b);
            default : return (0);
                      break;
        }
}
void power()




