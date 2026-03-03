/*Selection sort is an algorithm in which we move the smalllest element in the first place*/
#include <bits/stdc++.h>

// call by address 
void swap(int *x ,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int f(int arr[],int low,int high){
    int i=low;
    int j=high;
    int pivot=arr[low];
// i<j cause when i gets greater than j that means that all element beyon are greater than pivot
    while(i<j){
        //this finds index of element greater than pivot from left
        while(arr[i]<=pivot && i<=high){
            i++;
        }
        // find index of element less than pivot from right
        while(arr[j]>pivot && j>=low){
            j--;
        }
        // swaps element at i and j to shift smaller to left and greater to right
        if(i<j){
         swap(&arr[i],&arr[j]);
        }
    }
// this executes when i and j moves past each other than we swap
// j th element(obviously smaller than pivot) with pivot as j is correct index of pivot
    swap(&arr[low],&arr[j]);
    
    return j;
}

void quick_sort(int arr[],int low,int high){
    int pivot,p_idx;
    // low < high cause this ensures if array subdivision doesnt have two element atleast the quick sort call executes
    if (low<high){
        p_idx=f(arr,low,high); // this gets the idx of pivot where its now ie its correct place
        quick_sort(arr,low,p_idx-1); // divides array elements before pivot
        quick_sort(arr,p_idx+1,high);// elements after pivot
    }
}
int main(){
    int size;
    // take size of array
    std::cout<<"Enter size of array:";
    std::cin>>size;

    //declare array
    int array[size];

    // take input of elements
    for (int i=0;i<size;i++){
        std::cout<<"A["<<i<<"]:";
        std::cin>>array[i];
    }

    //sorting
    quick_sort(array,0,size-1);
    
    for(int i=0;i<size;i++){
        std::cout<<array[i]<<",";
    }

    return 0;
}