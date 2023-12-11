#include <stdio.h>

int main() { 

    int a[100]; 
    int k; 
    int n; 
    int sum=0; 
    int count=0; 
    printf("Enter the size of array: "); 
    scanf("%d",&n); 
    for(int i=0;i<n;i++){ 
        printf("Enter the %d.element: ",i+1); 
        scanf("%d",&a[i]); 
    } 
    printf("Enter the k: "); 
    scanf("%d",&k); 
    for(int i=0;i<n;i++){ 
        sum=sum+a[i]; 
 } 
    int subsetSum=sum/k; 
    if(sum%k!=0){ 
        printf("False"); 
    }
    else{ 
        printf("True"); 
        for(int i=0;i<n;i++){ 
            for(int j=0;j<n;j++){ 
                if(a[i]+a[j]==subsetSum){ 
                    printf("{%d,%d}",a[i],a[j]); 
                } 
            } 
        } 
    } 

    return 0; 

}