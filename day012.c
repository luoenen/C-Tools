////
//// Created by 罗申申 on 2019/9/11.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void test012(int a,int b){
//
//    printf("我是大帅哥\n");
//}
//
//void main01200(){
//
//    void (*p)(int a,int b) = test012;
//
//    p(10,20);
//    //p = 10,20;
//    printf("%p\n",p);
//    printf("%p",test012);
//}
//
//void main01202(){
//
//    char *str = "china is great";
//
//    for (int i = 0; i < 20; ++i) {
//
//        printf("%c\t",*(str+i));
//
//    }
//}
//
//void main01201(){
//
//    //int array[5] = {1,2,3,4,\0};
//    char str[100] = {'A','B','\0','E'};
//
//    char str1[100] = "AAABBBBBB\0dfgdfg";
//
//    for (int j = 0; j < 100; ++j) {
//        //printf("%c\t",str1[j]);
//    }
//    for (int i = 0; i < 100; ++i) {
//
//        //printf("%c\n",str[i]);
//    }
//
//    //char str2[5] = {'a','b','d','c','t'};
//    char str2[7] = {'n','o','t','e','p','a','d'};
//    printf("\n");
//    for (int k = 0; k < 7; ++k) {
//        printf("%c\t",str2[k]);
//    }
//
//    printf("\n");
//    printf("%s",str2);
//}
//
//void main01203(){
//
//    char *str = "china is great";
//
//    char *p = str;
//
//    while (*str){
//        printf("%c\t",*(p));
//        p++;
//        str++;
//    }
//}
//
//int main01204(){
//
//    //main01200();
//    //main01201();
//    main01203();
//    return 1;
//}
//
//void main01205(){
//
//    char command[3] = {'l','s'};
//    system(command);
//
//}
//
//void main01206(){
//
//    char str[100] = {'d'};
//    //str = {'b'};
//    char *strs = "dfgdfgdfgdfgdfg";
//    int num = 100;
//    int *i = &num;
//    printf("%p\n",i);
//    printf("%lu",strlen((char *)i));
//    for (long j = 0; j < strlen((char *)i); ++j) {
//        printf("%s\t",(char*)i);
//    }
//    printf("%s\n",(char*)i);
//    printf("%s",strs);
//}
//
//int myStrLength( char *str){
//
//    int result = 0;
//    while (*str){
//        result++;
//        str++;
//    }
//
//    return result;
//}
//
//void main01207(){
//
//    char *ch = "";
//
//}
//
//void main01208(){
//    char *str  = "ls -alh";
//    system(str);
//
//    char strsss[100];
//    sprintf(strsss,"i love you %d 年",10000);
//    printf("%s",strsss);
//    printf("\n");
//    int numss = 100;
//    char s[100];
//    sscanf(s,"i love you %d years",&numss);
//    printf("%s",s);
//}
//
//int main01209(){
//
//    //main01206();
//
////    char str[100] = {'a','b',' ','c'};
////    int num = myStrLength(str);
////    printf("%d",num);
//    main01208();
//    return 1;
//}
//
//void main01210(){
//
//    char * str = "dgdfgdfgdfgdfgdfg";
//    char *result = strchr(str,'g');
//    printf("%p\n",str);
//    printf("%p",result);
//}
//int main012(){
//    main01210();
//}