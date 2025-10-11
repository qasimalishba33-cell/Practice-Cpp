



#include<iostream>
using namespace std;
int main()
{
    int n = 28 , sum = 0;
    for(int i = 1; i<n; i++)

if(n%i==0)
{
    sum +=i;
    cout<<i<<endl;
}

 (sum == n)?cout<<"\nperfect number.":    cout<<"\nnot perfect number.";
    
}