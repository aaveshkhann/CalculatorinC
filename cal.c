#include<stdio.h>
int main(){
    float num1,num2;
    int options;

    printf("enter the value num 1\n");
    scanf("%f",&num1);
    printf("enter the value num 2\n");
    scanf("%f",&num2);
    printf("option one Addition\n");
    printf("option two subtraction\n");
    printf("option three multiplication\n");
    printf("option four power\n");
    printf("option five divide\n");

    scanf("%d",&options);

    switch(options){

       case 1:
         printf("%fnum1+%fnum2 =%f\t ",num1,num2, num1+num2);
         break;
      
        case 2:
         printf("%fnum1-%fnum2 =%f\t ",num1,num2, num1-num2);
         break;
         
          case 3:
         printf("%fnum1*%fnum2 =%f\t ",num1,num2, num1*num2);
         break;
         
          case 4:
         printf("%fnum1 ^ %f num2 =%f\t ",num1,num2, pow(num1,num2));
         break;
         
          case 5:
         printf("%fnum1 / %f num2 =%f\t ",num1,num2, num1/num2);
         break;
         
          default:
            printf("Invalid option selected.\n");
            break;
     
       }
       
       return 0;
       
}