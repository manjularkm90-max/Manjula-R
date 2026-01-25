//1.compare two numbers using >
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a > b);
    return 0;
}

//2.Compare two numbers using <
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a < b);
    return 0;
}

//3.Compare two numbers using ==
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a == b);
    return 0;
}

//4.Compare two numbers using !=
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a != b);
    return 0;
}

//5.Compare two numbers using >= and <=
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", a >= b, a <= b);
    return 0;
}

//logical operator

//1.Use logical AND on two non-zero values
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a && b);
    return 0;
}

//2.Use logical OR on two values
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a || b);
    return 0;
}

//3.Apply logical NOT on zero
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", !a);
    return 0;
}

//4.Apply logical NOT on non-zero value
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", !a);
    return 0;
}

//5.Check two conditions using AND and OR
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", (a && b) || (a || b));
    return 0;
}


//assignment operator
//1.Assign a value and print it
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", a);
    return 0;
}

//2.Use += operator
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    a += b;
    printf("%d", a);
    return 0;
}

//3.Use-=operator
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    a -= b;
    printf("%d", a);
    return 0;
}

//4.Use *= operator
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    a *= b;
    printf("%d", a);
    return 0;
}

//5.Use /= and %= operators
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", a / b, a % b);
    return 0;
}












