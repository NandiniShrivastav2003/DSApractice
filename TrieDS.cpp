//Input: dictionary = ["cat","bat","rat"], sentence = "the cattle was rattled by the battery"
//Output: "the cat was rat by the bat"
//1.declaring TrieNode class structure
class TrieNode
{
public:
    TrieNode *child[26];
    bool isEnd;
    TrieNode()
    {
        for (int i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
        isEnd = false;
    }
};
class Solution
{
    TrieNode *root;

public:
//2.insert function for inserting values in dictionary
    void insert(string word)
    {
        TrieNode *temp = root;
        for (int i = 0; i < word.size(); i++)
        {
            int index = word[i] - 'a';
            if (!temp->child[index])
            {
                temp->child[index] = new TrieNode();
            }
            temp = temp->child[index];
        }
        temp->isEnd = true;
    }
    //3.check if the prefix is present in dictionary
    string startsWith(string word)
    {
        TrieNode *curr = root;
        string s = "";
        for (int i = 0; i < word.size(); i++)
        {
            int index = word[i] - 'a';
            if (!curr->child[index])
            {
                break;
            }
            s += word[i];
            curr = curr->child[index];
            if (curr->isEnd)
            {
                return s;
            }
        }
        return word;
    }
    string replaceWords(vector<string> &dictionary, string sentence)
    {
        root = new TrieNode();
        string res = "";
        for (int i = 0; i < dictionary.size(); i++)
        {
            insert(dictionary[i]);
        }
        istringstream ss(sentence);   // method for splitting words from a string of words seperated by spaces 
        string word = "";
        while (ss >> word)
        {
            res += startsWith(word);
            res += " ";
        }
        res.pop_back();
        return res;
    }
