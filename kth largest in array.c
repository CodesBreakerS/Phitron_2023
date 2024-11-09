//kth largest in array
#include<stdio.h>
int arr[100],n,k;
void large(){
    int pre=0;
    for(int i=0;i<k;i++){
        int lar=0;
        for(int j=0;j<n;j++){
            if(arr[j]==pre){
                arr[j]=0;
                continue;
            }
            if(arr[j]<lar){
                lar=arr[j];
            }
        }
    pre=lar;
    }
    printf("%dth largest element in array: %d",k,pre);
}

int main(){
    scanf("%d",&n);
    scanf("%d",&k);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    large();
}