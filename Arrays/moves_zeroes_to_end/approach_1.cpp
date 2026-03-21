// tc=n*n

#include <bits/stdc++.h>
#include<algorithm>

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
    int zero_count=0;
    // transverse through array and count zeroes let n if n=0 exit
    for(int i=0;i<size;i++){
        if (array[i]==0){
            zero_count++;
        }
    }
    //transverse again for n times swapping zeroes to adjacent non zero element
    for(int j=0;j<zero_count;j++){
        for(int i=0;i<size-1;i++){
            if(array[i]==0 && array[i+1]!=0){
                std::swap(array[i],array[i+1]);
            }
        }
    }
    // show results
    for(int k=0;k<size;k++){
        std::cout<<array[k]<<",";
    }
    return 0;
}
