#include <stdio.h>
#define STRLEN 10
int main(void)
{
   char words[STRLEN];
   int i;

   while(fgets(words, STRLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while(words[i] != '\n' && words[i] != '\0')
            i++;
        if(words[i] == '\n')
            words[i] ='\0';
        else
            while((getchar() != '\n'))
                continue;
        puts(words);
    }
    puts("done");
    return 0;
}