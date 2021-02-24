#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
int f = 1;
for (int i = 2; i <= n; i++)
f *= i;   
return f;
}

void series(int A, int X, int n)
{   
int nFact = factorial(n);
for (int i = 0; i < n + 1; i++) {
int niFact = factorial(n - i);
int iFact = factorial(i);
int aPow = pow(A, n - i);
int xPow = pow(X, i);
  
cout << (nFact * aPow * xPow) /
(niFact * iFact) << " ";
}
}
  

int main()
{
int A = 3, X = 4, n = 5;
series(A, X, n);
return 0;
}