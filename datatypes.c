//1.print int variable
#include <stdio.h>
int main() {
    int a = 10;   // change to 99 for Test Case 2
    printf("%d", a);
    return 0;
}

//2.print float variable
#include <stdio.h>
int main() {
    float x = 3.5;   // change to 8.25 for Test Case 2
    printf("%.2f", x);
    return 0;
}

//3. print double variable
#include <stdio.h>
int main() {
    double d = 12.345;   // change to 99.999 for Test Case 2
    printf("%.3lf", d);
    return 0;
}

//4.print char variable
#include <stdio.h>
int main() {
    char ch = 'A';   // change to 'M' for Test Case 2
    printf("%c", ch);
    return 0;
}

//5.size of int
#include <stdio.h>
int main() {
    printf("%lu", sizeof(int));
    return 0;
}

//6.size of float
#include <stdio.h>
int main() {
    printf("%lu",sizeof(float));
    return 0;
}

//7.size of double
#include <stdio.h>
int main() {
    printf("%lu",sizeof(double));
    return 0;
}

//8.size of char
#include <stdio.h>
int main() {
    printf("%lu",sizeof(char));
    return 0;
}

//9.assign int to float
#include <stdio.h>
int main() {
    int a = 10;        
    float f = a;
    printf("%.1f", f);
    return 0;
}

//10.store char in int
#include <stdio.h>
int main() {
    char ch = 'A';     
    int x = ch;
    printf("%d", x);
    return 0;
}

//1.Print the sum of two integers using +
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a + b);
    return 0;
}

//2.Print the difference of two integers using -
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a - b);
    return 0;
}

//3.Print the product of two integers using *
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a * b);
    return 0;
}

//4.Print quotient and remainder of two integers
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Quotient=%d Remainder=%d", a / b, a % b);
    return 0;
}

//5.Add three integers and print the result
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", a + b + c);
    return 0;
}















