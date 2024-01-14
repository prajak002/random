//  Decimal to binary conversion

 #include<bits/stdc++.h>
  using namespace std;
 
  string converter(int n)
  {
       bitset<5>db(n);// convert decimal to binary in bitset
       return db.to_string();
       
  }
  
  int main()
  {
       int n; 
       cin>> n;
       cout<<converter(n);
       
  }