#include<stdio.h>
#define max 25
void main()
{
       int frag[max],b[max],f[max],i,j,nb,nf,temp;
       static int bf[max],ff[max];
       printf("\n\t memory managment scheme-firstfit");
       printf("\n enter the number of the block:");
       scanf("%d",&nb);
       printf("enter the number of files:");
       scanf("%d",&nf);
       printf("\n enter the size of the block:\n");
       for(i=1;i<=nb;i++)
       {
	       printf("block %d:",i);
	       scanf("%d",&b[i]);
       }
       printf("enter the size the files:\n");
       for(i=1;i<nf;i++)
       {
	       printf("file %d;",i);
	       scanf("%d",&f[i]);
       }
       for(i=1;i<=nf;i++)
       {
	       for(j=1;j<=nb;j++)
	       {
		       if(bf[i]!=1)
		       {
			       temp=b[i]-f[i];
			       if(temp>=0)
			       {
				       ff[i]=j;
				       break;
			       }
		       }
	       }
	       frag[i]=temp;
	       bf[ff[i]=1];
       }
       printf("\nfile_n0:\t file_size:\t block_n0:)\t fragement");
       for(i=1;i<=nf;i++)
	       printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]],frag[i]);
       for(i=1;i<=nf;i++)
       {
	       for(j=1;j<=nb;j++)
	       {
		       if(bf[i]-f[i]);
				       if(temp>=0)
				       {
				       ff[i]=i;
				       break;
				       }
				       }
	      }
       frag[i]=temp;
       bf[ff[i]]=1;
printf("\n file_no:\t file_size:\tblock_no:\tblock_size:\t fragement");
for(i=1;i<=nf;i++)
printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],bf[ff[i]],frag[i]);
}


