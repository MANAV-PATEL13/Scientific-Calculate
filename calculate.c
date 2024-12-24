#include <stdio.h>
#include <math.h>
#include <string.h>

void opreration_calculator();
void power_under();
void trigonometry();
void area();
void temperature();

int main()
{
    // all cal. y or n
    int fc;    
    int att=0;
    system("clear");
    while (1)
    {
        printf("\n");
        printf(" =============================================================================================================\n");
        printf("]|                                              \033[35mCalculator\033[0m                                                   |[\n");
        printf("]|                                                                                                           |[\n");
        printf("]|                             \033[1m\033[36mWhat do you want to use Enter a number only\033[0m\033[0m                                   |[\n");
        printf("]|                                                                                                           |[\n");
        printf("]|   1. \033[33mOperation Calculator(+,-,*,/).\033[0m                       6. \033[33mTemperature\033[0m                                  |[\n");
        printf("]|   2. \033[33mPower & Under Root.\033[0m                                  7. Length                                       |[\n");
        printf("]|   3. \033[33mTrigonometry.\033[0m                                        8. Weight                                       |[\n");
        printf("]|   4. \033[33mArea\033[0m                                                                                                 |[\n");
        printf("]|   5. \033[33mLogarithm\033[0m                                                                                            |[\n");
        printf("]|                                                                                                           |[\n");
        printf("]|                                               \033[31m0. Exit\033[0m                                                     |[\n");
        printf("]|                                                                                                           |[\n");
        printf(" =============================================================================================================\n");

        printf("\nKindly Enter the number:\n");
        scanf("%d", &fc);

        if (fc == 0)
        {
            printf("\033[36mThank you for using\nGood Bye\033[0m\n");
           
            break;
        }

        switch (fc)
        {
        case 1:
            operation_calculator();
            break;

        case 2:
            power_under();            
            break;

        case 3:
            trigonometry();
            break;

        case 4:
            area();
            break;

        case 6:
             temperature();
            break;

        default:
        system("clear");
            printf("\n\033[32mUpdate coming soon\033[0m");
            break;
        }
    }

    return 0;
}
/*
                    printf("\033[COLOR_CODEm Your text here \033[0m");
                    step 1: \033[ starts the escape sequence.
                    step 2: COLOR_CODEm is replaced with the color code you want.
                    step 3: \033[0m resets the color back to default.

                    Black: 30
                    Red: 31
                    Green: 32
                    Yellow: 33
                    Blue: 34
                    Magenta: 35
                    Cyan: 36
                    White: 37
                    */
