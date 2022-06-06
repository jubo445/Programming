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
    //Sum of Even Number
 /*   int n;
    cin>>n;

    int sum=0;
    int i=0;

    while(i<=n){
       // cout<<i<<" "<<endl;
        sum=sum+i;
        i=i+2;
    }
    cout<<"Sum of evem Number is : "<<sum<<endl;*/
    //Prime Number
    /*int n;
    cin>>n;

    int i=2;

    while(i<n ){

        if(n%i==0){
            cout<<"Not prime Number for "<<i<<endl;
        }else{
            cout<<"Prime Number For " <<i<<endl;
        }
        i=i+1;
    }
*/
//Pattern
   int n;
   cin>>n;

   int i=1;
   while(i<=n){
       int j=1;
       while(j<=n){
           cout<<i;
           j=j+1;

       }
       cout<<endl;

       i=i+1;

   }
    
}