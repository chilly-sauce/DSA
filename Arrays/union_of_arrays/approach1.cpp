#include <bits/stdc++.h>

/* if a1=[1,1,2,3,4,5]
 and a2=[2,3,4,4,5,6]
 
 union =[1,2,3,4,5,6]*/

int main(){
    // take array 1 size and input
    int size_arr1;
    std::cout<<"Enter size of array1:";
    std::cin>>size_arr1;
    int array1[size_arr1];

    std::cout<<"Enter elements of array1\n";
    for(int i=0;i<size_arr1;i++){
        std::cout<<"array1["<<i<<"]:";
        std::cin>>array1[i];}
    //take array 2 size and input
    int size_arr2;
    std::cout<<"Enter size of array2:";
    std::cin>>size_arr2;
    int array2[size_arr2];

    std::cout<<"Enter elements of array2\n";
    for(int i=0;i<size_arr2;i++){
        std::cout<<"array2["<<i<<"]:";
        std::cin>>array2[i];}

    // find the largest in both arrays 
    int largest=-1;
    for (int i=0;i<size_arr1;i++){
        if(array1[i]>largest){
            largest=array1[i];
        }
    }

    for (int i=0;i<size_arr2;i++){
        if(array2[i]>largest){
            largest=array2[i];
        }
    }

    // create hash array of size of largest +1
    int hash[largest+1]={0};

    // hash the elements from array 1 and 2 and count no. of unique elements in unique
    for (int i=0;i<size_arr1;i++){
        hash[array1[i]]++;
    }

    for (int i=0;i<size_arr2;i++){
        hash[array2[i]]++;
    }

    int unique=0;
    for(int i=0;i<largest+1;i++){
        if(hash[i]!=0){
            unique++;
        }
    }

    // create union array of size unique and store every index of hash array which has non zero value
    int uni[unique];
    int j=0;
    for(int i=0;i<largest+1;i++){
        if(hash[i]!=0){
            uni[j]=i;
            j++;
        }
    }
    
    // results
    for(int i=0;i<unique;i++){
        std::cout<<uni[i]<<",";
    }
    return 0;
}