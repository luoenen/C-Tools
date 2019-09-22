////
//// Created by 罗申申 on 2019/9/19.
////
//#include <stdio.h>
//#include <stdlib.h>
//#include <opencl-c.h>
//
//void main023001(char *path){
//
//    FILE *file = fopen(path,"a+");
//    if(file==NULL){
//        printf("文件打开失败\n");
//        return;
//    }
////    char i[100] = {1,2,3,4,5,6,7,8,9,0};
////    fwrite(i, sizeof(int),100,file);
////    //fputs(i,file);
////    fclose(file);
//    char str[100] = {'a','b','c'};
//
////    for (int i = 0; i < 3; ++i) {
////        fputc(str[i],file);
////
////    }
//    fputs(str,file);
//
//    fflush(file);
//    fclose(file);
//
//
//
//}
//
//void main023002(char *path){
//
//    FILE *file = fopen(path,"wb");
//    if(file==NULL){
//        printf("文件打开失败\n");
//        return;
//    }
//    char i[100] = {1,2,3,4,5,6,7,8,9,0};
////    fread(i, sizeof(int),100,file);
////    //fputs(i,file);
//    //fgets(i,100,file);
//
//
//}
//
//void main023003(char *path){
//
//    FILE *file = fopen(path,"w+");
//    if(file==NULL){
//        printf("文件打开失败\n");
//        return;
//    }
//
//    fputs("找到自己喜欢的东西，然后把兴趣变为工作，要拥有梦想活下去，总有一天找到自己喜欢的人，幸福生活。",file);
//    fclose(file);
//
//}
//
//void main023004(char *path){
//
//    FILE *file = fopen(path,"b");
//    if(file==NULL){
//        printf("文件打开失败:\n");
//        char *str = "";
//        perror(str);
//        return;
//    }
//
//    char c = feof(file);
//    printf("%c\n",c);
//    while (c!=EOF){
//        c = feof(file);
//        printf("%c\n",c);
//    }
//    rewind(file);
//    fclose(file);
//
//}
//
//int main022005(){
//
//    //main023001("../a.txt");
//    //main023002("../a.txt");
//    //main023003("../a.txt");
//    //main023004("../aa.txt");
//
//}
//
//void main023006(char *path){
//
//    FILE *file = fopen(path,"r+");
//    if(file==NULL){
//        printf("文件打开失败:\n");
//        //char *str = "";
//        //perror(str);
//        return;
//    }
//
//    fputs("说好不哭0",file);
//    fflush(file);
//    fclose(file);
//
//}
//
//void main023007(char *path){
//
//    FILE *file = fopen(path,"r+");
//    if(file==NULL){
//        printf("文件打开失败:\n");
//        //char *str = "";
//        //perror(str);
//        return;
//    }
//
//    while (!feof(file)){
//        wchar_t c = fgetc(file);
//        putchar(c);
//
//    }
//
//    fclose(file);
//    printf("\n%ld\n",ftell(file));
//    fclose(file);
//}
//
//void main023005(char *path){
//
//    FILE *file = fopen(path,"wb");
//
//    if(file==NULL){
//        printf("文件打开失败\b");
//    }
//
//    double db[11] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
//    fwrite(db, sizeof(double),10,file);
//    fread(db, sizeof(double),10,file);
//
//    fseek(file,-16,SEEK_END);
//    double data = 1000.0;
//    fwrite(&data, sizeof(double),1,file);
//    for (int i = 0; i < 10; ++i) {
//        printf("%f\n",db[i]);
//    }
//
//    int s = remove(path);
//    char temp[100] = "../XXXXXX";
//    char g =mktemp(temp);;
//    //system()
//    printf("删除%d--%f",s,g);
//
//}
//
////void main023008(char *path){
////
////    FILE *file = fopen(path,"wb");
////
////    if(file==NULL){
////        printf("文件打开失败\b");
////    }
////
////    //double db[10] = {0};
////    //fwrite(db, sizeof(double),10,file);
////    fread(db, sizeof(double),10,file);
////
////    for (int i = 0; i < 10; ++i) {
////        printf("%f\n",db[i]);
////    }
////
////    fseek(file,-2,SEEK_END);
////    double data = 1000.0;
////    fwrite(&data, sizeof(double),1,file);
////    fflush(file);
////    fclose(file);
////
////}
//
//void main023009(){
//
//    //main023006("../a.txt");
//    //main023007("../a.txt");
//    //main023005("../a.txt");
//    //main023008("../a.txt");
//}
//
//void collect(char *path){
//
//    FILE *file = fopen(path,"w+");
//
//    if(file==NULL){
//        printf("文件打开失败\n");
//    }
//
//    char c;
//    int blank = 0;
//    int num = 0;
//    while ((c = feof(file))!=EOF){
//        if(c>='0'||c<='9'){
//            num++;
//        }
//        //printf("执行\n");
//        putchar(c);
//    }
//    fclose(file);
//    printf("空格有%d\n个",blank);
//    printf("数字有%d\n个",num);
//}
//
//int main023(){
//
//    //tempnam("/Users/luosenen/Documents/C/Program C/day015.c");
//    //tmpnam("/Users/luosenen/Documents/C/Program C/day015");
//    collect("/Users/luosenen/Documents/C/Program C/day015.c");
//}