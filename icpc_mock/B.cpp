#include <iostream>

using namespace std;

int main()
{
   int a, M,N,K,mul;
   
   cin >> a;
   
   for(int i=0; i<a; i++){

   
   cin>>M>>N>>K;
   mul=N*K;
   
   cout << "Case " << i+1 << ": "; 
   
   if(mul<=M)
   {
       cout<<"Yes\n";
   }
   else
   {
       cout<<"No\n";
   }
   
}
   
   
    return 0;
}
