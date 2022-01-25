
#include <stdio.h>
#include <string.h>

void search(char *pat, char *txt)
{
    int pattern_length = strlen(pat);
    int text_length = strlen(txt);

    for (int i = 0; i <= text_length - pattern_length; i++)
    {
        int j;

        for (j = 0; j < pattern_length; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == pattern_length)
            printf("Pattern found at index %d \n", i);
    }
}

int main()
{
    char txt[] = "bangladesh";
    char pat[] = "desh";

    search(pat, txt);
    return 0;
}