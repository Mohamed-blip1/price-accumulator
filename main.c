#include <stdio.h>   // For: printf, scanf
#include <stdbool.h> // bool

bool is_negative_numbers_allowed();

int main()
{
    double sum = 0;

    // Default (negative numbers are not allowed)
    bool negative_numbers_choice = false;

    printf("----Welcome to your price accumulator----\n\n");

    negative_numbers_choice = is_negative_numbers_allowed();

    while (true)
    {
        // Temporary variable to check the value before assigning it
        double temp = 0;

        printf("Enter a number ([0] to exit): ");
        // If input wasn't valid
        if (scanf("%lf", &temp) != 1)
        {
            // Clear buffer
            while (getchar() != '\n')
                ;
            printf("Invalid input!\n");
            continue;
        }

        if (negative_numbers_choice == false && temp < 0)
        {
            printf("Attention you are using a negative number!!\n");
            negative_numbers_choice = is_negative_numbers_allowed();

            if (negative_numbers_choice == false)
            {
                continue;
            }
        }
        // printf("Here\n");

        // Exit
        if (temp == 0.0)
        {
            break;
        }

        // Assigning
        sum = sum + temp;

        // (%.2lf) Take two decimal digits
        printf("Total: %.2lf\n", sum);
    }

    printf("Final total: %.2lf\n", sum);
    printf("Goodbye!\n");

    return 0;
}

bool is_negative_numbers_allowed()
{
    while (true)
    {
        char choice;

        printf("Do you want to use negative numbers (y/n)? >");

        // If input wasn't valid
        if (scanf(" %c", &choice) != 1)
        {
            // Clear buffer
            while (getchar() != '\n')
                ;
            continue;
        }

        if (choice == 'y' || choice == 'Y')
        {
            printf("Negative numbers are allowed!\n");

            return true;
        }
        else if (choice == 'n' || choice == 'N')
        {
            return false;
        }
        else
        {
            printf("Invalid choice! Please enter y or n.\n");
        }
    }
}
