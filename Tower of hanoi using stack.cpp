#include <iostream>
#include <stack>
using namespace std;
 int main(){

   stack<int> mystack;
   int n,i,j,k;

   cout<<"Enter the number of Disks\n";

   cin>>n;

   if(n==0){
    cout<<"Stack is empty!!\n";
   }
   else{

    mystack.push(n);
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);


    while(!mystack.empty()){

     k=mystack.top();
     mystack.pop();
     j=mystack.top();
     mystack.pop();
     i=mystack.top();
     mystack.pop();
     n=mystack.top();
     mystack.pop();


       if(n==1){
        cout << "Move disk " << n << " from pole " << i << " to pole " << k << endl;
       }
       else{
        mystack.push(n-1);
        mystack.push(j);
        mystack.push(i);
        mystack.push(k);




       mystack.push(1);
       mystack.push(i);
       mystack.push(j);
       mystack.push(k);



        mystack.push(n-1);
        mystack.push(i);
        mystack.push(k);
        mystack.push(j);




    }


   }

 }

 }
