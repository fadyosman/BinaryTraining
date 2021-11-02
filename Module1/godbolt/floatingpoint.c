// Type your code here, or load an example.
#include <stdio.h>

float test(float x, float y);

int main(int argc,char **argv) {    
    float sum = test(1.5,2.5);
    printf("%f\n", sum);
}

float test(float x, float y) {
    return x+y;
}
