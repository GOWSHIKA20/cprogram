int main()
{
    char p[20],q[20];
    int i,j,c=0,l=0,m=0;
    scanf("%s %s",&p,&q);
    for(i=0;p[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;p[i]!='\0';i++)
    {
        for(j=i;q[j]!='\0';j++)
        {
          if(p[i]==q[j])
          c++;
          break;
        }
    }
    m=l-c;
    if(m==1)
    printf("yes");
    else
    printf("no");
}
