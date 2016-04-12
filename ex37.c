#include <stdio.h>
int main()
{
    double loan_amount,interest_rate,number_of_year,total_amount,monthly_amount;
    printf("Loan amount :");
    scanf("%lf", &loan_amount );
    printf("Interest_rate :");
    scanf("%lf",&interest_rate );
    printf("Number_of_year");
    scanf("%lf", &number_of_year);
    total_amount = loan_amount + loan_amount* interest_rate *number_of_year  /100.00;
    monthly_amount = total_amount /number_of_year /12;
    printf("Total_amount : %0.2lf\n",total_amount);
    printf(",Monthly_amount : %0.2lf\n",monthly_amount);
    return 0;
}
