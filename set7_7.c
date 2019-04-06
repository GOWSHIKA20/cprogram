
int main()
{

    
int n;
printf("enter the n:");
    scanf("%d",&n);
    while(n!=0)
    {
    if(n%10==0)
    {
        printf("%d",n);
        break;
    }
    else
    {
        n++;
    }
    }
    
 return 0;
}
