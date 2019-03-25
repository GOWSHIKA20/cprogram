int main()
{
     int t1,t2,m1,m2,a,b;
     printf("enter the t1,t2,m1,m2:");
    scanf("%d%d%d%d",&t1,&m1,&t2,&m2);
    if(t1>t2)
    a=t1-t2;
    else
    a=t2-t1;
    if(m1>m2)
    b=m1-m2;
    else
    b=m2-m1;
    printf("%d %d",a,b);

    return 0;
}
