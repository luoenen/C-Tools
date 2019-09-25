//
// Created by 罗申申 on 2019/9/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <unistd.h>
#include <time.h>
#include <pthread.h>
#include <profile.h>
#include <assert.h>

void main028001(){

    for (register int i = 0; i < 10; ++i) {
        printf("%d\t",i);
        //printf("%p\n",&i);
    }
}

void main028002(){
    //register int start =
    time_t start,end;
    time(&start);
    int sum = 0;
    for (register int i = 0; i < 10000000; ++i) {

        sum+=i;
        //printf("运行%d\n次",i);
    }
    printf("sum=%d\n",sum);
    time(&end);
    printf("运行了%ld秒",end-start);
}

void main028003(){

    pthread_t p1,p2;


}

extern void main0270010();

void main028004(){

    //main028001();
    register int flag = 100;
    //printf("%d\n",flag+1);
    //main028002();
    main028003();
    //main0270010();
}

void main027011(){

    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    printf("%x\n",a);
    printf("%x\n",*a);
    printf("%x\n",&a);
    printf("%d\n", sizeof(*a));
    printf("%d\n", sizeof(*&a));
    main028003();
}

char * main028012(char *path,char * str){
    char *paths = path;
    FILE *file = fopen(paths,"rb");
    if(file == NULL){
        printf("文件打开失败");
        return NULL;
    }
    while (getc(file)!=EOF){
        char c = fgetc(file);
        printf("%c",c);

    }

}

void main028013(){

    char *path = "/Users/luosenen/Documents/C/Program C/day027.c";
    main028012(path,"f");
}

void main028014(int a,int b){

    assert(b!=0);

    int c= a/b;
    printf("%d\n",c);
}

#define cnn "你好世界"
#define en HelloWorld
#define B 2

void main028015(){

#if B == 1
    printf(en);
#else
    printf(cnn);
#endif

}

//#include "day027.c"
//extern int day001;
int cc = 0;
extern int day027001;
void main028016(){
    //main028014(10,0);
    //printf("%d\n",day001);
    cc = day027001;
    printf("%d\n",cc);
    main028015();
}

void main028017(){
//int M = 200;

#define M MM
#ifndef M
    system("ls -ls");
#else
    system("ifconfig");
#endif

}

#define go(X) system(#X);

void main028018(){
    //main028017();
    //go(ps)
    //go(pwd);
    printf("%s\n%s\n%d,\n%s",__FILE__,__FUNCTION__,__LINE__,__DATE__);
}

#define Sys(x) system(#x)
#define I(x) I##x
void main028019(){

//    Sys("cd \ ../../../../");
//    Sys(ls);
    int I(111) = I111;

}

void main028020(){
    const int num = 100;
    const int *p = &num;
    int **vp = (int *)&p;
    **vp = 200;
    printf("%d\n",num);

}

void main028021(){

    printf("%s\t%s\t%s\t%s\t",__FILE__,__FUNCTION__,__DATE__,__TIMESTAMP__);
}

struct Node{

    int num;
    struct Node *next;
    int score;
};

void initArray(int array[],int size){
    int length = size;
    int num;
    srandom((unsigned)time(NULL));
    for (int i = 0; i < length; ++i) {
        num = rand()%1000;
        array[i] = num;
    }
}

void SelectOrder(int array[],int size){

    int minDex;
    int min;
    int length = size;
    for (int i = 0; i < length; ++i) {
        minDex = i;
        for (int j = i+1; j < length; ++j) {

            if(array[minDex]>array[j]){
                minDex = j;
            }
        }

        if(minDex!=i){
            int temp = array[minDex];
            array[minDex] = array[i];
            array[i] = temp;
        }
    }

}

void main028022(){

    int array[10];
    initArray(array,10);
    printf("排序前：\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d\t",array[i]);
    }
    printf("\n排序后:\n");
    SelectOrder(array,10);
    for (int i = 0; i < 10; ++i) {
        printf("%d\t",array[i]);
    }
}

void main028(){

    
}