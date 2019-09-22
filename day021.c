//
// Created by 罗申申 on 2019/9/17.
//
#include <stdio.h>
#include <stdlib.h>

struct P{
    int data;
};
int main021001(){

    char i = 1;
    printf("%d",i<<10);

    struct P *p;
    struct P pp = {1};
    p = malloc(sizeof(struct P));
    p->data = 100;
    printf("\n%p",&(p->data));
    printf("\n%d",pp.data);
    return 1;
}

void readFile(char *path){

    FILE *file = fopen(path,"rb");
    char ch;
    fread(&ch,1,1,file);
    while (!feof(file)){
        printf("%c",ch);
        fread(&ch,1,1,file);
    }
    fclose(file);
}

int main021(){

    char str[100] = "罗申申";
    //fputs(str,stdout);

    char path[1000] = "/Users/luosenen/Documents/C/Program\ C/day001.c";
    fileno(path);
    FILE *f = stdout;
    fputs("你好，天朝",f);
    return 1;
}

int mains(){

    FILE *file = fopen("\"/Users/luosenen/Documents/C/Program\\\\ C/\"","rb");
    //fputs("我操你妈",file)

    return 1;
}

