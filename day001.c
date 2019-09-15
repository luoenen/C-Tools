#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void main0010(int i){

    do{
        printf("我泡%d个妞\n",i);
        i+=1;
    }while (i<=100);
}

void main0011(){

    for (int i = 0; i < 100; ++i) {

        printf("%d\n",i);
    }
}

void main0012(){

    int num;
    scanf("%d",&num);
    for (int i = 0; i < num; ++i) {
        system("ifconfig");
        printf("%d",num);
    }


}

void main0013(){

    int result=0;

    for (int i = 0; i < 100; i+=2) {

        result+=i*(i+1);
    }

    printf("%d",result);
};

void main0014(){
    int num;
    srand((unsigned)time(&num));
    num = rand()%100;
    printf("%d",num);
}

void main0015(){

    int index = 0;
    int result = 0;
    A:    for(int i = 0;i<100;i++){

        if(result<=1000){
            index++;
            printf("执行%d次",index);
            result+=100;
            printf("%d",result);
            printf("\n");
            goto A;
        }
    }
}

void main0016(int goal){

    while (1){

        if(goal==100){
            break;
        }
        goal++;
    }

    printf("goal== %d ",goal);
}

void main0017(){

    for (int k = 0; k < 1000; ++k) {
        for (int l = 0; l < 1000; ++l) {
            if(13*k+11*l==316){
                printf("解是：%d----%d",k,l);
            }
        }
    }

}

void main0018(int total){

    for (int i = 0; i < total; i++) {

        if(i%13==0){
            printf("%d膜13为0\n",i);
            continue;
        }
    }
}

void main0019(){
//    int num = 110;
//    char str[100] ;
//    sprintf(str,"hgfghfhfhfh%d",num);
//    printf("%s",str);
    int num;
    char str[100];
    //sprintf()
}

void main00110(int i){

    A: printf("你好天朝\n");goto B;
    B:printf("你好世界\n");
    i++;
    if(i>=100){
        return;
    }

    goto A;
}

void main00111(){


    sleep(100);
}

void main00112(){

    for(int i = 1;i<=9;i++){
        for(int j = 1;j<=9;j++){
            if(j>i&&j>9-i){
                printf("%d x %d = %d\t",j,i,i*j);
            }
        }
        printf("\n");
    }
}

void main00113(){

    A:    printf("锄禾日当午\n");
    goto F;
    B:printf("学C真是苦\n");
    C:printf("一本小破书\n");
    D:printf("一学一下午\n");
    E: goto A;
    F:
    return;
}

int main001() {
    printf("Hello, World!\n");
    //main0010(10);
    //main0011();
    //main0012();
    //main0013();
    //main0014();
    //main0015();
    //main0016(20);
    //main0017();
    //main0018(100);
    //main0019();
    //main00110(0);
    //main00111();
    //main00112();
    main00113();
    return 0;
}