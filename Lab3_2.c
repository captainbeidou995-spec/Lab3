#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*Задание 3*/
void task3(void) {
    printf("Task3\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    /*Пароное не парное*/
    if (num % 2 == 0) {
        printf("1. Even number\n");
    }
    else {
        printf("1. Odd number\n");
    }

    /*Последняя 7*/
    if (abs(num % 10) == 7) {
        printf("2. Ends with 7\n");
    }
    else {
        printf("2. Does not ends with 7\n");
    }

    /*Последняя парная*/
    if (abs(num % 10) % 2 == 0) {
        printf("3. Ends with even number\n");
    }
    else {
        printf("3. Ends with odd number\n");
    }
}

/*Задание 6*/
void task6(void) {
    printf("Task 6\n");
    double v_kmh, v_ms;
    printf("Enter the speed in kilometers per hour and enter the speed in meters per second:\n");
    scanf("%lf %lf", &v_kmh, &v_ms);

    if (v_kmh > v_ms * 3.6) {
        printf("The first speed is higher\n");
    }
    else if (v_kmh < v_ms * 3.6) {
        printf("The second speed is higher\n");
    }
    else {
        printf("Both speeds are equal\n");
    }
}

/*Задание 10*/
void task10(void) {
    printf("Task 10\n");
    double R1, R2, U1, U2;
    printf("Enter the resistance of sections 1 and 2 and enter the voltage for sections 1 and 2\n");
    scanf("%lf %lf %lf %lf", &R1, &R2, &U1, &U2);

    if (R1 == 0 || R2 == 0) {
        printf("Error\n");
        return;
    }

    if (U1 / R1 > U2 / R2) {
        printf("The current in the first section is higher\n");
    }
    else if (U1 / R1 < U2 / R2) {
        printf("The current in the second section is higher\n");
    }
    else {
        printf("The current is the same in both sections\n");
    }
}

/*Задание 14*/
void task14(void) {
    printf("Task 14\n");
    int num, a;
    printf("Enter a two-digit number and 'a' number\n");
    scanf("%d %d", &num, &a);

    int ten = num / 10;
    int unit = num % 10;
    int sum = ten + unit;

    printf("The sum of the digits of %d is %d\n", num, sum);

    if (a == 0) {
        printf("Error\n");
    }
    else if (sum % a == 0) {
        printf("The sum of the digits is divisible for %d\n", a);
    }
    else {
        printf("The sum of the digits is not divisible by %d\n", a);
    }
}

/*Задание 29*/
void task29(void) {
    printf("Task 29\n");
    int m, n;
    printf("Enter m and n\n");
    scanf("%d %d", &m, &n);

    if (m > n) {
        n = m;
        printf("The numbers are not equal. Both numbers are equal to the value %d\n", m);
    }
    else if (m < n) {
        m = n;
        printf("The numbers are not equal. Both numbers are equal to the value %d\n", n);
    }
    else {
        m = 0;
        n = 0;
        printf("The numbers are equal. They are equal to 0\n");
    }
}

/*Задание 53*/
void task53(void) {
    printf("Task 53\n");
    int a, b, c;
    printf("Enter a, b, c\n");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b >= max) {
        max = b;
    }
    if (c >= max) {
        max = c;
    }

    int min = c;
    if (a <= min) {
        min = a;
    }
    if (b <= min) {
        min = b;
    }

    int sum = min + max;
    printf("Sum is %d\n", sum);

}

/*Задание 62*/
void task62(void) {
    printf("Task 62\n");
    double a, b;
    printf("Enter a and b\n");
    scanf("%lf %lf", &a, &b);

    if (a == 0) {
        if (b == 0) {
            printf("x is any real number\n");
        }
        else {
            printf("x = 0\n");
        }
    }
    else {
        if (-b / a < 0) {
            printf("There are no other x except x = 0\n");
        }
        else if (-b / a == 0) {
            printf("x=0\n");
        }
        else {
            double x2 = sqrt(-b / a);
            double x3 = -sqrt(-b / a);
            printf("x1 = 0, x2 = %lf, x3 = %lf\n", x2, x3);
        }
    }

}

/*Задание 66*/
void task66(void) {
    printf("Task 66\n");
    double A, B, W, L, H;
    printf("Enter A, B and W, L, H\n");
    scanf("%lf %lf %lf %lf %lf", &A, &B, &W, &L, &H);

    if ((W <= A && L <= B) || (W <= B && L <= A)) {
        printf("The brick is placed\n");
    }
    else if ((W <= A && H <= B) || (W <= B && H <= A)) {
        printf("The brick is placed\n");
    }
    else if ((L <= A && H <= B) || (L <= B && H <= A)) {
        printf("The brick is placed\n");
    }
    else {
        printf("The brick is not placed\n");
    }

}

/*Задание 98*/
void task98(void) {
    printf("Task 98\n");
    int k;
    printf("Enter day k (from 1 to 365)\n");
    scanf("%d", &k);

    if (k < 1 || k > 365) {
        printf("Error. The day must be between 1 and 365.\n");
        return;
    }

    int day = (k - 1) % 7 + 1;
    if (day == 6 || day == 7) {
        printf("This is Weekend\n");
    }
    else {
        printf("This is Weekday\n");
    }
}

/*Задание 105*/
void task105(void) {
    printf("Task 105\n");
    double a, b, c;
    printf("Enter a, b, c\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Error\n");
        return;
    }

    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle exists.\n");
    }
    else {
        printf("Error\n");
    }

    double t, z;
    double y = c;

    if (a >= b && a >= c) {
        y = a;
        t = b;
        z = c;
    }
    else if (b >= a && b >= c) {
        y = b;
        t = a;
        z = c;
    }
    else {
        y = c;
        t = a;
        z = b;
    }

    if (y * y < t * t + z * z) {
        printf("Acute triangle\n");
    }
    else if (y * y == t * t + z * z) {
        printf("Right triangle\n");
    }
    else if (y * y > t * t + z * z) {
        printf("Obtuse triangle\n");
    }
}

int main(void) {
    task3();
    task6();
    task10();
    task14();
    task29();
    task53();
    task62();
    task66();
    task98();
    task105();

    return 0;
}