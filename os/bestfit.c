#include<stdio.h>
#define max 25
void main()
{
	int frag[max],f[max],i,j,nb,nf,temp,lowes,lowest=1000;
	static int bf[max],ff[max];
	printf("\n enter the number of block:");
	scanf("%d",&nb);
	printf("enterthe number of files:");
       scanf("%d",&nf);
printf("enter the size of the block:\n");
for(i=1;i<nb;i++)
	printf("block %d:",i);
scanf("%d",&bf[i]);
printf("enter the sixe of the files:\n");
for(i=1;i<nf;i++)
{
	printf("file%d:",i);
	scanf("%d",&f[i]);
}
for(i=1;i<=nf;i++)
{
	for(j=1;j<=nb;j++)
	{
		if(bf[i]!=1)
		{
			temp=bf[j]-f[i];
			if(temp>=0)
				if(lowest>temp)
						{
						ff[i]=j;
						lowest=temp;
						}
						}}
	frag[i]=lowest;
	bf[ff[i]]=1;
	lowest=10000;
}
printf("\n file_no\t file_size\t block_no\t block size\t fragment");
for(i=1;i<=nf&&ff[i]!=0;i++)
printf("\n%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],bf[ff[i]],frag[i]);
}

