#include<iostream>
using namespace std;
int main()
{
int arr[6]={3,1,2,4,0,6};

int targetedsum=5;
int sum=0;

for(int i=0;i<6;i++){
    for(int j=i+1;j<6;j++){
       for(int k=j+1;k<6;k++){
        if(arr[i]+arr[j]+arr[k]==targetedsum){
            sum++;}
        
       }
         
        }
    }

   cout<<sum;

    return 0;
}