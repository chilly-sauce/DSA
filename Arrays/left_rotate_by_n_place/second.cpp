# include<bits/stdc++.h>
# include <algorithm> //for swap fxn
/* left rotate by n places \
array being 1,2,3,4,5,6
and n being lets say 3
array will become 4,5,6,1,2,3*/

// function to reverse an array

void reverse (int arr[],int start , int end){
    while(start<end){
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    // take input 
    int size;
    std::cout<<"Enter size of array:";
    std::cin>>size;
    int array[size];

    std::cout<<"Enter elements of array\n";
    for(int i=0;i<size;i++){
        std::cout<<"array["<<i<<"]:";
        std::cin>>array[i];}
    // take n
    int n;
    std::cout<<"Enter value of N:";
    std::cin>>n;
    // rev array from 0 to n-1 th index 
        reverse(array,0,n-1);
    // rev array from n to size-1 th index
        reverse(array,n,size-1);
    // rev complete array
        reverse(array,0,size-1);
    // show results
    for(int k=0;k<size;k++){
        std::cout<<array[k]<<",";
    }
    return 0;
}