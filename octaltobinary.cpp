//  binary to decimal conversion

 #include<bits/stdc++.h>
  using namespace std;
  
  string converter(string s)
  {
    int dec = stoi(s,nullptr,8);
    bitset<9>dtob(dec);
    return dtob.to_string();
  }
 
  int main()
  {
       int octalno;
       cin>>octalno;
       string final = to_string(octalno);
       cout<<converter(final);
       
  }