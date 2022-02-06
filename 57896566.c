#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
        int sizeofstrN,numofopratnK;
        scanf("%d %d",&sizeofstrN,&numofopratnK);
        fflush(stdin);
        
        char str[sizeofstrN];
        scanf("%s\n",str);
        
        int count=0,i,j;
        
        for(i=0,j=sizeofstrN-1;i<j;i++,j--) //using for loop
        {
            if(str[i]!=str[j])
            count++;
        }
        
        if(count<=numofopratnK)
        {
            if(sizeofstrN%2==1)
            {
                printf("yes\n");
            }
            else if((numofopratnK-count)%2==0)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
        else
        {
            printf("no\n");
        }
        }
        return 0;
    }
    //Code By Bhumika Nayak
    