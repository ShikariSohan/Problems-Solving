    #include<bits/stdc++.h>
    using namespace std;
    #define M 100000000
    bool marked[M];

    bool isPrime(int n) {
      if (n < 2) return false;
      if (n == 2) return true;
      if (n % 2 == 0) return false;
      return marked[n] == false;
    }
    vector<int>v;
    void sieve()
    {
      for (int i = 3; i * i <= M; i += 2) {
        if (marked[i] == false) {
          for (int j = i * i; j <= M; j += i + i) {
            marked[j] = true;
          }
        }
      }
      for(int i=1;i<M;i++)
        if(isPrime(i))
            v.push_back(i);
    }
    int main()
    {
        sieve();
       int x=v.size();
       for(int i=0;i<x;i+=100)
       {
           cout<<v[i]<<endl;
       }

    }
