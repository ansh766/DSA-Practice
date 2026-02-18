class Solution {
  public:
    pair<int, int> get(int a, int b) {
      pair<int,int>p;
      
      a = a^b;
      b = a^b;
      a = a^b;
      p.first = a;
      p.second = b;
      return p;
        
    }
};
