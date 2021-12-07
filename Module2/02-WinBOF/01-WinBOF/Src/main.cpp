#include <iostream>
#include <cstring>

using namespace std;

void vuln(char *in) {
    char x[16];
    strcpy(x,in);
}

int main(int argc, char **argv)
{
    FILE *fp;
    char buf[2048];
    if(argc == 2) {
            fp = fopen(argv[1], "r");
            //fscanf(fp, "%2048s", buf);
            fread(buf, 1, 2048,fp);
            fclose(fp);
            vuln(buf);
    } else {
        printf("Enter a file name.\n");
    }
}
