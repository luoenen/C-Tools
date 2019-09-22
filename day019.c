////
////  main.c
////  数据结构
////
////  Created by 罗申申 on 2019/2/27.
////  Copyright © 2019 罗申申. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct {
//
//    char *name;
//    int age;
//}stu[10];
//
//struct {
//
//    char *name;
//    int age;
//}stud[10];
//
//int main019001(){
//
//    for (int i = 0; i < 10; ++i) {
//
//        char * name = "罗申申";
//        stu[i].name = name;
//    }
//
//    for (int j = 0; j < 10; ++j) {
//
//        printf("%s\n",stu[j].name);
//    }
//
//    //printf(stu->name)
//    return 1;
//}
//
//struct dangdang{
//    int name[100];
//    char names[200];
//    char *address;
//};
//
//int main019002(){
//
//    struct dangdang *p = malloc(sizeof(struct dangdang)*10);
//
//    for (int i = 0; i < 10 ; ++i) {
//        char *address = "河南省郑州市金水区";
//        p->address = address;
//        sprintf(p->address,address);
//        p++;
//        printf("%d\n",i);
//    }
//
//    for (int j = 0; j < 10; ++j) {
//        printf("%s\n",p++->address);
//        printf("%d\n",j);
//        p++;
//    }
//
//    return 1;
//}
//
//void main019003(){
//
//}
//
//union {
//
//    double age;
//    char name[100];
//}u1;
//
//int main019004(){
//    main019003();
//
//    //printf("%u", sizeof(u1));
//    char name[100] = "罗申申";
//    u1.age = 100;
//    sprintf(u1.name,name);
//    //printf("%s\n",u1.name);
//    u1.age = 100.0;
//    printf("%s\n",u1.name);
//    printf("%f\n",u1.age);
//}
//
//
//enum level{
//
//    军委主席,总书记,团长,小兵
//};
//
//enum ls{
//    李彦宏,
//    马东敏,
//    马化腾,
//    马云,
//
//};
//
//typedef int 整形s;
//
//
//int main0019(){
//
////    enum level l1 = 军委主席;
////    enum level l2 = 小兵;
////    //printf("%d\n",l1);
////    //printf("%d\n",l2);
////
////    enum ls l = 马化腾;//马云;
////    printf("%d",l);
//
//整形s i = 100;
//
//    printf("%d\n",i);
//    return 1;
//}