//
// Created by 罗申申 on 2019/9/20.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main024001(){

    char buf[1024];
    setvbuf(stdout,buf,_IOFBF,1024);
    printf("哈哈哈\n");
    while (1){

    }
}

void main024002(){

    FILE *file = fopen("/Users/luosenen/Documents/C/Program C/day015.c","a+");
    FILE *file2 = fopen("/Users/luosenen/Documents/C/Program C/day015.c","w+");
    fputs("日你奶\n",file);
    printf("%p\t%p",file,file2);
}
void main024003(){


    //day024001();
    //main024002();
    //fputs("\n草泥马",stdout);
}

void copyw(char *copy,char *write){

    FILE *file = fopen(copy,"r");
    FILE *filew = fopen(write,"a");
    if(file==NULL){
        printf("文件打开失败\n");
    }

    char co;
    while ((co = fgetc(file))!=EOF){
        fputc(co,filew);
    }
}
void main024004(){

    copyw("/Users/luosenen/Documents/C/Program C/day014.c","/Users/luosenen/Documents/C/Program C/day015.c");

}

void main024005(char *path,char *w){
    FILE *file = fopen(path,"r");
    FILE *file1 = fopen(w,"w+");

    if(file == NULL||file1 == NULL){
        printf("文件打开失败\n");
    }

    while (!feof(file)){
        char c = fgetc(file);
        //putchar(c);
        //putc(c,stdout);
        putc(c,file1);
    }

    fclose(file);
    fclose(file1);
}

void main024006(){

    main024005("/Users/luosenen/Documents/C/Program C/day001.c","../ww.txt");
}

void cipher(char *path,int password,char *goal){

    FILE *file = fopen(path,"r");
    FILE *Wfile = fopen(goal,"w");
    if(file == NULL){
        printf("文件打开失败\n");
    }

    char c;
    while ((fgetc(file))!=EOF){

        c = fgetc(file);
        fputc(c+password,Wfile);
    }

    fclose(file);
    fclose(Wfile);
}

void myread(char *path,int password){
    FILE *file = fopen(path,"r");
    if(file == NULL){
        printf("文件打开失败\n");
    }
    char c;
    while ((fgetc(file))!=EOF){

        c = fgetc(file);
        putchar(c-password);
        //fputc(c+password,Wfile);
    }

    fclose(file);

}

int main024007(){
    myread("/Users/luosenen/Documents/C/Program C/day001.c",0);
    remove("/Users/luosenen/Documents/C/Program C/day001.cc");
    //cipher("/Users/luosenen/Documents/C/Program C/day001.c",110,"/Users/luosenen/Documents/C/Program C/day001.cc");
}

void main024008(){

    FILE *file = fopen("../day001.c","r");
    char str[100];
    while (fgets(str,100,file)){

        if(strstr(str,"include")){
            printf("找到了:\t%s",str);
        }
        printf("%s",str);
    }
    fclose(file);
}

int main024009(){

    rename("../day001.cc","../day001.c");
}