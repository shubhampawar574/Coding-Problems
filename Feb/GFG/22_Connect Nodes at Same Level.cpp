void connect(Node *root)
    {
       // Code Here
       queue<Node*> q;
       q.push(root);
       while(q.size()){
           int s= q.size();
           vector<Node*> arr;
           for(int i=0;i<s;i++){
               Node* temp = q.front();
               q.pop();
               arr.push_back(temp);
               if(temp->left)q.push(temp->left);
               if(temp->right)q.push(temp->right);
           }
           arr.push_back(NULL);
           for(int i=0;i<s;i++)arr[i]->nextRight=arr[i+1];
       }
    } 
