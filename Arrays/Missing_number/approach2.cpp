# include <iostream>
/* you will be given n-1 numbers from 1 to n and have to find one missing number*/
int main(){
    //take input of n and numbers
    int n;
    int missing_number;
    std::cout<<"Enter the n: ";
    std::cin>>n;
    
    int array[n-1];

    for(int i=0;i<n-1;i++){
        std::cout << "enter element"<<i+1<<":";
        std::cin>>array[i];
    }

    // check if every number is present or not
    for(int i=1;i<=n;i++){
        int is_present=0;
        for(int j=0;j<n-1;j++){
            if(array[j]==i){
                is_present=1;
                break;
            }
        }
        if(is_present==0){
            missing_number=i;
            break;
        }
    }
    

    std::cout<<"Missing number is :"<<missing_number;
    return 0;
}
// this has tc of O(n^2)