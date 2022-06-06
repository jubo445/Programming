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
   /*int a;
   cin>>a;
  // cout<<"value of a is :"<<a<<endl;
  //if a is positive
  if(a>0){
      cout<<"a is positive"<<endl;
  }else{
      cout<<"a is negative"<<endl;
  }*/
  /*int a,b;
  cout<<"Enter the number of a"<<endl;
  cin>>a;
  cout<<"Enter the number of b"<<endl;
  cin>>b;
  if(a>b){
      cout<<"A is greater"<<endl;
  }else{
  if(b>a){
      cout<<"B is greater"<<endl;
  }else{
      cout<<"Both Equals"<<endl;
  }
  }*/
/*int a;
cout<<"Enter the Value of a"<<endl;
cin>>a;
if(a>0){
    cout<<"A is Possitive"<<endl;
}else{
    if(a<0){
        cout<<"A is Negative"<<endl;
    }else{
        cout<<" A is Zero"<<endl;
    }
}*/
/*int a;
cout<<"Enter the Value of a"<<endl;
cin>>a;
if(a>0){
    cout<<"A is Possitive"<<endl;
}else if(a<0){
    cout<<"A is Negative"<<endl;
}else{
     cout<<" A is Zero"<<endl;
}*/
char ch;
cout<<"Enter the character value"<<endl;
cin>>ch;
if(ch>='a' && ch<='z'){
    cout<<"LowerCase"<<endl;
}else if(ch>='A' && ch<='Z'){
    cout<<"UpperCase"<<endl;
}else if(ch>='0' && ch<='9'){
    cout<<"Digits"<<endl;
}else{
    cout<<"Error"<<endl;
}
    

    
}