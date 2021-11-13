#include <iostream>

#include "stack.h"

int main()
{
    Stack *stack = stack_create();

    for (int i = 1; i <= 10; i++) {
        stack_push(stack, i);
    }

    std::cout << stack_top(stack) << std::endl;

    stack_print(stack, std::cout);
}
