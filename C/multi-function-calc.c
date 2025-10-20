#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    char cont;

menu:  // Label for goto
    printf("=====================================\n");
    printf("   Welcome to Multi-Functional Calc  \n");
    printf("=====================================\n");

    printf("Choose an option:\n");
    printf("1. Simple Calculator (+,-,*,/)\n");
    printf("2. Age Calculator\n");
    printf("3. Time Calculator (Add Hours & Minutes)\n");
    printf("4. Temperature Converter\n");
    printf("5. BMI Calculator\n");
    printf("6. Interest Calculator\n");
    printf("7. Factorial Calculator\n");
    printf("8. Prime Number Checker\n");
    printf("9. LCM & GCD Calculator\n");
    printf("10. Percentage & Grade Calculator\n");
    printf("11. Area & Perimeter Calculator\n");
    printf("12. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        double num1, num2;
        char op;
        printf("Enter number1 operator number2 (example: 5 * 3): ");
        scanf("%lf %c %lf", &num1, &op, &num2);
        if (op == '+') printf("Result: %.2lf\n", num1 + num2);
        else if (op == '-') printf("Result: %.2lf\n", num1 - num2);
        else if (op == '*') printf("Result: %.2lf\n", num1 * num2);
        else if (op == '/') {
            if (num2 != 0) printf("Result: %.2lf\n", num1 / num2);
            else printf("Error: Division by zero!\n");
        } else printf("Invalid operator!\n");
    }

    else if (choice == 2) {
        int birthYear, currentYear;
        printf("Enter your birth year: ");
        scanf("%d", &birthYear);
        printf("Enter current year: ");
        scanf("%d", &currentYear);
        printf("Your age is: %d years\n", currentYear - birthYear);
    }

    else if (choice == 3) {
        int h1, m1, h2, m2;
        printf("Enter first time (hours minutes): ");
        scanf("%d %d", &h1, &m1);
        printf("Enter second time (hours minutes): ");
        scanf("%d %d", &h2, &m2);
        int totalMin = (h1 + h2) * 60 + (m1 + m2);
        printf("Total Time: %d Hours %d Minutes\n", totalMin / 60, totalMin % 60);
    }

    else if (choice == 4) {
        double c, f;
        int opt;
        printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter option: ");
        scanf("%d", &opt);
        if (opt == 1) {
            printf("Enter Celsius: ");
            scanf("%lf", &c);
            f = (c * 9 / 5) + 32;
            printf("Fahrenheit: %.2lf\n", f);
        } else {
            printf("Enter Fahrenheit: ");
            scanf("%lf", &f);
            c = (f - 32) * 5 / 9;
            printf("Celsius: %.2lf\n", c);
        }
    }

    else if (choice == 5) {
        double weight, height;
        printf("Enter weight (kg): ");
        scanf("%lf", &weight);
        printf("Enter height (m): ");
        scanf("%lf", &height);
        double bmi = weight / (height * height);
        printf("BMI = %.2lf\n", bmi);
        if (bmi < 18.5) printf("Underweight\n");
        else if (bmi < 24.9) printf("Normal\n");
        else if (bmi < 29.9) printf("Overweight\n");
        else printf("Obese\n");
    }

    else if (choice == 6) {
        double p, r, t;
        printf("Enter Principal, Rate(%%), Time(years): ");
        scanf("%lf %lf %lf", &p, &r, &t);
        double si = (p * r * t) / 100;
        printf("Simple Interest = %.2lf\n", si);
    }

    else if (choice == 7) {
        int n, fact = 1;
        printf("Enter a number: ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) fact *= i;
        printf("Factorial of %d = %d\n", n, fact);
    }

    else if (choice == 8) {
        int n, flag = 1;
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n <= 1) flag = 0;
        else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) { flag = 0; break; }
            }
        }
        if (flag) printf("%d is Prime\n", n);
        else printf("%d is Not Prime\n", n);
    }

    else if (choice == 9) {
        int a, b, lcm, gcd, temp1, temp2;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        temp1 = a; temp2 = b;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a;
        lcm = (temp1 * temp2) / gcd;
        printf("GCD = %d, LCM = %d\n", gcd, lcm);
    }

    else if (choice == 10) {
        int marks, total;
        printf("Enter marks and total: ");
        scanf("%d %d", &marks, &total);
        double perc = (marks * 100.0) / total;
        printf("Percentage = %.2lf%%\n", perc);
        if (perc >= 90) printf("Grade: A\n");
        else if (perc >= 75) printf("Grade: B\n");
        else if (perc >= 50) printf("Grade: C\n");
        else printf("Grade: F\n");
    }

    else if (choice == 11) {
        int opt;
        printf("1. Circle\n2. Rectangle\n3. Square\nEnter option: ");
        scanf("%d", &opt);
        if (opt == 1) {
            double r;
            printf("Enter radius: ");
            scanf("%lf", &r);
            printf("Area = %.2lf, Perimeter = %.2lf\n", M_PI * r * r, 2 * M_PI * r);
        } else if (opt == 2) {
            double l, w;
            printf("Enter length and width: ");
            scanf("%lf %lf", &l, &w);
            printf("Area = %.2lf, Perimeter = %.2lf\n", l * w, 2 * (l + w));
        } else {
            double side;
            printf("Enter side: ");
            scanf("%lf", &side);
            printf("Area = %.2lf, Perimeter = %.2lf\n", side * side, 4 * side);
        }
    }

    else if (choice == 12) {
        printf("Exiting program...\n");
        return 0;
    }

    else {
        printf("Invalid choice!\n");
    }

    // Ask user if they want to continue
    printf("\nDo you want to continue? (y/n): ");
    scanf(" %c", &cont);  // note the space before %c to consume newline
    if (cont == 'y' || cont == 'Y') goto menu;

    printf("Goodbye!\n");
    return 0;
}
