#include <stdio.h>
int main() {
    int x = 42;
    float y = 3.14;
    char c = 'A';
    
    void* ptr;

    // Point to int
    ptr = &x;
    printf("%d\n", *(int*)ptr);  // cast void* to int*

    // Point to float
    ptr = &y;
    printf("%.2f\n", *(float*)ptr);  // cast void* to float*

    // Point to char
    ptr = &c;
    printf("%p\n", ptr);  // cast void* to char*

    return 0;
}
