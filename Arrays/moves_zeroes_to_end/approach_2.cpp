// this approach has lower tc but in this the order changes


#include <bits/stdc++.h>
#include <algorithm>

int main(){
    // take input 
    int size;
    std::cout<<"Enter size of array:";
    std::cin>>size;
    int array[size];

    std::cout<<"Enter elements of array\n";
    for(int i=0;i<size;i++){
        std::cout<<"array["<<i<<"]:";
        std::cin>>array[i];
    }
    
    // use 2 pointer one at end one at beggining 
    int p1=0;
    int p2=size-1;
    // move first pointer if its equal to zero swap the value with end pointer's 
    while (p1<p2){
        // move both the pointers (end case when first pointer>end pointer)
        while(array[p2]==0){
            p2--;
        }
        if (array[p1]==0){
            std::swap(array[p1],array[p2]);
            p1++;
        }
    }
    
    // show results
    for(int k=0;k<size;k++){
        std::cout<<array[k]<<",";
    }
    return 0;
}