//
// Created by 罗申申 on 2019/9/5.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main0060(int array[][10]){

    printf("go shift");
}

void initMultiplyArray(int array[10][10]){

    int num;
    srandom((unsigned)time(NULL));

    for (int i = 0; i < 10; ++i) {
        array[i][0] = 1;
        for (int j = 0; j < 10; ++j) {
            //num = rand()%1000;
            //array[i][j]=1;
            if (i-1==j-1){
                array[i][i] = 1;
            }

            array[i][i] = array[i-1][j-1]+array[i-1][j];
        }
    }
}

int main0061(){

    int array[10][10] ;
    initMultiplyArray(array);
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("%5d",array[i][j]);
        }
        printf("\n");
    }
    //int array[][10] = {};

    //int twoArray[N][N];
    return 1;
}

void initArr(int *arr){

    int num;
    srandom((unsigned)time(NULL));
    //num = rand()%100;
    //printf("%d",num);
    for (int i = 0; i < 10; ++i) {
        num = rand()%100;
        arr[i] = num;
    }
}

void bud(int *arr){
    int max;
    int maxInd;

    for (int i = 0; i <10; ++i) {
        maxInd = i;

        for (int j = i+1; j < 10; ++j) {
            if (arr[i]<arr[j]){
                maxInd = j;
            }
        }

        if (i!=maxInd){
            int temp = arr[maxInd];
            arr[maxInd] = arr[i];
            arr[i] = temp;
        }
    }
}

void main0062(){
    int array[7][9];

    for (int i = 0; i < 63; ++i) {
        array[i/7][i%9] = i;
//        printf("%d---%d\n",i/7,i%9);
//        printf("%d",array[i/7][i%9]);
        //printf("\n");
    }

    printf("%d",array[0][1]);
    for (int j = 0; j < 6; ++j) {
        printf("%d\n",array[j][0]);
    }
}

int main0063(){
//    int array[10]={0};
//    initArr(array);
//    for (int i = 0; i < 10; ++i) {
//
//        //printf("%d\n",array[i]);
//    }
//
//    bud(array);
//    for (int i = 0; i < 10; ++i) {
//
//        //printf("%d\n",array[i]);
//    }
    main0062();
}

int twoSearch(int array[],int length,int goal) {

    int head = 0;
    int tail = length-1;
    int mid = (head + length) / 2;

    while (head <= tail) {
        if (array[mid] > goal) {
            tail = mid;
            mid = (head + tail) / 2;
        } else if (array[mid] == goal) {

            return mid;
        } else if (array[mid] < goal) {
            head = mid;
            mid = (head + tail) / 2;
        } else if(tail == head){
            printf("找不到");
            return 0;
        }
    }
    printf("找不到");
}


void main0064(){

    printf("没反应？");
    int array[3][4];
    for (int i = 0; i < 3; ++i) {
        //array[i/3][(12+i)%4] = i;
        //printf("%d",array[i/3][i%4]);
        for (int j = 0; j < 4; ++j) {
            array[i][j] = i+j;
        }
    }

    printf("%d",array[0][3]);
}

void main0065(int x,int y){

    scanf("%d%d",&x,&y);

    void *p = malloc((sizeof(int)*x*y));

    int  (*px)[9] = p;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            px[i][j] = i+j;
        }
    }

    for (int k = 0; k < 8; ++k) {
        for (int i = 0; i < 9; ++i) {
            printf("----%d",px[k][i]);
        }
        printf("\n");
    }
}

void main066(){

    int array[10] = {1,2,3,4,5,6,7,8,9};
    int result = twoSearch(array,10,5);
    //printf("%d",result);
    //main0064();
    int a,b;
    main0065(a,b);

}

void main0067(){

    int x = 10;
    int y = 10;

    printf("没执行？\n");
    int **pp = malloc(sizeof(int *)*x);

    for (int i = 0; i < 10; ++i) {

         pp[i] = malloc(sizeof(int)*y);

    }

    for (int j = 0; j < x; ++j) {
        for (int i = 0; i < y; ++i) {

            pp[i][j] = i+j;

        }
    }

    for (int k = 0; k < x; ++k) {
        for (int i = 0; i < y; ++i) {

            printf("%5d",pp[k][i]);
        }
        printf("\n");
    }
}

void main0068(){

    int x;
    int y;
    scanf("%d%d",&x,&y);

    int **pp = malloc(sizeof(int *)*x);

    for (int i = 0; i < x; ++i) {

        pp[i] = malloc(sizeof(int)*y);

    }

    for (int j = 0; j < x; ++j) {
        for (int i = 0; i < y; ++i) {
            int num;
            srand((unsigned)time(NULL));
            num = rand()%1000;
            pp[i][j] = i+j;
        }
    }

    for (int k = 0; k <x; ++k) {
        for (int i = 0; i < y; ++i) {
            printf("%8d",pp[k][i]);

        }
        printf("\n");
    }
}

void main0069(){

    int num;
    srand((unsigned)time(NULL));
    num = rand()%100;
    int a[10];
    for (int i = 0; i < 10; ++i) {
        num = rand()%100;
        a[i] = num;
    }

    for (int j = 0; j < 10; ++j) {
        printf("%d\n",a[j]);
    }

    int result = twoSearch(a,10,44);
    printf("%d",result);
}

int main00611(){

    //main0067();
    //main0068();
    main0069();
    return 1;
}

void main00610(){

    int array[3][4];

    printf("%d", sizeof(array));
}

void main00612(){

}
int main006(){

    //main00610();
    main00612();
}