#include <stdio.h>
void main()
{
    int pg, frm, pgno[100], frno[100], i, j, k, l, flag, pgfault = 0, pghit = 0;
    printf("Least Recently Used Page Replacement Algorithm\nEnter No. of pages : ");
    scanf("%d", &pg);
    printf("Enter : ");
    for(i = 0; i < pg; i++)
    {
        scanf("%d", &pgno[i]);
    }
    printf("Enter No. of frames: ");
    scanf("%d", &frm);
    for(i = 0; i < frm; i++)
    {
        frno[i] = -1;
    }
    printf("\nPage\t");
    for(k = 1; k <= frm; k++)
    {
        printf("Frame%d\t", k);
    }
    printf("\n");
    for(i = 0; i < pg; i++)
    {
        flag = 0;
        for(j = 0; j < frm; j++)
        {
            if(frno[j] == pgno[i])
            {
                pghit++;
                flag = 1;
                printf("%d\t", pgno[i]);
                for(k = 0; k < frm; k++)
                {
                    printf("%d\t", frno[k]);
                }
                printf("\n");
                break;
            }
        }
        if(flag==0)
        {
            int min=999, index;
            for(j=0; j<frm; j++)
            {
                int found = 0;
                for(k=i-1; k>=0; k--)
                {
                    if(frno[j] == pgno[k])
                    {
                        found = 1;  
                        if(k < min)
                        {
                            min = k;
                            index=j;
                        }
                        break;
                    }
                }
                if(!found)
                {
                    index=j;
                    break;
                }
            }
            frno[index] = pgno[i];
            pgfault++;
            printf("%d\t", pgno[i]);
            for(k = 0; k < frm; k++)
            {
                printf("%d\t", frno[k]);
            }
            printf("\n");
        }
    }
    printf("\nTotal Page Faults : %d\n", pgfault);
    printf("Total Hits : %d\n", pghit);
}
