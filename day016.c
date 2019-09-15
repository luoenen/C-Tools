//
//  main.c
//  数据结构
//
//  Created by 罗申申 on 2019/2/20.
//  Copyright © 2019 罗申申. All rights reserved.
//

#include <stdio.h>

int methodOne(int i,int n){
    int sum = (0+n)*(i/2);
    return sum;
}
int methodTwo(int i){
    int sum = 0;
    for (int j = 0; j<i; j++) {
        sum+=j;
    }
    return sum;
}

//获取长度
int size(int array[]){
    int flag = 0;
    
    while (array[flag] != '\0') {
        flag++;
    }
    
    return flag;
}

// 数组增删改查插
int addas(int array[],int e){
    
    int count = size(array);
    
    if (count<1) {
        printf("%s","线性表容量出错");
        return 1;
    }else{
        int arr[count*2+2];
        int flag = 0;
        for (int i = 0; i<count; i++) {
            arr[i] = array[i];
            flag++;
        }
        arr[flag] = e;
        
        return 1;
    }
    
    
}
//删
void delete(int array[],int i){
    
    int count = size(array);
    
    if (count<1) {
        printf("%s","线性表容量出错");
    }else{
        
    }
}

//插
//int* insert(int array[],int index,int e){
//
//    int count = size(array);
//    int arr[100];
//    if (count<1) {
//        printf("%s","线性表容量出错");
//    }else{
//        for (int i = 0; i<size(array); i++) {
//            if (i < index){
//                arr[i] = array[i];
//            }else if(i == index){
//                arr[i] = e;
//            }
//                arr[i+1] = array[i];
//
//        }
//
//
//    }
//
//    for (int i = 0; i < count; i++) {
//        printf("%d\n",arr[i]);
//    }
//    return 1;
//}

//typedef struct Node{
//    int data;
//    struct Node *nextNode;
//};






int main01(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
//    int result = methodOne(100,100);
//    int response = methodTwo(100);
//    printf("%d\n",response)t;
//    printf("%d\n",4^2);
//    int arr[10] = {1,2,3,4,5,6,7};
////    int *result = add(arr, 8);
////    for (int i = 0; i < size(result); i++) {
////        printf("%d\n",result[i]);
////    }
//
//    //delete(arr, 0);
//    int *result = insert(arr, 0, 123);
//    insertTwo(arr, 0, 10);
    
    return 0;
}
