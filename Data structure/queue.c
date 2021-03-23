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
