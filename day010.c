////
//// Created by 罗申申 on 2019/9/9.
////
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <string.h>
//#include <unistd.h>
//
//void main00011(int array[][3],int stu){
//
//    int num ;
//    srandom((unsigned)time(NULL));
//
//    for (int i = 0; i < stu; ++i) {
//
//        for (int j = 0; j < 3; ++j) {
//            num = rand()%100;
//            num = num;
//            printf("%d",num);
//            *(array[i]+j) = num;
//        }
//    }
//    printf("\n%p\n",array);
//    for (int k = 0; k < stu; ++k) {
//        for (int i = 0; i < 3; ++i) {
//
//            printf("%d\t",array[k][i]);
//        }
//
//        printf("\n");
//    }
//    //int array[3][4] = {{1,2,3,4},{3,4,5},{2,3,4}};
//}
//
//int adds(int a,int b){
//    return a+b;
//}
//
//void main000012(){
//
//    int (*p)(int a,int b) = adds;
//
//    int result = p(10,20);
//
//    printf("%d",p(10,20));
//
//}
//
//int adda(int a,int b){
//    return a+b;
//}
//
//int main0000013(int a,int b){
//
//    printf("please entry a number of 1~3\n");
//    int num;
//    scanf("%d",&num);
//
//    int result = (num == 3)?a+b:b+a;
//    printf("result =%d ",result);
//    a = a>b?a:b;
//
//    result = (num == 1)?a:b;
//
//    printf("\n%d--%d---%d",a,b,a+b);
//    return result;
//}
//
//int scans(int a,int b){
//    printf("please entry a number of 1~3\n");
//    int num;
//    scanf("%d",&num);
//    int result = 0;
//    switch (num){
//        case 1:
//            result = a>b?a:b;
//            break;
//        case 2:
//            result = a>b?b:a;
//            break;
//
//        case 3:
//            result = a+b;
//            break;
//    }
//
//    return result;
//}
//
//int myadd(int a,int b,int c){
//
//    return a+b+c;
//}
//
//void main014(){
//
//    int (*p)(int a,int b,int c) = myadd;
//
//    printf("%d",p(10,20,30));
//}
//
//int main015(){
//
//    //int array[][3] = {};
//    //main011(array,50);
//    //main000012();
////    int result = main0000013(10,20);
////
////    printf("%d",result);
//    //int result = scans(10,100);
//    //printf("%d",result);
//
//    main014();
//}
//
//int main016(){
//
//    int num ;
//    printf("%p\n",&num);
//    srandom((
//    unsigned)time(NULL));
//    num = rand()%10;
//    printf("%p\n",&num);
//    printf("%d",num);
//    int i = 100;
//    printf("%p\n",&i);
//    //printf("%d",(*)(0x7ffee566593c))
//}
//
//void main017(){
//
//    char str[100];
//
//    strcpy(str, "罗申申你好啊");
//
//    printf("%s",str);
//}
//
//char* mystrcpy(char* c1,char *c2){
//
//    char *p = malloc(sizeof(char)*strlen(c2));
//    for (int i = 0; i < strlen(c2); ++i) {
//
//       c1[i] = c2[i];
//
//    }
//
//    return c1;
//}
//
//int main018(){
//
//    //main017();
//    char str[100];
//    mystrcpy(str,"卧槽尼玛");
//    printf("%s",str);
//}
//
//void main019(){
//
//    char str[100] = "china is great";
//    memset(str,'A',10);
//    int num[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%s",str);
//    memset(num,0,40);
//
//    printf("\n");
//    for (int i = 0; i < 10; ++i) {
//        printf("%d\t",*(num+i));
//    }
//}
//
//void main0110(){
//
//    void *p = malloc(20);
//    int *px = (int *)p;
//
//    for (int i = 0; i < 5; ++i) {
//        *(px+i) = i;
//    }
//
//    printf("\n");
//    for (int j = 0; j < 5; ++j) {
//        printf("%d\t",*(px+j));
//    }
//}
//
//void main0111(){
//
//    while (1){
//
//        void *p = malloc(1024*1024*1024*4);
//        sleep(1);
//        free(p);
//    }
//}
//
//void main0112(){
//
//    int array[10000000]={0};
//
//    printf("%p",array);
//}
//
//void main0113(){
//
//    //realloc();
//    //calloc();
//    double *dp = (double *)malloc(sizeof(double)*10);
//    for (int i = 0; i < 10; ++i) {
//
//        *(dp+i) = 100;
//
//    }
//
//    for (int j = 0; j < 10; ++j) {
//
//        printf("%f\t",*(dp+j));
//    }
//
//    printf("\n");
//
//    int *ip = (int *)calloc(10, sizeof(int));
//
//    for (int k = 0; k < 10; ++k) {
//
//        *(ip+k) = 100;
//    }
//
//    for (int l = 0; l < 10; ++l) {
//
//        printf("%5d\t",*(ip+l));
//
//    }
//
//    int nuum[10] = {1,2,3,4,5,6,7,8,9,10};
//
//    int i;
//    //scans("%d",&i);
//    int *pp = realloc(nuum,80);
//
//    //printf("%\nd\n", sizeof(nuum));
//    //printf("%d", sizeof(pp));
//
//}
//
//void main0114(){
//
//    int num,addnum;
//    scanf("%d%d",&num,&addnum);
//
//    int *ip = (int *)malloc(sizeof(int)*num);
//
//    if (ip!=NULL){
//        printf("分配成功\n");
//
//        for (int i = 0; i < num; ++i) {
//            *(ip+i) = i;
//
//        }
//
//
//        for (int j = 0; j < num; ++j) {
//            printf("%3d\t",*(ip+j));
//        }
//
//        int *newip = (int *)realloc(ip,addnum);
//
//        for (int k = 0; k < num + addnum; ++k) {
//
//            *(newip+k) = k;
//        }
//
//        printf("\n");
//        for (int l = 0; l < num + addnum; ++l) {
//
//            printf("%3d\t",*(newip+l));
//        }
//    } else{
//        printf("分配失败\n");
//    }
//}
//
//void main0115(){
//
//    printf("Malloc 分配:\n");
//
//    int * mp = (int *)malloc(sizeof(int)*15);
//
//    for (int i = 0; i < 15; ++i) {
//        printf("%3d\t",*(mp+i));
//    }
//    printf("\nCalloc 分配:\n");
//
//    int *cp = (int *)calloc(15, sizeof(int));
//
//    for (int i = 0; i < 15; ++i) {
//        printf("%3d\t",*(cp+i));
//    }
//    printf("\nRealloc 分配:\n");
//
//    int num,addnum;
//    scanf("%d%d",&num,&addnum);
//
//    int *rp = (int *)malloc(sizeof(int)*num);
//
//
//    printf("\n");
//    for (int k = 0; k < num; ++k) {
//        printf("%3d\t",*(rp+k));
//    }
//
//    int *nrp = (int *)realloc(rp,addnum);
//    for (int l = 0; l < num + addnum; ++l) {
//
//        //*(nrp+l) = l;
//
//    }
//    printf("\n");
//    for (int k = 0; k < num+addnum; ++k) {
//        printf("%3d\t",*(nrp+k));
//    }
//}
//
//int main0116(){
//
//    //main019();
//    //main0110();
//    //main0111();
//    //main0112();
//    //main0113();
//    //main0114();
//
//    main0115();
//}
//
//void main0117(){
//
//    int a = 10;
//    int b = 20;
//    a = a+b;
//    b = a - b;
//    a = a -b;
//    printf("%d\n",a);
//    printf("%d",b);
//}
//
//void main0118(){
//
//    int a = 20;
//    int b = 10;
//
//    int *ap = &a;
//    int *bp = &b;
//
//    *(ap) = *(ap)+*(bp);
//    *(bp) = *(ap) - *(bp);
//    *(ap) = *(ap) - *(bp);
//    printf("%d---%d",a,b);
//}
//
//void main0119(){
//
//    int i = 10;
//    int *p = &i;
//    int array[10] = {1,5,3,4,5,6};
//
//    int *ap = array;
//    *ap++;
//    printf("%d",*ap);
//}
//
//int main0120(){
//
//    //main0117();
//    //main0118();
//    main0119();
//}