void operation_calculator(){

        // all cal. y or n
    int fc;

    // oper. cal.
    int a[100], sum = 0, i = 0, n = 0;
    char s, m;
    int min = 0;
    int mul = 1; // Initialize mul variable

                system("clear");
            while (1)
            {
                
                printf("\nEnter a operation sign(+,-,*,/): ");
                scanf(" %c", &s);
                m = 'y';

                switch (s)
                {
                case '+':
                    // sum
                    sum = 0;
                    n = 0;
                    printf("\nEnter the number for addition(enter 0 for stop):\n");
                    for (i = 0;; i++)
                    {
                        scanf("%d", &a[i]);
                        if (a[i] == 0)
                            break;
                        n++;
                    }
                    printf("\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("%d ", a[i]);
                        sum += a[i];
                    }
                    printf("\nSum of numbers is %d", sum);
                    break;

                case '-':
                    // subtract
                    n = 0;
                    printf("\nEnter the number for subtract(enter 0 for stop): \n");
                    for (i = 0;; i++)
                    {
                        scanf("%d", &a[i]);
                        if (a[i] == 0)
                            break;
                        n++;
                    }
                    printf("\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("%d ", a[i]);
                    }
                    min = a[0];
                    for (i = 1; i < n; i++)
                    {
                        min = min - a[i];
                    }

                    printf("\nSubtract of numbers is %d", min);
                    break;

                case '*':
                    // multiplication

                    n = 0;
                    mul = 1; // Reset mul to 1 for each multiplication operation
                    printf("\nEnter the number for multiplication(enter 0 for stop): \n");
                    for (i = 0;; i++)
                    {
                        scanf("%d", &a[i]);
                        if (a[i] == 0)
                            break;
                        n++;
                    }
                    printf("\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("%d ", a[i]);
                        mul *= a[i];
                    }
                    printf("\nMultiplication of numbers is %d", mul);
                    break;

                case '/':
                    // division
                    printf("\nChoose type of division:\n1.Only two number\n2.Multiple number\n  ");
                    int choice;
                    scanf("%d", &choice);
                    if (choice == 1)
                    {
                        while (m == 'y' || m == 'Y')
                        {
                            float a, b;
                            printf("\nEnter two number for division: \n");
                            scanf("%f %f", &a, &b);
                            if (b == 0)
                            {
                                printf("Error! Division by zero is not allowed.");
                            }
                            else
                            {
                                printf("Division of %.2f by %.2f is %.2f", a, b, a / b);
                            }
                            printf("\n\nDo you want to use two num. division?(y/n): ");
                            scanf(" %c", &m);
                        }
                    }
                    else
                    {
                        while (m == 'y' || m == 'Y')
                        {
                            float div;
                            n = 0;
                            printf("\nEnter the number for division(enter 0 for stop): \n");
                            for (i = 0;; i++)
                            {
                                scanf("%d", &a[i]);
                                if (a[i] == 0)
                                    break;
                                n++;
                            }
                            printf("\n");
                            for (i = 0; i < n; i++)
                            {
                                printf("%d ", a[i]);
                            }
                            div = a[0];
                            for (i = 1; i < n; i++)
                            {
                                if (a[i] == 0) {
                                    printf("\nError! Division by zero is not allowed.");
                                    div = 0; // Reset div to 0 to indicate error
                                    break;
                                }
                                div = div / a[i];
                            }

                            if (div != 0) {
                                printf("\nDivision of numbers is %3.2f", div);
                            }
                            printf("\n\nDo you want to use division again?(y/n): ");
                            scanf(" %c", &m);
                        }
                    }
                    break;

                default:
                    printf("\033[31mInvaild Operation Sign\033[0m");
                    printf("\n\033[32mTry Again\033[0m");
                    break;
                    
                }
                printf("\n\nDo you want to use 'Operation Calculator' again? (y/n): ");
                scanf(" %c", &m);
                if (m == 'n' || m == 'N')
                    break;
            }
            printf("\n");
            system("clear");
            printf("\033[33mTHANK YOU FOR USING OPERATION CALCULATOR \033[0m");

}
void power_under(){
    // power
    int p;
    float base, exponent;

    system("clear");
            while (1)
            {

                printf("\n\033[36mType Of Power Function:               Type Of Under Root  Function:\033[0m  \n");
                printf(" \n1.Square & Cube                       3.Square Root\n2.Power of (a,b)                      4.Cube Root\n                                      5.Under root of (a,b)\n                          \033[31m0.Exit\033[0m\n");
                printf("\nYour Choice: ");
                scanf("%d", &p);

                if (p == 0)
                    break;

                switch (p)
                {
                case 1:
                    printf("Number: ");
                    scanf("%f", &base);
                    printf("\nSquare of %.2f is %.2f and\nCube of %.2f is %.2f\n", base, pow(base, 2), base, pow(base, 3));
                    break;
                case 2:
                    printf("Base and power:");
                    scanf("%f %f", &base, &exponent);
                    printf("%.2f power of %.2f is %.2f\n", base, exponent, pow(base, exponent));
                    break;
                case 3:
                    printf("Enter number for square root: ");
                    scanf("%f", &base);
                    printf("Square root of %.2f is %.2f\n", base, sqrt(base));
                    break;
                case 4:
                    printf("Enter number for cube root: ");
                    scanf("%f", &base);
                    printf("Cube root of %.2f is %.2f\n", base, cbrt(base));
                    break;
                case 5:
                    printf("Enter base and root:\n");
                    scanf("%f %f", &base, &exponent);
                    printf("%.2f under the root %.2f is %.2f\n", base, exponent, pow(base, 1 / exponent));
                    break;
                default:
                    printf("\033[31mInvalid Choice\033[0m\n");
                    break;
                }
            }
            system("clear");

}
void trigonometry(){
     // tri
    int t;
    double degree;
    double val;
     system("clear");
            while (1)
            {
                printf("\n\033[36mFind value of angle:             Find angle of value( Inverse ):\033[0m  \n");
                printf("\n1.Sin(x)                         7.Arc sin(x)");
                printf("\n2.Cos(x)                         8.Arc cos(x)");
                printf("\n3.Tan(x)                         9.Arc tan(x)");
                printf("\n4.Cosec(x)                      10.Arc cosec(x)");
                printf("\n5.Sec(x)                        11.Arc sec(x)");
                printf("\n6.cot(x)                        12.Arc cot(x)");
                printf("\n\n                 \033[31m0.Exit\033[0m\n");
                printf("\nEnter your choice:");
                scanf("%d", &t);
                if (t == 0)
                {
                    break;
                }
                switch (t)
                {
                case 1:
                    printf("\nEnter the degree(sin): ");
                    scanf("%lf", &degree);
                    double radi = degree * (3.14 / 180);
                    printf("Sin(%.2lf) =  %.2lf\n", degree, sin(radi));
                    break;

                case 2:
                    printf("\nEnter the degree(cos): ");
                    scanf("%lf", &degree);
                    radi = degree * (3.14 / 180);
                    printf("Cos(%.2lf) =  %.2lf\n", degree, cos(radi));
                    break;

                case 3:
                    printf("\nEnter the degree(tan): ");
                    scanf("%lf", &degree);
                    radi = degree * (3.14 / 180);
                    if (degree == 90)
                    {
                        printf("Not defined.\n", degree);
                    }
                    else
                    {
                        printf("Tan(%.2lf) =  %.2lf\n", degree, tan(radi));
                    }
                    break;

                case 4:
                    printf("\nEnter the degree(cosec): ");
                    scanf("%lf", &degree);
                    radi = degree * (3.14 / 180);
                    if (degree == 0)
                    {
                        printf("NOt defined\n");
                    }
                    else
                    {
                        printf("Cosec(%.2lf) =  %.2lf\n", degree, 1 / sin(radi));
                    }
                    break;

                case 5:
                    printf("\nEnter the degree(sec): ");
                    scanf("%lf", &degree);
                    radi = degree * (3.14 / 180);
                    if (degree == 90)
                    {
                        printf("Not defined\n");
                    }
                    else
                    {
                        printf("Sec(%.2lf) =  %.2lf\n", degree, 1 / cos(radi));
                    }
                    break;

                case 6:
                    printf("\nEnter the degree(cot): ");
                    scanf("%lf", &degree);
                    radi = degree * (3.14 / 180);
                    if (degree == 0)
                    {
                        printf("Not defined\n");
                    }
                    else
                    {
                        printf("Tan(%.2lf) =  %.2lf\n", degree, 1 / tan(radi));
                    }
                    break;

                case 7:
                    printf("\nEnter the value(asin): ");
                    scanf("%lf", &val);
                    if (val < -1 || val > 1)
                    {
                        printf("Error: Value must be between -1 and 1.\n");
                    }
                    else
                    {
                        degree = asin(val) * (180 / 3.14);
                        printf("The angle is %.2lf Degree\n", degree);
                    }
                    break;

                case 8:
                    printf("\nEnter the value(acos): ");
                    scanf("%lf", &val);
                    if (val < -1 || val > 1)
                    {
                        printf("Error: Value must be between -1 and 1.\n");
                    }
                    else
                    {
                        degree = acos(val) * (180 / 3.14);
                        printf("The angle is %.2lf Degree\n", degree);
                    }
                    break;

                case 9:
                    printf("\nEnter the value(atan): ");
                    scanf("%lf", &val);
                    degree = atan(val) * (180 / 3.14);
                    printf("The angle is %.2lf Degree\n", degree);
                    break;

                case 10:
                    printf("\nEnter the value (acosec): ");
                    scanf("%lf", &val);
                    if (fabs(val) < 1) // fabs for convert neg. to pos. value
                    {
                        printf("Value must be |x| >= 1 for acosec.\n");
                    }
                    else
                    {
                        degree = asin(1 / val) * (180 / 3.14);
                        printf("The angle is %.2lf Degree\n", degree);
                    }
                    break;

                case 11:
                    printf("\nEnter the value(asec): ");
                    scanf("%lf", &val);
                    if (fabs(val) < 1)
                    {
                        printf("Value must be |x| >= 1 for asec.\n");
                    }
                    else
                    {
                        degree = acos(1 / val) * (180 / 3.14);
                        printf("The angle is %.2lf Degree\n", degree);
                    }
                    break;

                case 12:
                    printf("\nEnter the value (acot): ");
                    scanf("%lf", &val);
                    if (val == 0)
                    {
                        printf("Value must not be 0 for acot.\n");
                    }
                    else
                    {
                        degree = atan(1 / val) * (180 / 3.14);
                        printf("The angle is %.2lf Degree\n", degree);
                    }
                    break;

                default:
                    printf("\033[32mUpdate Coming Soon\033[0m\n");
                    break;
                }
            }
            system("clear");
}
void area(){
    system("clear");
            while (1)
            {
                printf("\n\033[36mArea Calculation Options:\033[0m\n");
                printf("1. Area of Rectangle (2D)\n");
                printf("2. Area of Triangle (2D)\n");
                printf("3. Area of Circle (2D)\n");
                printf("4. Surface Area of Cube (3D)\n");
                printf("5. Surface Area of Sphere (3D)\n");
                printf("6. Volume of Cube (3D)\n");
                printf("7. Volume of Sphere (3D)\n");
                printf("\033[31m0. Exit\033[0m\n");
                printf("\nEnter your choice: ");
                int are_cho;
                scanf("%d", &are_cho);

                if (are_cho == 0)
                {
                    break;
                }

                float length, width, height, radius, result;
                switch (are_cho)
                {
                case 1:
                    printf("\nEnter length and width of the rectangle: ");
                    scanf("%f %f", &length, &width);
                    result = length * width;
                    printf("Area of Rectangle: %.2f\n", result);
                    break;
                case 2:
                    printf("\nEnter base and height of the triangle: ");
                    scanf("%f %f", &length, &height);
                    result = 0.5 * length * height;
                    printf("Area of Triangle: %.2f\n", result);
                    break;
                case 3:
                    printf("\nEnter radius of the circle: ");
                    scanf("%f", &radius);
                    result = 3.14 * radius * radius;
                    printf("Area of Circle: %.2f\n", result);
                    break;
                case 4:
                    printf("\nEnter the side length of the cube: ");
                    scanf("%f", &length);
                    result = 6 * length * length;
                    printf("Surface Area of Cube: %.2f\n", result);
                    break;
                case 5:
                    printf("\nEnter the radius of the sphere: ");
                    scanf("%f", &radius);
                    result = 4 * 3.14 * radius * radius;
                    printf("Surface Area of Sphere: %.2f\n", result);
                    break;
                case 6:
                    printf("\nEnter the side length of the cube: ");
                    scanf("%f", &length);
                    result = length * length * length;
                    printf("Volume of Cube: %.2f\n", result);
                    break;
                case 7:
                    printf("\nEnter the radius of the sphere: ");
                    scanf("%f", &radius);
                    result = (4.0 / 3.0) * 3.14 * pow(radius, 3);
                    printf("Volume of Sphere: %.2f\n", result);
                    break;
                default:
                    printf("\033[31mInvalid Choice!\033[0m\nTry again.\n");
                    break;
                }
            }
            system("clear");
}
void temperature(){
system("clear");
            while (1)
            {
                printf("\n\033[36mTemperature Conversion Options:\033[0m\n");
                printf("1. Celsius to Fahrenheit\n");
                printf("2. Fahrenheit to Celsius\n");
                printf("3. Celsius to Kelvin\n");
                printf("4. Kelvin to Celsius\n");
                printf("5. Fahrenheit to Kelvin\n");
                printf("6. Kelvin to Fahrenheit\n");
                printf("\033[31m0. Exit\033[0m\n");
                printf("\nEnter your choice: \n");
                int te_cho;
                scanf("%d", &te_cho);

                if (te_cho == 0)
                {
                    break;
                }

                float temp, result;
                switch (te_cho)
                {
                case 1:
                    printf("Enter temperature in Celsius: ");
                    scanf("%f", &temp);
                    result = (temp * 9 / 5) + 32;
                    printf("%.2f C = %.2f F\n", temp, result);
                    break;
                case 2:
                    printf("Enter temperature in Fahrenheit: ");
                    scanf("%f", &temp);
                    result = (temp - 32) * 5 / 9;
                    printf("%.2f F = %.2f C\n", temp, result);
                    break;
                case 3:
                    printf("Enter temperature in Celsius: ");
                    scanf("%f", &temp);
                    result = temp + 273.15;
                    printf("%.2f C = %.2f K\n", temp, result);
                    break;
                case 4:
                    printf("Enter temperature in Kelvin: ");
                    scanf("%f", &temp);
                    result = temp - 273.15;
                    printf("%.2f K = %.2f C\n", temp, result);
                    break;
                case 5:
                    printf("Enter temperature in Fahrenheit: ");
                    scanf("%f", &temp);
                    result = (temp - 32) * 5 / 9 + 273.15;
                    printf("%.2f F = %.2f K\n", temp, result);
                    break;
                case 6:
                    printf("Enter temperature in Kelvin: ");
                    scanf("%f", &temp);
                    result = (temp - 273.15) * 9 / 5 + 32;
                    printf("%.2f K = %.2f F\n", temp, result);
                    break;
                default:
                    printf("\033[31mInvalid Choice\033[0m\n");
                    break;
                }
            }
            system("clear");
}





