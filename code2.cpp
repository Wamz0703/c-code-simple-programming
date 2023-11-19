#include<iostream>

bool isPrime(int num){
    if(num <=1){
        return false;
    }
    for(int i = 2; i*i<= num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
 
int main(){
    int count = 0;
    int num = 2;
    std::cout<<"first 100 prime numbers are:"<< std::endl;
    while(count < 100){
        if (isPrime(num)){
            std::cout<<num<<" "<<"\n";
            count++;
            
        }
        num++;
    }
    return 0;
}