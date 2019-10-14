#include<stdio.h>
#include<string.h>
void toh(int,char,char,char);
int main(){
    toh(4,'a','b','c'); //toggle 4 from what-so-ever value you may like
}
void toh(int n,char f,char a,char t){
    if(n==0)
        return; //the simplest case...i.e. the base case for recursion
    else{
        toh(n-1,f,t,a);
        printf("\nMove disk %c to %c",f,t);
        toh(n-1,a,f,t);
    }
}//recursive algo for toh

/*
  |   |   |
  |   |   |
  |   |   |
  |   |   |
 'f' 'a' 't' ===>>These are the 3 poles : where "f" is the first pole and "a" is the auxiliary pole and "t" is the target pole.
 
 Logic :
 move the n-1 disks from the first pole to auxiliary pole taking the help of target pole recursively, 
 and then move that one disk from the first pole to the target pole, 
 after thats done then move those rest n-1 disks from the auxiliary pole to the target pole with the help of first pole recursively.
*/
