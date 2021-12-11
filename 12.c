#include <stdio.h>
#include <direct.h>

int main(int argc, char* argv[]) {
    FILE* fout;
    fopen_s(&fout,"krkpr.txt", "w");
    int t = 1;
    while (t>0) {
        char s[80];
        gets(s);
        fprintf(fout, " %s\n", s);
        fflush(fout);
        _mkdir(s);
    }
    fclose(fout);
}