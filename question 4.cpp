
#include<stdio.h>
int main(){
float discount;
char  membership_status;
float purchase_amount;
printf("Enter the total purchase amount: $");
    scanf("%f", &purchase_amount);
printf("what about the customer membership? (Y/N): ");
 scanf(" %c", &membership_status);
    discount= (purchase_amount > 100 && (membership_status == 'Y' || membership_status == 'y')) ? 1 : 0;
//If true, it checks if the membership status is Y(upper case) or y (lower case ) using another ternary check either it returns CONDITION FOR DISCOUNT ELIGIBILITY.
    
 if (discount) {
        printf("The customer is eligible for a discount.\n");
    } else {
        printf("The customer is not eligible for a discount.\n");
    }
 return 0;
}
