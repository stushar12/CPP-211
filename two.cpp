void diagonalPrint(Node* root, int vertical_distance, map<int, int> &diagonal_map)
{
    if (root==NULL)
        return;
 
    diagonal_map[vertical_distance]+=root->data;
    
    diagonalPrint(root->left,vertical_distance+1,diagonal_map);
 
    diagonalPrint(root->right,vertical_distance,diagonal_map);
}
vector <int> diagonalSum(Node* root) 
{
    vector<int> v;
    map<int, int > diagonal_map;
	int vertical_distance=0;
    diagonalPrint(root, vertical_distance, diagonal_map);
 
    for (auto itr:diagonal_map)
    {
      v.push_back(itr.second);
    }
    
    return v;
}