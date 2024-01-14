//  binary to decimal conversion

 #include<bits/stdc++.h>
  using namespace std;
 
  int main()
  {
       string s;
       cin>>s;
       int base = 1;
       int ans =0;
       for(int i = s.length()-1; i>=0; i--)
       {
           if(s[i]=='1')
           {
              ans+=base;
           }
           base*=2;
       }
       cout<<ans<<endl;
      
  }