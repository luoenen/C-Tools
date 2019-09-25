////<<<<<<< HEAD
////#include <stdio.h>
////#include <stdlib.h>
////#include <time.h>
////#include <unistd.h>
////
////void main0010(int i){
////
////    do{
////        printf("我泡%d个妞\n",i);
////        i+=1;
////    }while (i<=100);
////}
////
////void main0011(){
////
////    for (int i = 0; i < 100; ++i) {
////
////        printf("%d\n",i);
////    }
////}
////
////void main0012(){
////
////    int num;
////    scanf("%d",&num);
////    for (int i = 0; i < num; ++i) {
////        system("ifconfig");
////        printf("%d",num);
////    }
////
////
////}
////
////void main0013(){
////
////    int result=0;
////
////    for (int i = 0; i < 100; i+=2) {
////
////        result+=i*(i+1);
////    }
////
////    printf("%d",result);
////};
////
////void main0014(){
////    int num;
////    srand((unsigned)time(&num));
////    num = rand()%100;
////    printf("%d",num);
////}
////
////void main0015(){
////
////    int index = 0;
////    int result = 0;
////    A:    for(int i = 0;i<100;i++){
////
////        if(result<=1000){
////            index++;
////            printf("执行%d次",index);
////            result+=100;
////            printf("%d",result);
////            printf("\n");
////            goto A;
////        }
////    }
////}
////
////void main0016(int goal){
////
////    while (1){
////
////        if(goal==100){
////            break;
////        }
////        goal++;
////    }
////
////    printf("goal== %d ",goal);
////}
////
////void main0017(){
////
////    for (int k = 0; k < 1000; ++k) {
////        for (int l = 0; l < 1000; ++l) {
////            if(13*k+11*l==316){
////                printf("解是：%d----%d",k,l);
////            }
////        }
////    }
////
////}
////
////void main0018(int total){
////
////    for (int i = 0; i < total; i++) {
////
////        if(i%13==0){
////            printf("%d膜13为0\n",i);
////            continue;
////        }
////    }
////}
////
////void main0019(){
//////    int num = 110;
//////    char str[100] ;
//////    sprintf(str,"hgfghfhfhfh%d",num);
//////    printf("%s",str);
////    int num;
////    char str[100];
////    //sprintf()
////}
////
////void main00110(int i){
////
////    A: printf("你好天朝\n");goto B;
////    B:printf("你好世界\n");
////    i++;
////    if(i>=100){
////        return;
////    }
////
////    goto A;
////}
////
////void main00111(){
////
////
////    sleep(100);
////}
////
////void main00112(){
////
////    for(int i = 1;i<=9;i++){
////        for(int j = 1;j<=9;j++){
////            if(j>i&&j>9-i){
////                printf("%d x %d = %d\t",j,i,i*j);
////            }
////        }
////        printf("\n");
////    }
////}
////
////void main00113(){
////
////    A:    printf("锄禾日当午\n");
////    goto F;
////    B:printf("学C真是苦\n");
////    C:printf("一本小破书\n");
////    D:printf("一学一下午\n");
////    E: goto A;
////    F:
////    return;
////}
////
////int main001() {
////    printf("Hello, World!\n");
////    //main0010(10);
////    //main0011();
////    //main0012();
////    //main0013();
////    //main0014();
////    //main0015();
////    //main0016(20);
////    //main0017();
////    //main0018(100);
////    //main0019();
////    //main00110(0);
////    //main00111();
////    //main00112();
////    main00113();
////    return 0;
////}
////=======
////
////  main.c
////  Program C
////
////  Created by 罗申申 on 2019/8/29.
////  Copyright © 2019 罗申申. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <unistd.h>
//#include <stdbool.h>
//
//int main001001(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    short *s = NULL;
//    int *i = NULL;
//    long *l = NULL;
//    double *d = NULL;
//    printf("%d---%d---%d---%d----%d", sizeof(s), sizeof(i), sizeof(l), sizeof(double), sizeof(&d));
//    return 0;
//}
//
//void main001002(){
//
//
//#define MaxSize 50
//
//typedef int EleType;
//
//typedef struct{
//
//    EleType data[MaxSize];
//    int length;
//} s1;
//
//typedef struct{
//    EleType *ep;
//    int maxSize,length
//
//} s2;
//
//}
////void array(s2 s,EleType max){
////
////
////    s.ep =  (EleType *)malloc(sizeof(EleType)*max);
////
////
////}
//
//#define Eletype int
////#define bool int
//typedef struct{
//    Eletype *data;
//    Eletype maxSize,currSize;
//} Array;
//
//void initArray(Array array,Eletype maxSize){
//    array.data = (Eletype *)malloc(sizeof(Eletype)*maxSize);
//    for (int i = 0; i<=maxSize; i++) {
//        *(array.data+i) = 0;
//    }
//}
//
//void insert(Array array,int i ,Eletype e){
//
//    if(array.currSize >= array.maxSize){
//
//        printf("目标n表不足越界，插入失败\n");
//        return;
//    }
//    if(i<1||i>array.maxSize){
//        printf("插入索引不合法，插入失败\n");
//        return;
//    }
//    for (int num = array.currSize+1; num > i; num--) {
//
//        *(array.data+num) = *(array.data+num-1);
//    }
//
//    *(array.data+i) = e;
//    printf("插入成功");
//
//    array.currSize++;
//
//
//}
//
//int getLength(int a[]){
//
//    printf("%d\n",sizeof(a));
//    int result = sizeof(a)/(sizeof(int));
//
//    return result;
//}
//
//void myInsert(int * array,int max,int current,int i ,Eletype e){
//
//    if( current>= max){
//
//        printf("目标n表不足越界，插入失败\n");
//        return;
//    }
//    if(i<0||i>max){
//        printf("插入索引不合法，插入失败\n");
//        return;
//    }
//    for (int num = max; num > i; num--) {
//
//        *(array+num) = *(array+num-1);
//    }
//
//    *(array+i) = e;
//    printf("插入成功\n");
//
//    current++;
//
//
//}
//
//void main001003(){
//
//    Array arrays ;
//    initArray(arrays, 50);
//    for (int i = 0; i<50; i++) {
//        printf("%d\n",*(arrays.data+i));
//    }
//}
//
//void myDelete(int array[],int max,int current,int i ){
//
//    if(i<0||i>current){
//        printf("目标n表不足越界，插入失败\n");
//        return;
//    }
//    for (int j = i; j<current; j++) {
//        array[j] = array[j+1];
//    }
//    current--;
//    printf("删除完成\n");
//}
//
//void main001004(){
//
//    int array[100] = {1,2,3,4,5,6,7,8,9,10};
//    //printf("%d\n",getLength(array));
//    myInsert(array, 20, 10, 10, 10);
//    for (int i = 0; i<20; i++) {
//        printf("%d\n",array[i]);
//    }
//    myDelete(array, 20, 11, 2);
//    for (int i = 0; i<20; i++) {
//        printf("%d\n",array[i]);
//    }
//}
//
//#define DoubleSize 20
//typedef int EleType;
//
//typedef struct{
//
//
//    EleType *data;
//    int length,max;
//
//
//} SqList;
///**
//
// 自定义数据结构
// */
//
//
//typedef struct{
//    int *data;
//    int currentLength,maxLength;
//
//} SL;
//
///**
// 增
//
// */
//
//bool append(SL sl,int *current,int e){
//
//    sl.currentLength = *current;
//
//    if(sl.currentLength >= sl.maxLength){
//        printf("线性表不足，增加失败\n");
//        return -1;
//    }
//
//    *(sl.data+sl.currentLength) = e;
//    *(current)+=1;
//
//    //printf("cl地址：%u\n",&(sl.currentLength));
//
//    return 1;
//
//}
//
///**
// 删
//
// */
//
//bool delted(SL sl,int *current,int index){
//
//    sl.currentLength = *current;
//    if(index <0||index>sl.currentLength){
//        printf("索引无效，删除失败 \n");
//        return -1;
//    }
//
//    for (int i =index; i<sl.currentLength; i++) {
//
//        *(sl.data+i) = *(sl.data+i+1);
//    }
//
//    sl.currentLength--;
//    *current = sl.currentLength;
//
//
//
//    return 1;
//}
//
///**
// 改
// */
//
//bool change(SL sl,int *current,int index,int e){
//
//    sl.currentLength = *current;
//    if(index <0||index>sl.currentLength){
//        printf("索引无效,修改失败 \n");
//        return -1;
//    }
//
//    *(sl.data+index) = e;
//
//    return 1;
//}
//
///**
// 查找
// */
//
//int search(SL sl,int *curren,int e){
//    sl.currentLength = *curren;
//
//    for (int i = 0; i<sl.currentLength; i++) {
//        if(e == *(sl.data+i)){
//            printf("找到了\n");
//            return i+1;
//        }
//    }
//    printf("没有找到\n");
//    return 0;
//}
//
//int main001005(){
//
//    SL sl;
//    sl.maxLength = 20;
//    sl.currentLength = 10;
//    sl.data = (int *)malloc(sizeof(int)*sl.maxLength);
//
//    int num;
//    srandom((unsigned)time(NULL));
//
//    for(int i = 0;i<sl.currentLength;i++){
//        num = rand()%100;
//        *(sl.data+i) = num;
//    }
//
//
//
//    printf("初始化 SL:\n");
//    for (int i = 0; i<sl.currentLength; i++) {
//        printf("%d\t",*(sl.data+i));
//    }
//    printf("\n");
//
//    int state = append(sl,&(sl.currentLength),254);
//
//    if(state == 1){
//        printf("增加成功\n");
//    }else{
//        printf("增加失败\n");
//    }
//
//    printf("增加 SL:\n");
//    for (int i = 0; i<sl.currentLength; i++) {
//        printf("%d\t",*(sl.data+i));
//    }
//    printf("\n");
//
//    //printf("%d\n",sl.currentLength);
//    //printf("cl地址：%u\n",&(sl.currentLength));
//
//    state = delted(sl,&(sl.currentLength),3);
//
//    if(state == 1){
//        printf("删除成功\n");
//    }else{
//        printf("删除失败\n");
//    }
//
//    printf("删除 SL:\n");
//    for (int i = 0; i<sl.currentLength; i++) {
//        printf("%d\t",*(sl.data+i));
//    }
//    printf("\n");
//
//    //修改
//    int result =  change(sl,&(sl.currentLength),100,10000);
//    printf("state = %d\n",state);
////    if(state == 1){
////        printf("修改成功啦\n");
////    }else if(state == -1){
////        printf("修改失败\n");
////    }
//
//    if(result == 1){
//
//
//    printf("修改 SL:\n");
//    for (int i = 0; i<sl.currentLength; i++) {
//        printf("%d\t",*(sl.data+i));
//    }
//    printf("\n");
//    }
//
//    return 1;
//}
//
//int main001006(){
//
//    SL sl;
//    sl.maxLength = 20;
//    sl.currentLength = 10;
//    sl.data = (int *)malloc(sizeof(int)*sl.maxLength);
//
//    int num;
//    srandom((unsigned)time(NULL));
//
//    for(int i = 0;i<sl.currentLength;i++){
//        num = rand()%100;
//        *(sl.data+i) = num;
//    }
//
//
//
//    printf("初始化 SL:\n");
//    for (int i = 0; i<sl.currentLength; i++) {
//        printf("%d\t",*(sl.data+i));
//    }
//    printf("\n");
//
//    int state = search(sl,&(sl.currentLength),58);
//
//
//
//    printf("寻找 SL:第%d位\n",state);
////    for (int i = 0; i<sl.currentLength; i++) {
////        printf("%d\t",*(sl.data+i));
////    }
//    printf("\n");
//    return 1;
//}
////>>>>>>> a9e798b627ccae47bc617168be3dbc79d7173fe8
int day001(){

    return 100;
}