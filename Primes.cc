//Hey everyone, my name is Alex A.K.A Aragorn in the internet and today i would like to share with you 
//some algorithm to found prime numbers.
#include <iostream>
using namespace std;
int main(){
//First Algorithm : The "classic"
//This is the classic algorithm that all we know. n is NOT a prime number if 
//you find one number (except one or itself) that is divisible by n.

//This is a simple while
int i = 2;
int n;
bool condition = false;
cin>>n;
while (i<n and not condition){
condition = n%i == 0;
++i;
}
if (not condition) cout<<n<<" is not a prime number"<<endl;
else cout<<n<<" is a prime number"<<endl;
/*
This program is OK if we have 7 years old, but i'm gonna supose you're older.
We can optimize this algorithm a little bit by only looking all the numbers before n/2. 2 is, as much, the minium divisor.
*/
int i = 2;
int n;
bool condition = false;
cin>>n;
while (i<n/2 and not condition){
condition = n%i == 0;
++i;
}
if (not condition) cout<<n<<" is not a prime number"<<endl;
else cout<<n<<" is a prime number"<<endl;

/*

Another cool solution in this section is to look only until the square root of the number. Supose, for a moment, that n is NOT a prime number.
If n is NOT a prime number we can write this n like n = a*b. a and b must be less than the square root because sqrt(n)*sqrt(n) = n.
This is a really cool solution!!!!!
*/

int i = 2;
int n;
bool condition = false;
cin>>n;
int sqrt = sqrt(n);
while (n<sqrt and not condition){
    condition = n%i == 0;
    ++i;
}
if (not condition) cout<<n<<" is not a prime number"<<endl;
else cout<<n<<" is a prime number"<<endl;

/*
WOW nice, we optimize the algorithm by looking only until the square root of a number. 
Now let's try to check another maths metods
*/
---------------------------------------------------------------------------------------------------------------------------------------------
/*
2nd algotirhm: "Wilson's theorem"
Wilson's theorem says that if n is prime , n is divisible by (n-1)!+1
I don't know if you're here for a school job, for interest or because you're a nerd like me and you enjoy maths but this theorem is 
really interesenting. Anyway, let's start coding.
*/

int factorial (int a){  //i'm not gonna do the recursive version because would be less efficient than the iterative version for a n greater.
    int f = 1;
    for (int i = 1; i<=a; ++i){
        f = f*i;

    }
    return f;
}

int n;
cin>>n;
int fact = factorial (n-1)+1;

if (fact % n == 0) cout<<n<<" is a prime number"<<endl;
else cout<<n<<" is not a prime number"<<endl;

/*
if you're a math lover probably you would be more happy with this program, but if you're a coder...
This algorithm is really interesting but probably is less efficient than the other one (looking only until the square root).
I don't know if you know maths, if not i would record you what's the factorial of a number:
The factorial of n (also know as n!) is n*(n-1)*(n-2)*(n-3).....*1
The factorial function grows up more quickly than the exponential function (well, not always... depend of the base of the exponential function)... So because that i don't thing this is a solution if we're talking about coding.
*/
-------------------------------------------------------------------------------------------------------------------------------------------------







}
