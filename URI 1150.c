int main()
{

int x,y;
int num=0,sum=0;
scanf("%d",&x);

do
scanf("%d",&y);
while(x>=y);

while(y>sum)
{

sum=sum+x;
x++;
num++;

}

printf("%d\n",num);

return 0;
}
