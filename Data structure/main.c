//
//  main.c
//  Data structure
//
//  Created by 홍재영 on 2021/03/19.
//

/*
#include <stdio.h>
#define STACK_SIZE 5
#include <stdbool.h>

int stack[STACK_SIZE] = {0,};
int top = -1;

void PUSH(int value){
    if (top>=STACK_SIZE){
        printf("stack overflow\n");
    }
    else stack[++top] = value;
}

int POP(){
    if (top==-1){
        printf("stack underflow\n");
        return false;
    }
    else{
        printf("POP=>%d\n", stack[top]);
        return stack[top--];
    }
}

void _print(){
    for (int i=top; i>=0; i--){
        printf("stack[%d]=%d\n", i, stack[i]);
    }
}



int main(int argc, const char * argv[]) {
    PUSH(1);
    PUSH(2);
    PUSH(3);
    POP();
    PUSH(4);
    _print();
    return 0;
}

*/
