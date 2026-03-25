# include <iostream>

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

    // get xor1 (ideal) from all numbers from 1 to n
    int xor1=1;
    for(int i=1;i<=n;i++){
        xor1=xor1^i;
    }

    //get xor2 (actual) all numbers present
    int xor2=1;
    for(int i=0;i<n-1;i++){
        xor1=xor1^array[i];
    }

    // missing number = xor1^xor2
    missing_number=xor1^xor2;

    std::cout<<"Missing number is :"<<missing_number;
    return 0;
}