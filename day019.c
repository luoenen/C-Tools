//
//  main.c
//  数据结构
//
//  Created by 罗申申 on 2019/2/27.
//  Copyright © 2019 罗申申. All rights reserved.
//

#include <stdio.h>


struct {

    char *name;
    int age;
}stu[10];

struct {

    char *name;
    int age;
}stud[10];

int main(){

    for (int i = 0; i < 10; ++i) {

        char * name = "罗申申";
        stu[i].name = name;
    }

    for (int j = 0; j < 10; ++j) {

        printf("%s\n",stu[j].name);
    }

    return 1;
}
