#include<stdio.h>
int main()
{

    char c;
    int a[26]={0};
    int i,j,k;
    int m=0;

    for(i=1;(c=getchar())!='\n';i++)
    {if(a[c-'a']!=0) a[c-'a']=-1;
        if(a[c-'a']==0) a[c-'a']=i;
}
    for(j=0,k=10000;j<26;j++)
        {if(a[j]>0) {
            if(a[j]<k) k=a[j];
    }
    else m++;
    }
    if(m==26) printf("-1");
    else printf("%d",k-1);
}
