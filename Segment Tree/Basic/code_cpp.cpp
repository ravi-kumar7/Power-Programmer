#include<bits/stdc++.h>
using namespace std;

void buildTree(int* arr,int* tree, int start_index,int end_index,int treeNode)
{
    if(start_index==end_index)
    {
        tree[treeNode]=arr[start_index];
        return;
    }
    int mid= (start_index+end_index)/2;
    buildTree(arr,tree,start_index,mid,2*treeNode);
    buildTree(arr,tree,mid+1,end_index,2*treeNode+1);
    tree[treeNode]=tree[2*treeNode]+tree[2*treeNode+1];
}

void updateTree(int* arr, int* tree, int start_index,int end_index,int treeNode,int index,int value)
{
 if(start_index==end_index)
 {
         tree[treeNode]=value;
         arr[index]=value;
         return;
 }
 int mid=(start_index+end_index)/2;
 if(mid>=index && start_index<=index)
 {
         updateTree(arr,tree,start_index,mid,2*treeNode,index,value);
 }
 else if((mid+1)<=index && end_index>=index)
         updateTree(arr,tree,mid+1,end_index,2*treeNode+1,index,value);
 tree[treeNode]=tree[2*treeNode]+tree[2*treeNode+1];
}

int queryTree(int* arr,int* tree, start_index,end_index,treeNode,start_int,end_int)
{
        if(start_index>end_int || end_index <start_int)
                return 0;
        if(start_index>=start_int && end_index<=end_int)
        {       return tree[treeNode];
        }
        int mid=(start_index+end_index)/2;
        int ans1=queryTree(arr,tree,start_index,mid,2*treeNode,start_int,end_int);
        int ans2=queryTree(arr,tree,mid+1,end_index,2*treeNode+1,start_int,end_int);
        return ans1+ans2;
}

int main(){
        int size;
        cin>>size;
        int* arr = new int[size];
        for(int i=0;i<size;i++)
        cin>>arr[i];
        int* tree = new int[4*size];
        buildTree(arr,tree,0,size-1,1);
        for(int i=0;i<4;i++)
                cout<<tree[i]<<endl;
        updateTree(arr,tree,0,size-1,1,2,5);
        for(int i=0;i<4*size;i++)
        cout<<tree[i]<<endl;
        cout<<queryTree(arr,tree,0,size-1,1,2,5);
        return 0;
}