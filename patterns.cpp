#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <bitset>
#include <cassert>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <fstream>
using namespace std;
typedef long long ll;
typedef long double ld;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main()
{
    /* int n;
   cin>>n;

   int i=1;
   while(i<=n){
       int j=1;
       while(j<=n){
           cout<<j<<" ";
           j=j+1;

       }
       cout<<endl;

       i=i+1;

   }*/
   /*int n;
   cin>>n;

   int i=1;
   while(i<=n){
       int j=1;
       while(j<=n){
           cout<<n-j+1<<" ";
           j=j+1;

       }
       cout<<endl;

       i=i+1;

   }*/
   /*int n;
   cin>>n;

   int i=1;
   int count=1;
   
   while(i<=n){

       int j=1;
       while(j<=n){
           cout<<count<<" ";
           count=count +1;
           j=j+1;
       }
       cout<<endl;
       i=i+1;
   }*/
   /*int n;
   cin>>n;

   int row=1;
   int count=1;
   
   while(row<=n){
       int col=1;
       
       while(col<=row){
         //  cout<<row<<" ";
         //  cout<<"* ";
         cout<<count<<" ";
         count=count+1;
           col=col+1;
       }
       cout<<endl;
       row=row+1;
   }*/

   int n;
   cin>>n;

   int row=1;

   while(row<=n){
       int col=1;
       int value=row;
       while(col<=row){
           cout<<value<<" ";
           value=value+1;
           col=col+1;
       }
       cout<<endl;
       row=row+1;
   }
}