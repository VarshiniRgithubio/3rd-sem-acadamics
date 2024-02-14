#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100


typedef struct {
    char items[MAX_SIZE];
    int top;
} Stack;


void initializeStack(Stack *s);
void push(Stack *s, char c);
char pop(Stack *s);
bool isPalindrome(char *str);

int main() {
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    str[strcspn(str, "\n")] = '\0'; 

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


void initializeStack(Stack *s) {
    s->top = -1;
}


void push(Stack *s, char c) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    s->items[++(s->top)] = c;
}


char pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return s->items[(s->top)--];
}


bool isPalindrome(char *str) {
    Stack stack;
    initializeStack(&stack);

    int len = strlen(str);
    int i;

    
    for (i = 0; i < len; i++) {
        push(&stack, str[i]);
    }

    
    for (i = 0; i < len; i++) {
        if (pop(&stack) != str[i]) {
            return false; 
        }
    }

    return true;
}