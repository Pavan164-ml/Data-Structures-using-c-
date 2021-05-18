# include<stdio.h>
# include<stdlib.h>
int main()
{
    int n ;
    printf("Enter n value :");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    int first = 0;
    int last = n-1;
    int temp = 0 ;
    while(first<last)
    {
        temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp ;
        first++;
        last--;
    }
    printf("*********\n");
    printf("The reversed array is :\n");
    for(int k = 0 ; k < n ; k++)
    {
        printf("%d\n",arr[k]);
    }
}