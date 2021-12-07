#include <iostream>
#include <cstring>

using namespace std;

void vuln(char *name) {
        FILE *fp;
        char buf[16];
        fp = fopen(name, "r");
        fscanf(fp, "%s", buf);
        fclose(fp);
}

int main(int argc, char **argv)
{
    char x[2048];
    x[0] = '\0';
    if(argc == 2) {
        vuln(argv[1]);
    } else {
        printf("Enter a file name.\n");
    }
}
