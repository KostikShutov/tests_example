#include "gtest/gtest.h"

#include "stack.h"

TEST(StackTest, StackPush)
{
    Stack *stack = new Stack;

    stack_push(stack, 11);
    EXPECT_EQ(11, stack->head->value);
    EXPECT_EQ(1, stack->size);

    stack_push(stack, 12);
    EXPECT_EQ(12, stack->head->value);
    EXPECT_EQ(11, stack->head->next->value);
    EXPECT_EQ(2, stack->size);

    stack_push(stack, 13);
    EXPECT_EQ(13, stack->head->value);
    EXPECT_EQ(12, stack->head->next->value);
    EXPECT_EQ(11, stack->head->next->next->value);
    EXPECT_EQ(3, stack->size);
}
