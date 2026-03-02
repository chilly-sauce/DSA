/*Merge Sort */
#include <bits/stdc++.h>

int merge(int arr[],int low,int mid,int high){
    int temp[high+1-low];
    int i=0;//pointer for temp array
    int left=low;
    int right=mid+1;

    /*if left<=mid && right<=high condition is true that means that 
    neither of two are fully exhausted */

    while(left<=mid && right<=high){
        // array from left is smaller than that of right so it get added to temp
        if (arr[left]<=arr[right]){
            temp[i]=arr[left];
            left++; // move the left pointer to next number
            i++;
        }
        else{
            //if right element is smaller
            temp[i]=arr[right];
            right++; // moving right pointer
            i++;
        }
    }
    // when 1st condition is false that means one side is exhausted and the other side to be added as it is
    // right is exhausted
    while(left<=mid){
        temp[i]=arr[left];
        left++;
        i++;
    }
    //left is exhausted
    while(right<=high){
        temp[i]=arr[right];
        right++;
        i++;
    }
    // rearanging in array
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
int merge_sort(int arr[],int low,int high){
    int mid;
    if (low>=high){
        return 0;
    }
    mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int size;
    // take size of array
    std::cout<<"Enetr size of array:";
    std::cin>>size;

    //declare array
    int array[size];

    // take input of elements
    for (int i=0;i<size;i++){
        std::cout<<"A["<<i<<"]:";
        std::cin>>array[i];
    }

    //sorting
    merge_sort(array,0,size-1);

    for(int x=0;x<size;x++){
        std::cout<<array[x]<<",";
    }

    return 0;
}

