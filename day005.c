////
//// Created by 罗申申 on 2019/9/4.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <unistd.h>
//#include <time.h>
//
//void main0050(){
//
//    system("open .");
//}
//
//int selfAdd(int num){
//
//    if(num == 1){
//        return 1;
//    } else{
//        return num+selfAdd(num-1);
//    }
//}
//
//void main0051(int i,int array[]){
//
//    int num;
//    srand((
//    unsigned)time(NULL));
//
//    for (int j = 0; j < i; ++j) {
//        num = rand()%1000;
//        array[i] = num;
//        //printf("%d\n",num);
//    }
//
//    printf("\n%p\n",array);
//    //return array;
//}
//
//void main0052(int array[]){
//    int num;
//    srand((unsigned)time(NULL));
//
//
//    for (int i = 0; i < 10; ++i) {
//        num = rand()%100;
//        array[i] = num;
//    }
//}
//
//int sort(int array[],int index){
//    for (int i = 0; i < index; ++i) {
//        for (int j = 0; j < index; ++j) {
//            if(array[i]>array[j]){
//                int temp = array[i];
//                array[i]=array[j];
//                array[j] = temp;
//            }
//        }
//    }
//}
//
//void main0053(int array[]){
//
//    int max = 0;
//    int maxIndex = 0;
//    max = array[0];
//    for (int i = 0; i < 10; ++i) {
//
//        if (array[i]>max){
//            max = array[i];
//            maxIndex = i;
//        }
//    }
//
//    printf("MAX:%d\n",max);
//}
//
//void main0054(int array[]){
//    int min = 0;
//    int minIndex = 0;
//    min = array[0];
//
//    for (int i = 0; i < 10; ++i) {
//        if(min>array[i]){
//            min = array[i];
//            minIndex = i;
//
//        }
//    }
//    printf("MIN:%d\n",min);
//}
//
//
//void main0056(){
//
//    printf("I am Okay");
//}
//
//void initArray(int array[],int index){
//
//    int num;
//    srand((unsigned)time(NULL));
//
//    for (int i = 0; i < index; ++i) {
//
//        num = rand()%1000;
//        array[i] = num;
//    }
//}
//
//void selection(int array[],int index){
//
////    for (int i = 0; i < 10; ++i) {
////        printf("%d\n",array[i]);
////    }
//
//    int min = 0;
//    int minIndex = 0;
//
//    for (int i = 0; i < index; i++) {
//        minIndex = i;
////        printf("%d\n",min);
//
//        for (int j = i+1; j < index; j++) {
//
//            if (array[minIndex]>array[j]){
//                minIndex = j;
//            }
//
//        }
//        if (minIndex!=i){
//            int temp = array[minIndex];
//            array[minIndex] = array[i];
//            array[i] = temp;
//        }
//    }
//}
//
//void mySelection(int array[],int total){
//    int minIndex;
//
//    for (int i = 0; i < total; ++i) {
//        minIndex = i;
//
//        for (int j = i+1; j < total; ++j) {
//
//            if(array[minIndex]>array[j]){
//                minIndex = j;
//            }
//        }
//        if (minIndex!=i){
//            int temp = array[minIndex];
//            array[minIndex] = array[i];
//            array[i] = temp;
//        }
//    }
//}
//
//void main0057(){
//
//    //int array[10][20];
//}
//
//void main005(){
//
//    //int result = selfAdd(100);
//    //printf("%d",result);
//    //main0050();
////    int array[10];
////    main0051(10,array);
////
////    printf("\n%p",array);
////
////    for (int i = 0; i < 10; ++i) {
////        //printf("%d\n",array[i]);
////    }
//    int array[20];
//    //main0052(array);
//    //sort(array,10);
////    for (int i = 0; i < 11; ++i) {
////        printf("%d\n",array[i]);
////    }
//    //main0053(array);
//    //main0054(array);
//    //main0056();
//
//    int arr[10];
//    initArray(arr,10);
////    for (int i = 0; i < 10; ++i) {
////        printf("%d\n",arr[i]);
////    }
//    //selection(arr,10);
//
//    printf("排序前\n");
//    for (int i = 0; i < 10; ++i) {
//        //printf("%d\n",arr[i]);
//    }
//    printf("排序后\n");
//    mySelection(arr,10);
//    for (int i = 0; i < 10; ++i) {
//        //printf("%d\n",arr[i]);
//    }
//
//    int arra[10][10];
//    for (int j = 0; j < 10; ++j) {
//        for (int i = 0; i < 10; ++i) {
//            arra[i][j] = i+j;
//        }
//    }
//
//    for (int k = 0; k < 10; ++k) {
//
//        for (int i = 0; i < 10; ++i) {
//            printf("%d\n",arra[k][i]);
//        }
//    }
//
//    int a[][2] = {{},{}};
//
//}