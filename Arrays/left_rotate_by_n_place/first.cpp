#include<bits/stdc++.h>
/*left rotate by n places \
array being 1,2,3,4,5,6
and n being lets say 3
array will become 4,5,6,1,2,3*/
int main(){

    // take input of array 
    int size;
    std::cout<<"Enter size of array:";
    std::cin>>size;
    int array[size];

    std::cout<<"Enter elements of array\n";
    for(int i=0;i<size;i++){
        std::cout<<"array["<<i<<"]:";
        std::cin>>array[i];}
    // get n
    int n;
    std::cout<<"Enter value of N:";
    std::cin>>n;
    // make an array of size n and store first n elements in it
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=array[i];
    }

    //move n th index element to i th index (i from 0 to n-1)
    for (int j=0;j<size-n;j++){
        array[j]=array[n+j];
    }
    // copy elements from temp ( size-n to size-1 index)
    for(int k=0;k<n;k++){
        array[size-n+k]=temp[k];
    }
    // results
    for(int k=0;k<size;k++){
        std::cout<<array[k]<<",";
    }

    return 0;
}
