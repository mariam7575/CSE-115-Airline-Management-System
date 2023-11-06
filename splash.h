#include<stdio.h>
int splashscreen(void)//splash screen function
{
      FILE *spl;
    spl=fopen("splash.txt","r");
    char ch;
    ch=fgetc(spl);
    while (ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(spl);
    }
    printf("\n");
    fclose(spl);
    return 0;
    fclose(spl);
    return 0;
}