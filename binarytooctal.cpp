//  binary to decimal conversion

 #include<bits/stdc++.h>
  using namespace std;
  
  string converter(string s)
  {
     int n= s.length();
      if(n%3==1)
      {
         s= "00"+s; 
      }
      if(n%3==2)
      {
          s="0"+s;
      }
      
     string ans =" "; 
     
      for(int i = 0; i<n; i+=3)
      {
          int temp =(s[i]-'0')*4+ (s[i+1]-'0')*2+ (s[i+2]-'0')*1;
          ans+=(temp+'0');
      }
      return ans;
  }
 
  int main()
  {
       string s;
       cin>>s;
       cout<<converter(s);
  }