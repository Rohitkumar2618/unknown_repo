#include<bits/stdc++.h>
using namespace std;


int fib(int n){

if(n==1 || n ==2){
        return 1;
}

int recAns1= fib(n-1);
int recAns2= fib(n-2);

return recAns1+ recAns2;
}

int main()
{

        int n;
        cin>>n;
        cout<<fib(n);
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
}