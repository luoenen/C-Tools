////
//// Created by 罗申申 on 2019/9/1.
////
//#define _CRT_SECURE_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>
//#include <math.h>
//#include <time.h>
//
//void main0020(){
//
//    while (1){
//        system("ls");
//        sleep(1);
//    }
//
//}
//
//void main0021(){
//    while (1){
//        malloc(1024*1024*1000);
//        sleep(1);
//    }
//}
//
//void main0023(){
//
//    for (int i = 0; i < 1000; ++i) {
//        int a = i%10;
//        int t = i/10%10;
//        int h = i/100;
//        double sum= pow(a,3)+pow(t,3)+pow(h,3);
//        //printf("%d",(int)sum);
//        if(i == (int)sum) {
//            printf("此数是%d,个位：%d 十位：%d 百位：%d\n", i, a, t, h);
//        }
//    }
//}
//
//int main0024(int a){
//    int wei = 0;
//    for (int i = a; i>0;i/=10) {
//
//        wei++;
//    }
//
//    return wei;
//}
//
//int getLength(int num){
//
//    int index = 0;
//    for (int i = num; i > 0; i/=10) {
//
//        index++;
//    }
//    return index;
//}
//
//int myTenMultiple(int i){
//
//    if(i==0){
//        return 1;
//    }
//    int res = 10;
//    for (int j = 0; j < i-1; j++) {
//        res*=10;
//    }
//
//    return res;
//}
//
//int revers(int num){
//    int result = 0;
//    //printf("位数：%d",getLength(num));
//    int index = 0;
//    for (int i = getLength(num)-1; i >0; i--) {
//
//
//        //printf("个位：%d\n",num/myTenMultiple(i)%10);
//        result+=(num/myTenMultiple(i)%10)*myTenMultiple(index);
//        //printf("index:%d",index);
//        index++;
//
//    }
//    //printf("个位：%d\n",(num%10));
//    //printf("结果：%d\n",(num%10)*myTenMultiple(getLength(num)-1));
//    return result+(num%10)*myTenMultiple(getLength(num)-1);
//}
//
//void main0025(){
//
//    int i1 = 1;
//    int i2 = 1;
//    int i3 = 0;
//    for (int i = 0; i < 38; ++i) {
//        i3 =  i1+i2;
//        i1 = i2;
//        i2 = i3;
//    }
//
//    printf("斐波那契数列：%d",i3);
//}
//
//int main0026(){
//    int result = 0;
//    for (int i = 0; i < 300; ++i) {
//        if(i%3==0){
//            continue;
//        } else{
//            result+=i;
//        }
//
//    }
//    return result;
//}
//
//double main0027(){
//
//    system("date");
//    int i = 0;
//   while (1){
//
//        printf("%d秒\n",i+1);
//        sleep(1);
//        i++;
//        if(i == 20) {
//            system("date");
//            exit(0);
//        }
//    }
//
//}
//
//void main0028(){
//
//    int num;
//    srand((
//    unsigned) time(NULL));
//    num = rand()%1000;
//    printf("随机数：%d",num);
//}
//
//int main002(){
//
//    //main0020();
//    //main0021();
//    //main0023();
//    //printf("%d",main0024(45645645));
//    //int num;
//    //scanf("%d",&num);
//    //printf("%d",getLength(num));
//    //int result = revers(num);
//
//    //printf("结果：%d",result);
//
//    //printf("My：%d",myTenMultiple(5));
//
//    //main0025();
//    int result = main0026();
//    //printf("300以内不能被3整除相加为：%d",result);
//    //main0027();
//    main0028();
//    return 0;
//}
//
