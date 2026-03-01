/*Selection sort is an algorithm in which we move the smalllest element in the first place*/
#include <bits/stdc++.h>


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
    for(int j=0;j<size;j++){
        int idx=j;
        int smallest=array[j];
        for (int k=j;k<size;k++){
            if (array[k]<smallest){
                smallest=array[k];
                idx=k;
            }
        }
        array[idx]=array[j];
        array[j]=smallest;
        std::cout<< array[j]<<",";
    }

    return 0;
}

