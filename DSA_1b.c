//Tower of Hanoi problem
#include<stdio.h>

void towers(int, char, char, char);
 
int main()
{
    int n;
    printf("enter number of disks : ");
    scanf("%d", &n);
    printf("The sequence of moves involved in solving the Tower of Hanoi are :\n");
    towers(n, 'A', 'C', 'B');
    return 0;
}
void towers(int n, char source, char dest, char inter)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", source, dest);
        return;
    }
    towers(n - 1, source, inter, dest);
    printf("\n Move disk %d from peg %c to peg %c", n, source, dest);
    towers(n - 1, inter, dest, source);
}