//
//  queue.c
//  Data structure
//
//  Created by 홍재영 on 2021/03/23.
//

#include "queue.h"
#include <stdio.h>
#include <stdbool.h>
#define MAX 10
int QUEUE[MAX] = {0};
int front = 1, rear=-1;

int ADD(int value){
    if(rear >= MAX-1){
        printf("QUEUE OVERFLOW!!\n");
        return false;
    }
    rear++;
    QUEUE[rear]=value;
    return true;
}

int DELETE(){
    if(front>=rear){
        printf("QUEUE UNDETFLOW!!\n");
        return false;
    }
    front++;
    printf("DELETE: %d\n", QUEUE[front]);
    return true;
}

void PRINT(){
    int i;
    for(i=front+1; i<=rear; i++){
        printf("QUEUE[%d]= %d\n", i, QUEUE[i]);
    }
}

int main(){
    ADD(10);
    ADD(20);
    ADD(30);
    PRINT();
    DELETE();
    ADD(40);
    PRINT();
}
