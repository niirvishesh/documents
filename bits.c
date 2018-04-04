#include <stdio.h>

int main()
{
    int ar[50], br[50], n, i, j, count=0, bcount=0;
    printf("Enter the number of bits:\n");
    scanf("%d",&n);
	
    for(i=0;i<n;i++)
    {
	scanf("%d",&ar[i]);
    }
	
    // Bit Stuffing
    for(i=0,j=0;i<n;i++,j++)
    {
	    br[j]=ar[i];
            if(ar[i] == 1)
            {
		    count++;
            }
            if(count==5)
	    {
            	br[j+1]=0;  bcount++;
            	j++;    count=0;
       	    }
     }
     
     // Stuffed Bits: 
     for(i=0;i<n+bcount;i++)
     {
	     printf("%d ",br[i]);
     }
     return 0;
}
