#include<stdio.h>
#include<string.h>
int main(){
    char orig[]="string_abc",rev[100];;
    strcpy(rev,"");
    for(int i=0;rev[strlen(orig)-i-1]=orig[i];i++,orig[i]=='\0'?rev[i]='\0',printf("The Reverse is %s",rev):1);
}
