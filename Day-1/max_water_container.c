#include <stdio.h>
int maxarea(int* h,int hs)
{
    int l=0;
    int r=hs-1;
    int mw=0;
    while (l<r)
    {
        int hl=h[l];
        int hr=h[r];
        int w=r-l;
        int mh=hl<hr?hl:hr;
        int a=w*mh;
        mw=mw>a?mw:a;
        if(hl<hr){l++;}
        else{r--;}
    }
    return mw;
}
int main()
{
    int n;scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sz = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",maxarea(arr,sz));
    return 0;
    
}