//#include <stdio.h>
////
////int main(){
////
////    char *path = "/Users/luosenen/Documents/C/Program C/day001.c";
////
////    FILE *file = fopen(path,"r");
////    if(file == NULL){
////        printf("文件打开失败\n");
////    }
////
////    //fprintf(stdout, file);
////    //fputs('c',stdout);
////    putchar('a');
////
////
////}

#include <stdio.h>
#include <stdlib.h>

struct NOde{
    int data;
    struct NOde *prior;
    struct NOde *next;

};

struct NOde* initDoubleNode(struct NOde *node){

    return node;
}

int main022003(){

    char path[100] = "../w+.txt";

    FILE *file = fopen(path,"rb");
    if (file == NULL)
    {
        printf("文件打开失败\n");
        fclose(file);
    } else{
        printf("文件打开成功\n");
        int add[10] = {1,2,3,4,5,6};
        fwrite(add,4,6,file);
        fclose(file);
        int resadd[10] = {0,0,0,0,0,0,0};
        rewind(file);
        int res = fread(resadd,4,5,file);
        printf("%d",res);
    }


    return 1;
}

struct Students{

    struct Students *prior,*next;
    int data;

};

struct Students* initday022(struct Students *students,int e){

    students = (struct Students*)malloc(sizeof(struct Students));
    students->prior = NULL;
    students->data = e;
    students->next = NULL;
    return students;
}

int insertday022(struct Students *students,int index,int e){

    struct Students *s = students;
    int i = 0;

    while (s&&i<index-1){
        s = s->next;
        i++;
    }



    struct Students *n = malloc(sizeof(struct Students));

    if(s->next == NULL){

        n->next = NULL;
        n->data = e;
        n->prior = s;
        s->next = n;
    } else{

        n->next = s->next;
        n->prior = s;
        n->next = s;
        n->next->prior = s;

    }

    return 1;

}

int main022(){

    struct Students *students;
    students = initday022(students,45);

    insertday022(students,1,23);
    for (int i = 0; i < 2; ++i) {
        printf("%d",students->data);
        //students = students->next;
    }
    printf("%d",students->data);
    return 1;
}

