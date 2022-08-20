#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("example\nexample");
    printf("example\texample");
    printf("example\bexample");
    printf("example\fexample");
    printf("example\aexample");
    printf("example\rexample");
    printf("example\\example");
    printf("example\0example");
    printf("example\'example");
    printf("example\"example");
    //printf("example \xdd example");
    //printf("example \ddd example");
    return 0;
}