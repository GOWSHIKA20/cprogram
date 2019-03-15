int main(void)
{
 int s[20],len,i=0,j,k;
 char ro[2];
 
 scanf("%s",ro);
 len=strlen(ro);
 for(i=0;i<len;i++)
 {
  if(ro[i]=='I')
  s[i]=1;
  else if(ro[i]=='V')
  s[i]=5;
  else if(ro[i]=='X')
  s[i]=10;
  else if(ro[i]=='L')
  s[i]=50;
  else if(ro[i]=='C')
  s[i]=100;
  else if(ro[i]=='D')
  s[i]=500;
  else if(ro[i]=='M')
  s[i]=1000;
 }
  
k=s[len-1];
for(i=len-1;i>0;i--)
{
  if(s[i]>s[i-1])
  k=k-s[i-1];
  else if(s[i]==s[i-1] || s[i]<s[i-1])
  k=k+s[i-1];
}
printf("\n %d ",k);

}
