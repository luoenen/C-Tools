//
// Created by 罗申申 on 2019/9/8.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main0090(){

    double db = 101;
    double *pd = &db;
    printf("%X---%f\n",pd,*pd);
    printf("%X---%f",&db,*pd);
}

void main0091(){

#define 数组 int array[10];
    数组
    int arr[10];
    int num;
    srandom((unsigned)time(NULL));

    for (int i = 0; i <10; ++i) {
        num = rand()%100;
        *(arr+i) = num;
    }


    for (int j = 0; j < 10; ++j) {

        printf("%5d\t",*(arr+j));
    }



    for (int k = 0; k < 10; ++k) {

        for (int i = k; i < 10; ++i) {

            if(*(arr+k)>*(arr+i)){

                int temp = arr[k];
                arr[k] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("\n冒泡排序：\n");
    for (int j = 0; j < 10; ++j) {

        printf("%5d\t",*(arr+j));
    }

    int minIndex = 0;

    for (int l = 0; l < 10; ++l) {
        minIndex = l;
        for (int i = l+1; i < 10; ++i) {
            if (*(arr+minIndex)>*(arr+i)){
                minIndex = i;
            }
        }

        if(minIndex != l){
            int temp = *(arr+minIndex);
            *(arr+minIndex) = arr [l];
            arr[l] = temp;
        }
    }

    printf("\n选择排序：\n");
    for (int j = 0; j < 10; ++j) {

        printf("%5d\t",*(arr+j));
    }
}

void main0092(){

    int num = 100;
    int *p = &num;
    int *pp = p;
    *pp = 10000;
    //printf("%d",num);
    double array[10] = {1,2,3,4,5,6,7,8,9,0};

    for (int i = 0; i < 10; ++i) {

        printf("%f----------%p\n",array[i],&array[i]);
    }
}

void main0093(){
    int array[10] = {1,2,3,4,5,6,7,8};
    int flag = 0;
    while (1){

        printf("%d\n",*(array+flag));
        if(flag>8){

            break;
        }

        flag++;
    }
}

void main0096(){

    int num =100;
    int num2 = 100;
    int num3 = num;
    //int num
    if (&num == &num2){
        printf("情敌");
    }

    printf("%p\t",&num);
    printf("%p\t",&num2);
    printf("%p",&num3);
}

void main0094(){

    int num = 100;
    int *ip = &num;
    double *dp = &num;


    printf("%p",ip);

    printf("\n%p",dp);
}

void main0095(){

    //main0090();
    //main0091();
    //main0092();
    //main0093();
    //main0096();
    main0094();
}

void main0097(){

    int array[10] = {1,2,3,4,5,6,7,8,9};
    int i = &array[10] - &array[0];
    printf("%d", sizeof(array));
}

void main0098(){

    int *ip;
    short *sp;
    char *cp;
    long *lp;
    long long *llp;
    long double *ld;
    float *fp;
    printf("%5d%5d%5d%5d%5d%5d%5d", sizeof(ip), sizeof(sp), sizeof(cp), sizeof(lp), sizeof(llp), sizeof(ld), sizeof(fp));
}

void main0099(){

    double d[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; ++i) {
        printf("%f--",d[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; ++i) {
        printf("%f--",*(d+i));
    }
    printf("\n");
    for (int i = 0; i < 10; ++i) {
        printf("%f--sizeof:%d--",*(d+i), sizeof(*(d+i)));
    }
}

int main00910(){
    //main0097();
    //main0098();
    double d[10] = {1,2,3,4,5,6,7,8,9,0};
    for (int i = 0; i < 10; ++i) {
//        printf("sizeof:%d\n", sizeof(*(d+i)));
//        printf("sizeof:%d\n", sizeof((i)));
        printf("%f\t",*(d+i));
        printf("地址：%p\n",d+i);
    }
}

void main00911(){

    double d[5] = {1,2,3,4,5};

    for (short i = 0; i < 5; i++) {

        printf("值：%f-地址：%p\n",*(d+i),d+i);
    }
}



int main009(){
    //main0099();
    main00911();

//    int num[2] = {1,2};
//    int i = 10;
//    int *ip = &i;
//    printf("%d",*(num+1));
}