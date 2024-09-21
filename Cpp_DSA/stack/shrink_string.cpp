#include<bits/stdc++.h>
using namespace std;

int main(){
      string s;
      cin>>s;
      int k; cin>>k;
      stack<pair<char, int>> st;
      for(int i=0;i<s.length();i++){
            if(st.empty() == false && st.top().first == s[i]){
                  if(st.top().second == k-1){
                        while(st.empty()!=true && st.top().first == s[i]){
                              st.pop();
                        }
                  }else{
                        st.push({s[i], st.top().second+1});
                  }
            }
            else{
                  st.push({s[i], 1});
            }
      }
      while(st.empty()!=true){
            cout<<st.top().first;
            st.pop();
      }
      return 0;
}
