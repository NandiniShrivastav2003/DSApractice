// Description
// Given a list of words and two words word1 and word2, return the shortest distance between these two words in the list.You may assume that word1 does not equal to word2, and word1 and word2 are both in the list

// class Input：["practice", "makes", "perfect", "coding", "makes"],"coding","practice"
// Output：3
// Explanation：index("coding") - index("practice") = 3
// Example 2:

// Input：["practice", "makes", "perfect", "coding", "makes"],"makes","coding"
// Output：1
// Explanation：index("makes") - index("coding") = 1
class Solution {
public:
    int shortestDistance(vector<string> &words, string &word1, string &word2) {
      int res=INT_MAX;
    
     int index1=-1,index2=-1;
     for(int i=0;i<words.size();i++){
         if(words[i] == word1){
             index1=i;
         }
         if(words[i] == word2){
             index2=i;
         }
         if(index1 != -1 && index2 != -1){
       res=min(res,abs(index1-index2));
         }
     }
      
return res;
    }
};