//
//  main.c
//  Program C
//
//  Created by 罗申申 on 2019/8/29.
//  Copyright © 2019 罗申申. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>

int main001001(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    short *s = NULL;
    int *i = NULL;
    long *l = NULL;
    double *d = NULL;
    printf("%d---%d---%d---%d----%d", sizeof(s), sizeof(i), sizeof(l), sizeof(double), sizeof(&d));
    return 0;
}

void main001002(){
    

#define MaxSize 50

typedef int EleType;

typedef struct{
    
    EleType data[MaxSize];
    int length;
} s1;

typedef struct{
    EleType *ep;
    int maxSize,length
    
} s2;

}
//void array(s2 s,EleType max){
//
//
//    s.ep =  (EleType *)malloc(sizeof(EleType)*max);
//
//
//}

#define Eletype int
//#define bool int
typedef struct{
    Eletype *data;
    Eletype maxSize,currSize;
} Array;

void initArray(Array array,Eletype maxSize){
    array.data = (Eletype *)malloc(sizeof(Eletype)*maxSize);
    for (int i = 0; i<=maxSize; i++) {
        *(array.data+i) = 0;
    }
}

void insert(Array array,int i ,Eletype e){
    
    if(array.currSize >= array.maxSize){
        
        printf("目标n表不足越界，插入失败\n");
        return;
    }
    if(i<1||i>array.maxSize){
        printf("插入索引不合法，插入失败\n");
        return;
    }
    for (int num = array.currSize+1; num > i; num--) {
    
        *(array.data+num) = *(array.data+num-1);
    }
    
    *(array.data+i) = e;
    printf("插入成功");

    array.currSize++;
    
    
}

int getLength(int a[]){
    
    printf("%d\n",sizeof(a));
    int result = sizeof(a)/(sizeof(int));
    
    return result;
}

void myInsert(int * array,int max,int current,int i ,Eletype e){

    if( current>= max){

        printf("目标n表不足越界，插入失败\n");
        return;
    }
    if(i<0||i>max){
        printf("插入索引不合法，插入失败\n");
        return;
    }
    for (int num = max; num > i; num--) {

        *(array+num) = *(array+num-1);
    }

    *(array+i) = e;
    printf("插入成功\n");

    current++;


}

void main001003(){
    
    Array arrays ;
    initArray(arrays, 50);
    for (int i = 0; i<50; i++) {
        printf("%d\n",*(arrays.data+i));
    }
}

void myDelete(int array[],int max,int current,int i ){
    
    if(i<0||i>current){
        printf("目标n表不足越界，插入失败\n");
        return;
    }
    for (int j = i; j<current; j++) {
        array[j] = array[j+1];
    }
    current--;
    printf("删除完成\n");
}

void main001004(){
    
    int array[100] = {1,2,3,4,5,6,7,8,9,10};
    //printf("%d\n",getLength(array));
    myInsert(array, 20, 10, 10, 10);
    for (int i = 0; i<20; i++) {
        printf("%d\n",array[i]);
    }
    myDelete(array, 20, 11, 2);
    for (int i = 0; i<20; i++) {
        printf("%d\n",array[i]);
    }
}

#define DoubleSize 20
typedef int EleType;

typedef struct{
    
    
    EleType *data;
    int length,max;
    
    
} SqList;
/**
 
 自定义数据结构
 */


typedef struct{
    int *data;
    int currentLength,maxLength;
    
} SL;

/**
 增
 
 */

bool append(SL sl,int *current,int e){
    
    sl.currentLength = *current;
    
    if(sl.currentLength >= sl.maxLength){
        printf("线性表不足，增加失败\n");
        return -1;
    }
    
    *(sl.data+sl.currentLength) = e;
    *(current)+=1;
    
    //printf("cl地址：%u\n",&(sl.currentLength));

    return 1;
    
}

/**
 删
 
 */

bool delted(SL sl,int *current,int index){
    
    sl.currentLength = *current;
    if(index <0||index>sl.currentLength){
        printf("索引无效，删除失败 \n");
        return -1;
    }
    
    for (int i =index; i<sl.currentLength; i++) {
        
        *(sl.data+i) = *(sl.data+i+1);
    }
    
    sl.currentLength--;
    *current = sl.currentLength;
    
    
    
    return 1;
}

/**
 改
 */

bool change(SL sl,int *current,int index,int e){
    
    sl.currentLength = *current;
    if(index <0||index>sl.currentLength){
        printf("索引无效,修改失败 \n");
        return -1;
    }
    
    *(sl.data+index) = e;
    
    return 1;
}

/**
 查找
 */

int search(SL sl,int *curren,int e){
    sl.currentLength = *curren;
    
    for (int i = 0; i<sl.currentLength; i++) {
        if(e == *(sl.data+i)){
            printf("找到了\n");
            return i+1;
        }
    }
    printf("没有找到\n");
    return 0;
}

int main001005(){
    
    SL sl;
    sl.maxLength = 20;
    sl.currentLength = 10;
    sl.data = (int *)malloc(sizeof(int)*sl.maxLength);
    
    int num;
    srandom((unsigned)time(NULL));
    
    for(int i = 0;i<sl.currentLength;i++){
        num = rand()%100;
        *(sl.data+i) = num;
    }
    
    
    
    printf("初始化 SL:\n");
    for (int i = 0; i<sl.currentLength; i++) {
        printf("%d\t",*(sl.data+i));
    }
    printf("\n");
    
    int state = append(sl,&(sl.currentLength),254);
    
    if(state == 1){
        printf("增加成功\n");
    }else{
        printf("增加失败\n");
    }
    
    printf("增加 SL:\n");
    for (int i = 0; i<sl.currentLength; i++) {
        printf("%d\t",*(sl.data+i));
    }
    printf("\n");
    
    //printf("%d\n",sl.currentLength);
    //printf("cl地址：%u\n",&(sl.currentLength));
    
    state = delted(sl,&(sl.currentLength),3);
    
    if(state == 1){
        printf("删除成功\n");
    }else{
        printf("删除失败\n");
    }
    
    printf("删除 SL:\n");
    for (int i = 0; i<sl.currentLength; i++) {
        printf("%d\t",*(sl.data+i));
    }
    printf("\n");
    
    //修改
    int result =  change(sl,&(sl.currentLength),100,10000);
    printf("state = %d\n",state);
//    if(state == 1){
//        printf("修改成功啦\n");
//    }else if(state == -1){
//        printf("修改失败\n");
//    }
    
    if(result == 1){
        
    
    printf("修改 SL:\n");
    for (int i = 0; i<sl.currentLength; i++) {
        printf("%d\t",*(sl.data+i));
    }
    printf("\n");
    }
    
    return 1;
}

int main001006(){
    
    SL sl;
    sl.maxLength = 20;
    sl.currentLength = 10;
    sl.data = (int *)malloc(sizeof(int)*sl.maxLength);
    
    int num;
    srandom((unsigned)time(NULL));
    
    for(int i = 0;i<sl.currentLength;i++){
        num = rand()%100;
        *(sl.data+i) = num;
    }
    
    
    
    printf("初始化 SL:\n");
    for (int i = 0; i<sl.currentLength; i++) {
        printf("%d\t",*(sl.data+i));
    }
    printf("\n");
    
    int state = search(sl,&(sl.currentLength),58);
    

    
    printf("寻找 SL:第%d位\n",state);
//    for (int i = 0; i<sl.currentLength; i++) {
//        printf("%d\t",*(sl.data+i));
//    }
    printf("\n");
    return 1;
}
