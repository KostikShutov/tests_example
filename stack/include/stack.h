#pragma once

#include <ostream>

struct Node
{
    Node *next = nullptr;
    int value;
};

struct Stack
{
    Node *head = nullptr;
    Node *last = nullptr;
    int size = 0;
};

Stack* stack_create();

void stack_push(Stack *stack, int value);

int stack_top(Stack *stack);

void stack_pop(Stack *stack);

void stack_print(Stack *stack, std::ostream &os);

int stack_size(Stack *stack);
