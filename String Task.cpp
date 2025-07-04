//https://codeforces.com/problemset/problem/118/A
#include <iostream>
using namespace std ;
int main() {
string s;cin>>s;
string f ;
for (int i=0;i<s.size();i++){
  if (s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='o'||s[i]=='e'||s[i]=='A'||s[i]=='I'||s[i]=='U'||s[i]=='O'||s[i]=='E'||s[i]=='y'||s[i]=='Y'){
    continue ;  
  }
 
  else {
      char z=s[i];
 if ('A'<=s[i]&&s[i]<='Z')z=s[i]+32;     
f+='.';  
   f+=z;   
  }
  
}
    
cout<<f<<endl ;
    return 0;
}
