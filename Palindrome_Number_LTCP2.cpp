/* LTCP 2 Palindrome Number */

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {

int r,reverse=0,x=1000660001;
int n = x;

if(x<0 || (x!=0 && x%10==0))
return false;

while(n>0)
{
reverse = reverse*10 + n%10;
n/=10;
}

return reverse==x;
}
