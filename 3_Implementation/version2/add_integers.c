#include "add_integer.h"

funtion_status_t add_integers(int param1, int param2, int* result)
{
    long int sum = param1 + param2;

    if(sum > INT_MAX)
        return OVERFLOW;

    if(sum < INT_MIN)
        return UNDERFLOW;
    
    *result = sum;
    return SUCCESS;
}