//
// Created by 罗申申 on 2019/9/12.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

void myFInd(char *source, char *goal){

    char *sourceBak = source;

    while (*sourceBak){


        char *compSource = sourceBak;

        while (*goal){
            if (*compSource == *goal){
                printf("%s--%s\n",compSource,goal);
                compSource++;
                goal++;
            }
           if(*(goal-1) == '\0'){
               printf("匹配成功");
               return;
           }
        }
        sourceBak++;
    }



}

void main013001(){
    char *source = "iloveyou";
    char str[4] = {'l','o','v','e'};

    myFInd(source,str);

}

void main013002() {

    char *source = "yyyyyyyyluosenenyydfgyyyyylu";
    char *str = "dfg";
//    printf("%s\n",source);
//    printf("%s\n",str);

    char *bak = source;

    while (*bak) {


        char *temp = bak;

        while (*str) {
            if (*str== *temp) {
                printf("%c----%c\n", *temp, *str);
                str++;
                temp++;
            } else{
                break;
            }

        }
        bak++;
    }
}

void cp(char *new,char *old){

    printf("%s",old);
//    while (*old){
//
//        *new = *old;
//        old++;
//        new++;
//        printf("%s",old);
//    }
//
//    printf("%s",new);
    //return new;
}

int mai013003n(){

    //main013001();
    //main013002();
    char *strs = "";
    char *oldd = "l love u";
    //printf("%s",oldd);
    cp(strs,oldd);
    //printf("%s",cp(strs,old));
    return 1;
}

char *cpp(char *n,char *o){

    printf("%s\n",n);
    printf("%s\n",o);
    while (*o){
        *n = *o;
        o++;
        n++;
    }

    printf("%s\n",n);
    printf("%s\n",o);
}

void main013004(){
    char new[100] = "aaaaa";
    char old[100]= "bbbbbbb";
    printf("%s\n",new);
    printf("%s\n",old);
    //cpp(new,old);

    for (int i = 0; i < strlen(new); ++i) {
        *(new+i) = 'b';

    }
    printf("%s\n",new);
}
