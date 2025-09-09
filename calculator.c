#include <stdio.h>

int main()
{
    int operation;
    double firstnumber, secondnumber, result;

    do
    {
        printf("\n===== Simple Calculator =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your operation (1-5): ");
        scanf("%d", &operation);

        if (operation >= 1 && operation <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &firstnumber, &secondnumber);
        }

        switch (operation)
        {
        case 1:
            result = firstnumber + secondnumber;
            printf("Result: %.2lf + %.2lf = %.2lf\n", firstnumber, secondnumber, result);
            break;
        case 2:
            result = firstnumber - secondnumber;
            printf("Result: %.2lf - %.2lf = %.2lf\n", firstnumber, secondnumber, result);
            break;
        case 3:
            result = firstnumber * secondnumber;
            printf("Result: %.2lf * %.2lf = %.2lf\n", firstnumber, secondnumber, result);
            break;
        case 4:
            if (secondnumber != 0)
            {
                result = firstnumber / secondnumber;
                printf("Result: %.2lf / %.2lf = %.2lf\n", firstnumber, secondnumber, result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            printf("Exiting program...\n");
            printf("Thank you for using the calculator!\n");
            break;
        default:
            printf("Invalid operation! Please choose between 1-5.\n");
        }
    } while (operation != 5);

    return 0;
}
