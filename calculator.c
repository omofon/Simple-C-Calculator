#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    float valueOne, valueTwo, answer;
    char operator;
    int validInput;

    do {
        printf("Enter calculation (format: number operator number)\n");
        printf("Supported operators: +, -, *, /, ^, s (for square root)\n");
        
        validInput = scanf("%f %c %f", &valueOne, &operator, &valueTwo);
        
        if (validInput != 3) {
            printf("Invalid input format. Please try again.\n");
            clearInputBuffer();
            continue;
        }

        // Convert operator to lowercase if it's a letter
        operator = tolower(operator);

        switch (operator) {
            case '/':
                if (valueTwo == 0) {
                    printf("Error: Division by zero!\n");
                    continue;
                }
                answer = valueOne / valueTwo;
                break;
                
            case '*':
                answer = valueOne * valueTwo;
                break;
                
            case '+':
                answer = valueOne + valueTwo;
                break;
                
            case '-':
                answer = valueOne - valueTwo;
                break;
                
            case '^':
                answer = pow(valueOne, valueTwo);
                break;
                
            case 's':
                if (valueOne < 0) {
                    printf("Error: Cannot calculate square root of a negative number!\n");
                    continue;
                }
                answer = sqrt(valueOne);
                printf("sqrt(%.6g) = %.6g\n", valueOne, answer);
                clearInputBuffer();
                return 0;
                
            default:
                printf("Error: Invalid operator!\n");
                clearInputBuffer();
                continue;
        }

        printf("%.6g %c %.6g = %.6g\n", valueOne, operator, valueTwo, answer);
        clearInputBuffer();

        char again;
        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &again);
        clearInputBuffer();
        
        if (tolower(again) != 'y') {
            break;
        }

    } while (1);

    return 0;
}