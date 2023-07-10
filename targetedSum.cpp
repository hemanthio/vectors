#include<iostream>
using namespace std;
int main()
{
int arr[6]={1,5,7,8,9,3};

int targetedvalue=10;
int sum=0;

for(int i=0;i<6;i++){
    for(int j=i+1;j<6;j++){
        if(arr[i]+arr[j]==targetedvalue){
              sum++;
         
        }
    }
}
cout<<sum

    return 0;
}