#include "stack.h"

Stack* stack_create()
{
    return new Stack;
}

void stack_push(Stack *stack, int value)
{
    Node *node = new Node;
    node->value = value;

    if (nullptr == stack->head) {
        stack->head = node;
    } else {
        node->next = stack->head;
        stack->head = node;
    }

    stack->size++;
}

int stack_top(Stack *stack)
{
    return stack->head->value;
}

void stack_pop(Stack *stack)
{
    if (nullptr == stack->head) {
        return;
    }

    Node *current = stack->head;
    stack->head = stack->head->next;
    delete current;
    stack->size--;
}

void stack_print(Stack *stack, std::ostream &os)
{
    Node *current = stack->head;

    while (nullptr != current) {
        os << current->value << " ";
        current = current->next;
    }

    if (nullptr == stack->head) {
        os << "Stack is empty";
    }

    os << std::endl;
}

int stack_size(Stack *stack)
{
    return stack->size;
}
