#include <stdio.h>

int main()
{
    int operation, firstnumber, secondnumber; 
    double result;
    do
    {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your operation: ");
        scanf("%d", &operation);

        if (operation >= 1 && operation <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &firstnumber, &secondnumber);
        }

        switch (operation)
        {
        case 1:
            result = firstnumber + secondnumber;
            printf("Result: %d + %d = %.2lf\n", firstnumber, secondnumber, result);
            break;
        case 2:
            result = firstnumber - secondnumber;
            printf("Result: %d - %d = %.2lf\n", firstnumber, secondnumber, result);
            break;
        case 3:
            result = firstnumber * secondnumber;
            printf("Result: %d * %d = %.2lf\n", firstnumber, secondnumber, result);
            break;
        case 4:
            if (secondnumber != 0)
                result = (double)firstnumber / secondnumber;
            else
            {
                printf("Error 'Division by zero is not allowed'\n");
                break;
            }
            printf("Result: %d / %d = %.2lf\n", firstnumber, secondnumber, result);
            break;
        case 5:
            printf("Exit\n");
            printf("Thank you for using\n");
            break;
        default:
            printf("Invalid operator\n");
        }
    } while (operation != 5);

    return 0;
}
