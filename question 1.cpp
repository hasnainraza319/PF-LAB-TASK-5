#include<stdio.h>
int main(){
int age;
char citizenship_status ='c';
printf("Enter your age:");
scanf(" %d ",&age);
printf("Enter citizenship_status:");
scanf(" %c ",&citizenship_status);
if (age>=18 && citizenship_status=='c'){
printf("you are eligible for vote.\n");
}else printf("you are not eligible for vote.\n");
return 0;
}
