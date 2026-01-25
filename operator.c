//1.Apply pre-increment to a variable.
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", ++a);
    return 0;
}

//2.Apply post-increment and print the value
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", a++);
    return 0;
}

//3.Apply pre-decrement to a variable
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", --a);
    return 0;
}

//4.Increment a variable twice and print result
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    a++;
    a++;
    printf("%d", a);
    return 0;
}

//5.Decrement a variable twice and print result
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    a--;
    a--;
    printf("%d", a);
    return 0;
}

