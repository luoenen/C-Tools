//
//  main.c
//  数据结构
//
//  Created by 罗申申 on 2019/2/27.
//  Copyright © 2019 罗申申. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* node;
};

struct Node* MyCreate(int data){
    struct Node *head;
    head = malloc(sizeof(struct Node));
    head->data = data;
    head->node = NULL;
    while (1) {
        printf("%s","请输入：");
        scanf("%d",&data);
        if(data == 0){
            break;
        }
        struct Node* p;
        p = malloc(sizeof(struct Node));
        p->data = data;
        p->node = head->node;
        head->node = p;
    };
    struct Node *p = malloc(sizeof(struct Node));
    p = head;
    while (p->node!=NULL) {
        if (100 == p->data){
            struct Node *e = malloc(sizeof(struct Node));
            e->data = 10000;
            e->node = p->node;
            p->node = e;
            
        }
        p = p->node;
    }
    
    
    while (head->node!=NULL) {
        head = head->node;
        printf("%d\n",head->data);
    }
    return head;
}

int main03(){
    
    MyCreate(1);
    return 0;
}
