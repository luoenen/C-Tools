////
//// Created by 罗申申 on 2019/9/3.
////
//
//#include <zconf.h>
//#include <stdio.h>
//
//int add(int total, ...){
//
//    int result = 0;
//    va_list list;
//    va_start(list,total);
//
//    for (int i = 0; i < total; ++i) {
//        result = result+va_arg(list,int);
//    }
//    va_end(list);
//    return result;
//}
//
//void str(int total,...){
//
//    va_list list;
//    va_start(list,total);
//
//    char str[100];
//
//    for (int i = 0; i < total; ++i) {
//        str[i] = va_arg(list,char);
//
//    }
//    printf("%s",str);
//}
//
//int intAdd(int a,int b){
//
//    return a+b;
//}
//
//void main0040(){
//
//    printf("中国\n");
//}
//
//void main0041(){
//    main0040();
//    printf("第一\n");
//
//}
//
//void main0042(){
//
//    printf("我调用自己\n");
//    sleep(0.5);
//    main0042();
//}
//
//int main0043(int result,int index){
//
//    //result+=1;
//    if (index<100){
//
//        result=result+1;
//        index++;
//        main0043(result,index);
//    } else{
//        return result;
//    }
//
//}
//
//int multiply(int i){
//
//    if (i == 1 || i == 2){//|| i == 2){
//
//
//        return 1;
//    } else{
//
//        return i+multiply(i-1);
//    }
//
//}
//
//void main0044(int i){
//    i++;
//    printf("%d\n",i);
//    main0044(i);
//}
//
//void main0045(){
//
//
//}
//
//void main004(){
//
//    //int result = add(10,1,1,1,1,1,1,1,1,1,1);
//    //printf("%d\n",result);
//
//    //str(10,'h','e','l','l','o','\0','w','o','r','l','d');
//    int result = intAdd(100,1);
//    //printf("%d",result);
//    int i = 0;
//    i = i++;
//    i = ++i;
//    i = i+i;
//    i += i;
//    //printf("%d",i);
//    //main0042();
//    //main0041();
//    //printf("%d",main0043(1,1));
//    //printf("人呢");
//    printf("结果%d",multiply(100));
//
//    //main0044(1);
//    main0045();
//}
//
