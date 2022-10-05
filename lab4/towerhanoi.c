#include<stdio.h>
#include<string.h>
void tower_hanoi(int n,char source,char temp,char dest);
int main()
{
    int n;
    char source,temp,dest;
    printf("Enter the no. of disks:");
    scanf("%d",&n);
    printf("Enter the source,temp and destination tower:");
    scanf("%c %c %c",&source,&temp,&dest);
    tower_hanoi(n,source,temp,dest);
    return 0;
    
}
void tower_hanoi(int n,char source,char temp,char dest)
{
    if(n == 1)
        printf("Move disk from %c to %c \n",source,dest);
    else
        tower_hanoi(n-1,source,dest,temp);
        printf("Move disk from %c to %c \n",source,dest);
        tower_hanoi(n-1,temp,source,dest);
    
}

// n=2
// Source      Temp        Destination
// A           B           C 
// 2
// 1


// A           B           C 
//             2
// 1


// A           B           C 
//             2
//                         1


// A           B           C 
//                         2
//                         1