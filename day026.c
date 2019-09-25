////
//// Created by 罗申申 on 2019/9/22.
////
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////typedef void (*)point;
//
//void main026001(int a,int b){
//
//    printf("a+b = %d\n",a+b);
//}
//
//
//int main026002(){
//
//    void (*p)(int a,int b) = main026001;
//    p(10,20);
//    //printf("Hello Point\n");
//}
//
//// 命令行几个字符串, 指针数组
//void main026003(int argc,char *argv[]){
//
//
//    for (int i = 1; i < argc; ++i) {
//        printf("%s\n",argv[i]);
//        system(argv[i]);
//    }
//
//}
//
//struct  Node {
//
//    int data;
//    struct  Node *next;
//};
//
//struct Node * initNode(struct Node * node){
//
//    node = (struct Node *)malloc(sizeof(struct Node));
//    node->next = NULL;
//    int sD;
//    struct Node *new, *head = node;
//    printf("输入-1停机建表\n");
//    scanf("%d",&sD);
//    while (sD!=-1){
//        new = (struct Node *)malloc(sizeof(struct Node));
//        new->data = sD;
//        new->next = NULL;
//        head->next = new;
//        head = new;
//        scanf("%d",&sD);
//    }
//    return node;
//}
//
//void insert(struct Node *node,int e,int index){
//
//    while (index--){
//        node = node->next;
//    }
//
//    struct Node *new = malloc(sizeof(struct Node));
//    new->data = e;
//
//    new->next =  node->next;
//    node->next = new;
//    //return n
//}
//
//void main026004(){
//
//    //int i[10] = {0};
//    struct Node *node;
//    node = initNode(node);
//    insert(node,10000,3);
//    node = node->next;
//    for (int i = 0; i < 10; ++i) {
//        printf("%d\n",node->data);
//        node = node->next;
//    }
//}
//
//char * getPoint(){
//
//    char str[100] = "锄禾日当午";
//    char *p = str;
//    //free(p);
//    return p;
//}
//
//typedef struct BeautifulGirl{
//
//    char number[11];
//    //char name[30];
//};
//
//void main026005(){
//
//    char *p = NULL;
//    p = getPoint();
//
//    if (p!=NULL){
//        printf("进来了\n");
//        strcpy(p,"hello");
//    }
//    printf("%s",p);
//}
//
//void main026006(){
//
//    struct BeautifulGirl girl = {{"19939374645"}/**"刘亦菲"*/};
//    sprintf(girl.number,"110");
//    printf("%s",girl.number);
//}
//
//struct Nodes{
//
//    double d;
//    int i;
//    char c[21]
//};
//
//union Nodess{
//    char c;
//    char cc[2];
//    double d;
//    int i;
//
//};
//void main026(){
//
//    printf("%d\n", sizeof(union Nodess));
//}
//#include <stdio.h>
int day026 = 10000;
char * day026100(){
    return ("我是26文件");
}