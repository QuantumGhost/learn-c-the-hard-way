#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


struct Node {
    struct Node *next;
    int value;
};

struct Stack {
    struct Node *head;
    unsigned int depth;
};


struct Node *Node_new(int x) {
    struct Node *node = malloc(sizeof(struct Node));
    node->value = x; node->next = NULL;

    return node;
}

void Node_del(struct Node *node) {
    assert(node != NULL);

    free(node);
}

struct Stack *Stack_new() {
    struct Stack *stack = malloc(sizeof(struct Stack));
    stack->head = NULL;
    stack->depth = 0;

    return stack;
}

void Stack_push(struct Stack *stack, int x) {
    struct Node *node = malloc(sizeof(struct Node));
    node->value = x; node->next = stack->head;
    
    stack->head = node;
    stack->depth += 1;
}

int Stack_pop(struct Stack *stack) {
    int x = stack->head->value;

    struct Node *node = stack->head;
    stack->head = stack->head->next;
    stack->depth -= 1;
    free(node);
    return x;
}

void Stack_del(struct Stack *stack) {
    while (stack->head != NULL) {
        Stack_pop(stack);
    };

    free(stack);
}


int main(int argc, char *argv[]) {
    struct Stack *stack = Stack_new();

    assert(stack->depth == 0);

    Stack_push(stack, 1);
    assert(stack->depth == 1);
    Stack_push(stack, 2);
    assert(stack->depth == 2);

    assert(Stack_pop(stack) == 2);
    assert(Stack_pop(stack) == 1);
    assert(stack->depth == 0);

    Stack_del(stack);
    return 0;
}

