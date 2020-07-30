//  Created by Atharva Nadkar on 21/06/20.
//  Copyright © 2020 Atharva_Nadkar. All rights reserved.
//  Program To check whether the no. can be expressed in sum of two prime no.

#include<algorithm>
#include<stdio.h>
#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<sstream>

using namespace std;

//function to check whether the no is prime or not
bool checkprime(int num)
{
    int i,count=0;
    bool j;
       for(i=2;i<num;i++)
       {
           if(num%i==0)
           {
               count++;
               break;
           }
       }
       if(count==0)
       {
           j=1;
       }
       else
       {
           j=0;
       }
    return j;
}
 
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
    cout<<"enter the number to be checked: ";
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        if(checkprime(i) && checkprime(n-i))
        {
            cout<<n<<" = "<<i<<" + "<<n-i<<endl;
        }
    }
    return 0;
}
