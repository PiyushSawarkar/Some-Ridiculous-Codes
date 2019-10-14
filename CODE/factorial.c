#include <stdio.h>
int main(){
for(int i=1,j=1;i<=5;i++,j*=i,(i==5)?printf("The factorial is %d\n",j):1);
}
/*
In this Code:
just replace 5 with whatever number you want and factorial of it would be printed on the screen when you execute the above piece of code
*/
/*
Compilation and execution Procedure:
Fire up Terminal/or may be bash(wsl) on windows
type...
$ gcc factorial.c -o fact
$ ./fact
*/
