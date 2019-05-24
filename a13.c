void main()
{
int i,p,count=0;
scanf("%d",&p);
for(i=1;i<=a;i++)
{
    if(p%i==0)
    {
        count++;
    }
}
if(count==2)
{
    printf("yes");
}
else
{
    printf("no");
}
}
