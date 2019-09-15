////
//// Created by 罗申申 on 2019/9/13.
////
//#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>
//#include <time.h>
//#include <stdbool.h>
//#include <memory.h>
//#include <string.h>
//#include <wchar.h>
//
//void main014001(){
//
//    char str[30];
//    gets(str);
//    system(str);
//
//}
//
//void main014002(){
//
//    char str[20] = "luo";
//    char str1[20] = "8848";
//    strncat(str,str1,2);
//    printf("%s",str);
//}
//
//bool main014003(char *str1,char *str2){
//
//    return strcmp(str1,str2);
//}
//
//bool myStrcmp(char str[],char str2[]){
//
//    if(*str == '\0'||*str2 == '\0'){
//
//        printf("字符串为空\n");
//        return -1;
//    }
//
//    while (*str!='\0'){
//        if(*str!=*str2){
//
//            printf("不相等\n");
//            return -1;
//        }
//        if(*str2=='\0'){
//            printf("不相等\n");
//            return -1;
//        }
//        str++;
//        str2++;
//    }
//
//    if(*str2!='\0'){
//        printf("不相等\n");
//        return -1;
//    }
//
//    printf("相等\n");
//    return 1;
//}
//
//int main014004(){
//
//
//    char *str1 = "l  love you";
//    char *str2 = "l love you";
//    //main014001();
//    //main014002();
//    //myStrcmp(str1,str2);
//    //printf("%d",main014003(str1,str2));
//    return 1;
//}
//
//void main014005(){
//
//    char str[50] = "l love you";
//    memset(str,'A',5);
//    printf("%s",str);
//}
//
//void myMenset(char str[],char c,int length){
//
//    for (int i = 0; i < length; ++i) {
//
//        *(str+i) = c;
//    }
//}
//
//void main014006(){
//
//    wchar_t c = L'我';
//    //wprintf("%c",c);
//}
//
//void main014007(){
//
//    struct Stu{
//        char *name;
//        int age;
//    };
//
//    struct Stu stu;
//    stu.age = 22;
//    stu.name = "罗申申 ";
//
//    printf("%s",stu.name);
//}
//
//int main014008(){
//
//    //main014005();
//    char str[100] = "i love you";
//    myMenset(str,'o',5);
//    //printf("%s",str);
//    return 2;
//}
//
//struct Student{
//
//    char *name;
//    int age;
//    char *address;
//    double score;
//
//}s1,s2,s3;
//
//void initStu(struct Student student){
//    student.name = "罗申申";
//    student.age = 20;
//    student.address = "河南省";
//    student.score = 130;
//}
//
//int main014009(){
//
//    struct Student *student;
//    student =(struct Student*) malloc(sizeof(struct Student)*1);
//    initStu(*student);
//    printf("%s\n",(student->name));
//    printf("%f",(student->score));
//
//    main014007();
//    return 3;
//}
//
//struct dangdang{
//
//    char *name;
//    int num;
//}d1,d2,d3;
//
//typedef struct {
//
//    int age;
//}xiaomi;
//
//int main014010(){
//
////    struct dangdang d4;
////    d4.name = "哈哈";
////    d1.num = 100;
////    d1.name = "dang1";
////    printf("%s\n",d4.name);
////    printf("%d",d1.num);
//
//xiaomi xiao = {100};
//printf("%d",xiao.age);
//
//    return 1;
//}
//
//void main014011(){
//
//
//}
//
//struct People{
//
//    char *name;
//    int age;
//    char address[100];
//    struct Stu{
//        int score;
//    }s1;
//
//    //struct Stus2;
//} p1,p2;
//
//int main014(){
//
////    struct People p3 = {"罗申申",22,"河南财经政法大学"};
////
////    p2 = p3;
////    printf("%s\n",p3.address);
////    printf("%s\n",p2.name);
////    sprintf(p2.address,"中国");
////    printf("%s\n",p2.address);
////
////    struct People p;
////    p.s1.score = 100;
////    main014011();
//    return 1;
//}
