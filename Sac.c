#include <stdio.h>
#define MAX_WEIGHT 100000
#define MAX_THINGS 100
int main(void)
{
	int capacity;
	int things[MAX_THINGS];
	int nbThings;
	int j;
	int max = 0;
	nbThings=0;
	scanf("%d",&capacity);
	int in;
	do
	{
		scanf("%d",&in);
		things[nbThings]=in;
		nbThings++;
	}while(in<0);
    int T[MAX_WEIGHT];
    int i;
    for(i=0;i<=capacity;i++)
	{
        T[i]=0;
    }
    T[0] = 1;
    for(i=0;i<nbThings;i++)
    {
        int n = things[i];
        for(j=max;j>=0;j--)
        {
            if(T[j])
            {
                if( (j+n > max ) && (j+n < capacity ))
                {
					max = j + n;
                }
				T[j+n] = 1;
            }
        }
		if(max == capacity)
		{
			break;
		}
    }
    if(T[capacity])
    {
        printf("OUI\r\n");
    }else
    {
        printf("NON\r\n");
    }
    return 0;
}
