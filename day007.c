////
//// Created by 罗申申 on 2019/9/6.
////
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <unistd.h>
//#include <zconf.h>
//
//void main0070(){
//    int num;
//    int *p = &num;
//    *p = 100;
//    printf("%d",num);
//}
//
//void initArrayList(int array[],int index){
//    int num;
//    srandom((unsigned)time(NULL));
//
//    for (int i = 0; i < index ; ++i) {
//        num = rand()%100;
//        array[i] = num;
//    }
//
//}
//
//void initTwoArray(int x,int y){
//    int num;
//    srandom((unsigned)time(NULL));
//
//    int array[x][y];
//    for (int i = 0; i < x; ++i) {
//        for (int j = 0; j < y; ++j) {
//            num = rand()%100;
//            array[i][j] = num;
//        }
//    }
//
//   // return array;
//}
//
//void main0071(){
//    int num;
//    printf("%p",&num);
//    int *p = &num;
//    *p = 10000;
//    printf("\n%d",*(&num));
//}
//
//void main0072(){
//
//    int * p = NULL;
//    int num = 0;
//    p = &num;
//    while (1){
//
//        sleep(1);
//
//        if (num>=10){
//            break;
//        }
//        num++;
//        printf("%d\n",num);
//
//        if (num == 9){
//            *p = 5;
//        }
//    }
//
//}
//
//void main0073(){
//
//    int num = 0;
//    int *p = &num;
//    printf("%lu", sizeof(*p));
//}
//
//int selfAddLoop(int i){
//
//    if(i == 1){
//        return 1;
//    } else{
//        return i+selfAddLoop(i-1);
//    }
//
//}
//
//int main0074(){
//
//    //main0070();
//    //main0071();
//    //main0073();
//    //main0072();
//    int result = selfAddLoop(100);
//    printf("%d",result);
//    return 1;
//}
//
//int main0075(){
//
//    int num = 100;
//    printf("%d--------%p\n",num,&num);
//    int *p = &num;
//    *p = *p**p;
//    printf("%d--------%p\n",num,&num);
//
//}
//
//void main0076(){
//
//    int a[10] = {1,2,3,4,5,6,7};
//
//    for (int i = 0; i < 10; ++i) {
//
//        printf("%d\n",*(a+i));
//    }
//
//}
//
//void testInt2(int total,...){
//    va_list list;
//
//    va_start(list,total);
//    //va_start(total,int);
//
//    int result = 0;
//    for (int i = 0; i < total-1; ++i) {
//        result = result+va_arg(list,int);
//
//    }
//
//    va_end(list);
//
//    printf("%d",result);
//    //return;
//
//}
//
//void main0077(){
//
//    //testInt2(10,1,2,3,4,5,6,7,8,9,10);
//    main0075();
//    main0076();
//}
//
//void main0078(){
//
//    int num = 100;
//    int *p = &num;
//    int **pp = &p;
//    printf("%d----%d",**pp,num);
//}
//
//void main0079(){
//
//    double db = 1000.0;
//    double * p = &db;
//    short *s = NULL;
//    double *pp = &p;
//    printf("double 字节:%d----double%d字节：%lu", sizeof(double), sizeof(s));
//
//}
//
//void main00710(){
//
//    short *s = NULL;
//    int *i = NULL;
//    long *l = NULL;
//    double *d = NULL;
//    printf("%d---%d---%d---%d----%d", sizeof(s), sizeof(i), sizeof(l), sizeof(double), sizeof(&d));
//}
//
//void main00711(){
//
//    double db = 11.0;
//
//    double *dp = &db;
//
//    int **dpp = &dp;
//
//    **dpp = 111.0;
//
//    char c = '1';
//    printf("%p",&c);
//    getchar();
//    //int
//   // printf("%p",(char *));
//    //printf("%f",(db));
//}
//
//void main00712(){
//
//    //main0078();
//    //main0079();
//    //main00710();
//    main00711();
//}
//
//void main00713(){
//
//}
//
//
//void main007(){
//
//    main00713();
//}