#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a[3] = {3,4};
    
    int *p = a;
    
    printf("%p %p %p \n", a, (a+1), (a+2));
    
    printf("%p %p %p \n", &a[0], &a[1], &a[2]);
    
    printf("%d %d %d \n", a[0], a[1], a[2]);
    
    printf("%d %d %d \n", *a, *(a+1), *(a+2));
    
    printf("%d %d %d \n", *p, *(p+1), *(p+2));
    
    return 0;
}
