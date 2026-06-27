/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
     TreeNode* build(vector<string>& tokens, int& index) {
        if (tokens[index]=="null") {
            index++;
            return nullptr;
        }
        TreeNode* node=new TreeNode(stoi(tokens[index++]));
        node->left=build(tokens,index);
        node->right=build(tokens,index);
        return node;
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root){
        if(!root) return "null,";
        return to_string(root->val)+","+
               serialize(root->left)+
               serialize(root->right);
    }
  
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data){
         vector<string> tokens;
        string token;
        stringstream ss(data);
        while(getline(ss,token,',')){
            tokens.push_back(token);
        }
        int index=0;
        return build(tokens,index);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));