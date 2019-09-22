////
//// Created by 罗申申 on 2019/9/7.
////
//
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main0080(){
//
//    int num = 0;
//    int *p = &num;
//    printf("指针长度：%d----指针地址长度：%d", sizeof(p), sizeof(&p));
//    return 1;
//}
//
//int* main0082InitArray(int total,int array[]){
//
//    int num = 0;
//    srandom((unsigned)time(NULL));
//
//    for (int i = 0; i < total; ++i) {
//        num = rand()%1000;
//        array[i] = num;
//    }
//
//    return array;
//}
//
//int main0081TwoSearch(int array[],int total,int goal){
//
//    int head = 0;
//    int tail = total-1;
//    int mid = (head+tail)/2;
//
//    while (head<=tail){
//
//        if(array[mid] == goal){
//            printf("找到了，下标为 %d",mid);
//            return mid;
//        } else if(array[mid]>goal){
//            tail = array[mid];
//            mid = (head+tail-1);
//        } else if(array[mid]<goal){
//            head = mid;
//            mid = (head+tail)/2;
//        } else if(head == tail){
//            if(goal == array[head] == array[tail]){
//                printf("找到了，下标为 %d",mid);
//                return head;
//            }
//            printf("不存在");
//            return -1;
//        }
//
//    }
//
//}
//
//void main0083(){
//
//    //main0080();
//    int num = 0;
//    scanf("%d",&num);
//    int array[num];
//    main0082InitArray(num,array);
//    for (int i = 0; i < num; ++i) {
//        printf("%d\n",array[i]);
//    }
//
//    array[4] = 100;
//
//    int result = main0081TwoSearch(array,num,100);
//    //main0081TwoSearch();
//
//    printf("最终：%d",result);
//}
//
//int main0084(int i){
//
//    if (i == 1){
//        return 1;
//
//    } else
//    {
//        return i+main0084(i-1);
//    }
//
//}
//
//void main0085(){
//
//    int array[10][10] = {0};
////    for (int i = 0; i < 10; ++i) {
////
////        for (int j = 0; j < i; ++j) {
////
////
////            if (i == j){
////                array[i-1][j-1] = 1;
////            }
////            printf("%3d",array[i][j]);
////        }
////
////        printf("\n");
////    }
//
//    for (int k = 1; k < 10; ++k) {
//
//        for (int i = 1; i <= k; ++i) {
//
//
//            array[k][1] = 1;
//
//            //if()
//            if (k>1){
//                array[k][i] = array[k-1][i-1]+array[k-1][i];
//                printf("%3d",array[k][i]);
//            }
//
//        }
//
//        printf("\n");
//    }
//}
//
//void main0086(){
//
//    int result = main0084(10000);
//    //printf("%d",result);
//
//    main0085();
//}