/**
 * @file add_integer.h
 * @author Bharath G 
 * @brief Interface for Adding two integer numbers with underflow and overflow checks
 * @version 0.1
 * @date 2022-03-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _ADD_INTEGER_H_
#define _ADD_INTEGER_H_

#include <stdio.h>
#include <limits.h>

typedef enum funtion_status_t
{
    SUCCESS,
    OVERFLOW,
    UNDERFLOW
}funtion_status_t;

/**
 * @brief Function to add 2 integer numbers
 * 
 * @param param1[in] Operand 1 to be added
 * @param param2[in] Operand 2 to be added
 * @param result[out] Result of add operation if success
 * @return funtion_status_t Result of the function execution
 */
funtion_status_t add_integers(int param1, int param2, int* result);

#endif  /* _ADD_INTEGER_H_ */