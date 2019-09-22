////
//// Created by 罗申申 on 2019/9/16.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////struct Info{
////
////    char name[30];
////    int age;
////};
////
////int main020001(){
////
////    struct Info *p = (struct Info*)(malloc(sizeof(struct Info)*10));
////
////    for (int i = 0; i < 10; ++i) {
////
////        char name[30] = "罗申申";
////        int age = 22;
////        sprintf(p[i].name,name);
////        p[i].age = i+1;
////    }
////
////    for (int j = 0; j < 10; ++j) {
////
////        //printf("%s\n",*(p[j].name));
////    }
////    return 1;
////}
////
/////**
//// * 链式存储
//// */
////
////struct Node{
////    int data;
////    struct Node *next;
////};
////
////struct Node * initNode(struct Node *N){
////
////    N = (struct Node *)malloc(sizeof(struct Node));
////    N->next = NULL;
////    struct Node *node;
////    int data;
////    int scanV;
////    scanf("%d",&scanV);
////    while (scanV!=9999){
////        node = (struct Node*)malloc(sizeof(struct Node));
////        node->data = scanV;
////        //N->next = node;
////        node->next = N->next;
////        N->next = node;
////        scanf("%d",&scanV);
////    }
////
////    return N;
////}
////
////int main020002(){
////
////    struct Node *s;
////
////    s = initNode(s);
////
////    for (int i = 0; i < 10; ++i) {
////
////        printf("%d\n",s->data);
////        s = s->next;
////
////    }
////}
////
////struct Person{
////
////    char *name;
////    int age;
////    char address[100];
////    struct Person *next;
////};
////
////
////struct Person* initPerson(struct Person *person){
////
////    struct Person *p;
////    int flag = 0;
////    person = (struct Person*)malloc(sizeof(struct Person));
////    person->next = NULL;
////    scanf("%d",&flag);
////    while(flag!=0){
////        p = (struct Person*)malloc(sizeof(struct Person));
////        p->age = flag;
////        p->next = person->next;
////        person->next = p;
////        scanf("%d",&flag);
////    }
////
////    return person;
////
////}
////
////int main020003(){
////
////    struct Person *person;
////
////    person = initPerson(person);
////
////    for (int i = 0; i < 10; ++i) {
////
////
////
////        printf("%d",person->age);
////        person = person->next;
////    }
////}
//
//struct Node{
//
//    int data;
//    struct Node *next;
//
//};
//
//struct Node* initNode(struct Node *node){
//
//    struct Node *newNode;
//    int data;
//    node = (struct Node *)malloc(sizeof(struct Node)*1);
//    node->next=NULL;
//    scanf("%d",&data);
//    while (data!=0){
//        newNode = (struct Node *)malloc(sizeof(struct Node)*1);
//        newNode->data = data;
//        newNode->next = node->next;
//        node->next = newNode;
//        scanf("%d",&data);
//    }
//
//    return node;
//}
//
//int main020004(){
//
//    struct Node *node;
//    node = initNode(node);
//
//    for (int i = 0; i < 100; ++i) {
//        printf("%d\n",node->data);
//        node = node->next;
//    }
//    return 1;
//}
//
//void main02005(){
//    char ch1 = 121;
//    char ch2 = 101;
//    printf("%x",ch1&ch2);
//
//}
//
//struct Chain {
//
//    int data;
//    struct Chain *chain;
//};
//
//#include <unistd.h>
//struct Chain* initChain(struct Chain *chain){
//
//    struct Chain *newChain;
//    int status = 0;
//
//    chain = (struct Chain*)malloc(sizeof(struct Chain));
//    chain->chain = NULL;
//    printf("输入0停止\n");
//    scanf("%d",&status);
//    int num;
//    srandom((unsigned)time(NULL));
//    while (status!=0){
//
//        newChain = (struct Chain*)malloc(sizeof(struct Chain));
//        num = rand()%1000;
//        //sprintf(newChain->data,copy);
//        newChain->data = num;
//        newChain->chain = chain->chain;
//        chain->chain = newChain;
//        //printf("%d",chain->data);
//        printf("输入0停止\n");
//        scanf("%d",&status);
//    }
//
//    return chain;
//
//}
//int main020(){
//
//    //printf("%d",10.3);
//    struct Chain *chain;
//
//    //chain = (struct Chain *) initNode(chain);
//    //printf("%d",chain->data);
//    initChain(chain);
//    while ((chain->data)!='\0'){
//
//        printf("%d",chain->data);
//        chain = chain->chain;
//    }
//}