#include<stdio.h>
int binary(int array[20],int left,int right,int x){
    if(right>=left){
        int mid=(left+right)/2;
        if(array[mid]==x)
        return mid;
        
        if(array[mid]>x)
        return binary(array,left,mid-1,x);         //present in left half
        
        if(array[mid]<x); 
        return binary(array,mid+1,right,x);           //present in right half
    }
    return -1;                   //if not present
}



void main(){
    int n,x,result,i,num;
    int arr[20];
    
    printf("enter number of elements in array\n");
    scanf("%d",&n);

    printf("enter array elements\n");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);  
    }
    
    printf("enter element to search\n");
    scanf("%d",&x);
    
    result=binary(arr,0,n-1,x);
    
    if(result==-1)
    printf("number not present\n");
    
    else
    printf("Number is present at position %d",result+1);
    
    


}