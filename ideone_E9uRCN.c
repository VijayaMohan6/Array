#include <stdio.h>
int main(void) {
int j,a[25],b[25],c[25],i,n,m;
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

for(i=0;i<m;i++)
{
	scanf("%d",&b[i]);
}
printf("The sum of two arrays:");
if(n>m)
j=m;
else
j=n;
for(i=0;i<j;i++)
{
	c[i]=a[i]+b[i];
	printf("\n %d",c[i]);
}
	return 0;
}
