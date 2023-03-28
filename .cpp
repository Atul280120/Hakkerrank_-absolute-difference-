vector<int> absolutePermutation(int n, int k) {
   map<int,int> mp;
   vector<int> arr(n);
   for(int i=1;i<=n;i++){
      mp[i]=0;
   }
   for(int i=0;i<n;i++){
      if ((i+1-k) > 0 && (i+1-k) <= n && !mp[i+1-k]){
         arr[i]=i+1-k;
         mp[i+1-k]=1;
      }
      else if((i+1+k)<=n and !mp[i+1+k]){
         arr[i]=i+1+k;
         mp[i+1+k]=1;
      }
      else{
         return {-1};
      }
   }
   return arr;
}
