#include<stdio.h>
#include<string.h>
int main(){
    char orig[]="string_abc",rev[100];
    strcpy(rev,"");
    for(int i=0;rev[strlen(orig)-i-1]=orig[i];i++,orig[i]=='\0'?rev[i]='\0',printf("The Reverse is %s",rev):1);
}
/*
In this Code:
just replace content of "orig" with whatever string you want and reverse of it would be printed on the screen when you execute the above piece of code
*/
/*
Compilation and execution Procedure:
Fire up Terminal/or may be bash(wsl) on windows
type...
$ gcc reverse_a_string.c -o rev
$ ./rev
*/
