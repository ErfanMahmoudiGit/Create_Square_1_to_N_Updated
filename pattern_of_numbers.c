#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,vertical,horizontal,x=2,y=2,z=2,vertical2=0,horizontal2=0,e=0,q=0;
    scanf ("%d", &n);
    for (vertical=1; vertical<=(2*n)-1; vertical++)
    {
        if (vertical>n)
        {
            vertical2=vertical-x;
            printf ("%d ", vertical2);
            y=2;
            for (horizontal=2; horizontal<=2*n-2; horizontal++)
            {
                if (horizontal>n)
                    horizontal2=horizontal-z;
            if (vertical==1 || vertical==2*n-1)
            {
                if (horizontal>n)
                    {
                    printf ("%d ", horizontal-y);
                    y+=2;
                    }
                else
                    {
                    printf ("%d ", horizontal);
                    }
            }
            else if (vertical==horizontal)
            {
                    printf ("%d ", horizontal2);
                    z+=2;
            }
            else if (vertical-2-q==horizontal)
                {
                printf ("%d ", horizontal);
                q+=2;
                }
            else
                printf ("  ");
            }
            printf ("%d ", vertical2);
            x+=2;
        }
        else
            {
            printf ("%d ", vertical);
            y=2;
            for (horizontal=2; horizontal<=2*n-2; horizontal++)
            {
            if (vertical==1 || vertical==2*n-1)
            {
                if (horizontal>n)
                    {
                    printf ("%d ", horizontal-y);
                    y+=2;
                    }
                else
                    {
                    printf ("%d ", horizontal);
                    }
            }
            else if (vertical==horizontal)
            {
                    printf ("%d ", horizontal);
            }
            else if (vertical+((2*n)-4)-e==horizontal)
                {
                printf ("%d ", horizontal-((2*n)-4)+e);
                e+=2;
                }
            else
                printf ("  ");
            }
            printf ("%d ", vertical);
            }
        printf ("\n");
    }
    return 0;
}
