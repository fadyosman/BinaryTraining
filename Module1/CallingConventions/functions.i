# 1 "functions.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "functions.c"
int test(int x, int y);

int main(int argc,char **argv) {
    test(1,2);
}

int test(int x, int y) {
    return x+y;
}
