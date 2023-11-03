#include<iostream>

int main(){
int start;
int i;
int end;
int sum = 0;
std:: cout << "enter first number: ";
std:: cin >>start;
std:: cout << "\n";
std:: cout << "enter end number: ";
std:: cin >> end;
for(i = start; i <= end; i++){
   
    sum  = sum + i;
   
}
std::cout << "the sum of "<<" " << start << " and "<< " "<<end <<" "<< "is equal to"<< " "<< sum<<"\n";
return 0;
}

