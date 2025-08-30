//switch
#include<stdio.h>
int main (void)
{
    char a;
    printf("choose your vote from person a,b or c=");
    scanf("%c",&a);
    switch(a)
    {
        case'a':
            printf("candidate a has most votes\n");
            break;
        case'b':
            printf("candidate b has most votes\n");
            break;
        case 'c':
            printf("candidate c has most votes\n");
            break;
        default:
            printf("please vote from options\n");
    }
    return 0;
}
