void main()
{
    char a[20],b[20];
    int l,l1,i,j,f,u,v;
    scanf("%s",a);
    scanf("%s",b);
    l=strlen(a);
    l1=strlen(b);
    if(l==l1)
    {
        for(i=0,j=0;i<l,j<l;i++,j++)
        {
          
                u=a[i]-a[j];
                v=b[i]-b[j];
                if(u==v)
                {
                    f=0;
                }
                else
                {
                    f=1;
                    break;
                }
            
        }
    }
    else
        printf("no\n");
    if(f==0)
    {
        printf("yes\n");
        printf("no\n");
        }
        }
