#include <stdio.h>


// Tax Slab --
// 0 - 3L = 0%
// 3L - 6L = 5%
// 6L - 9L = 10%
// 9L - 12L = 15%
// 12L - 15L = 20%
// > 15L = 30%

int incomeCalc(int income);

int main()
{   
    char name[20] ;
    int income ;
    printf("Enter Your Name : ");
    scanf("%s", name);
    printf("Your Income: ");
    scanf("%d", &income);

    printf("Dear %s\n", name);
    printf("Your Tax : Rs %d\n", incomeCalc(income));

    return 0;

}

int incomeCalc(int income)
{   
    // Divison of taxes for different slabs 
    int tax = 0;
    if(income <= 300000)
    {
        tax += 0;
    }
    else if(income > 300000 && income <= 600000)
    {   
        printf(" I am here !");
        int taxIncome = income - 300000;
        int taxValue = (5 * taxIncome)/100;
        tax += taxValue;

    }
    else if(income > 600000 && income <= 900000)
    {   
        int taxIncome1 = 300000;
        int taxValue1 = (5 * taxIncome1)/100;
        tax += taxValue1;

        int taxIncome2 = income - 600000;
        int taxValue2 = (10*taxIncome2)/100;
        tax += taxValue2;

    }
    else if(income > 900000 && income <= 1200000)
    {
        int taxIncome1 = 300000;
        int taxValue1 = (5 * taxIncome1)/100;
        tax += taxValue1;

        int taxIncome2 = 300000;
        int taxValue2 = (10*taxIncome2)/100;
        tax += taxValue2;

        int taxIncome3 = income - 900000;
        int taxValue3 = (15 * taxIncome3)/100;
        tax += taxValue3;

    }
    else if(income > 1200000 && income <= 1500000)
    {
        int taxIncome1 = 300000;
        int taxValue1 = (5 * taxIncome1)/100;
        tax += taxValue1;

        int taxIncome2 = 300000;
        int taxValue2 = (10*taxIncome2)/100;
        tax += taxValue2;

        int taxIncome3 = 300000;
        int taxValue3 = (15 * taxIncome3)/100;
        tax += taxValue3;

        int taxIncome4 = income - 1200000;
        int taxValue4 = (20 * taxIncome4)/100;
        tax += taxValue4;

    }
    else if(income >= 1500000 )
    {
        int taxIncome1 = 300000;
        int taxValue1 = (5 * taxIncome1)/100;
        tax += taxValue1;

        int taxIncome2 = 300000;
        int taxValue2 = (10*taxIncome2)/100;
        tax += taxValue2;

        int taxIncome3 = 300000;
        int taxValue3 = (15 * taxIncome3)/100;
        tax += taxValue3;

        int taxIncome4 = 300000;
        int taxValue4 = (20 * taxIncome4)/100;
        tax += taxValue4;

        int taxIncome5 = income - 1500000;
        int taxValue5 = (30* taxIncome5)/100;
        tax += taxValue5;

    }

    return tax;
    
}