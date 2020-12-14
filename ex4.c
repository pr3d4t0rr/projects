/*

km to miles
inches to foot
cm to inches
pound to kgs
inches to meters

*/

#include <stdio.h>
int main()
{
    int a, b, c;
    double input;

retype:
    printf("Use these numbers for reference to the units you want to convert into\n 1- km to miles\n 2- inches to foot\n 3- cm to inches\n 4- pound to kgs\n 5- inches to meters\n");
    scanf("%d", &a);
    printf("You have chosen %d. press 1 to continue or 2 to retype\n", a);
    scanf("%d", &b);
    if (b == 1)
    {
        printf("enter the number which you want to convert\n");
        scanf("%lf", &input);
        switch (a)
        {
        case 1:
            printf("%lf km = %lf miles\n", input, input * 0.62);
            break;

        case 2:
            printf("%lf inches = %lf foot\n", input, input * 0.08);
            break;

        case 3:
            printf("%lf cm = %lf inches\n", input, input * 0.39);
            break;

        case 4:
            printf("%lf pound = %lf kg\n", input, input * 0.45);
            break;

        case 5:
            printf("%lf inches = %lf meter\n", input, input * 0.02);
            break;

        default:
            printf("error 404");
            break;
        }
    }
    else
    {
        goto retype;
    }

    printf("if you want to convert again press 1 else press 0\n");
    scanf("%d", &c);

    if (c == 1)
    {
        goto retype;
    }
    else
    {
        printf("thank you!");
    }

    return 0;
}
