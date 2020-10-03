#include <stdio.h>

void main()
{
    int ar[] = {2,3,4,10,21,29,55};
    int n = 21;
    int ans = binarySearch(ar, 0, 6, n);
    printf("Element found at %d",ans);
    
}

int binarySearch(int ar[], int start, int end, int n){
    int mid = (start+end)/2;
    if (ar[mid] == n)
        return mid;
    else if(n < ar[mid]) {
        binarySearch(ar, start, mid-1, n);
    }
    else 
        binarySearch(ar, mid+1, end, n);
}