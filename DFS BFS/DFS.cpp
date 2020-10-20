#include<iostream>
using namespace std;

int adjm[10][10],nodes,visited[10];
void creatDFS(int Size){
        nodes=Size;
        int src,dest;
        for(src=0;src<nodes;src++){
                for( dest=0;dest<nodes;dest++){
                    cout<<"from "<<src<<" to "<<dest<<" :";
                    cin>>adjm[src][dest];
                }
        }
}
void DFS(int sourse){
  int i;
  visited[sourse] = 1;
  cout<<"this id src = "<<sourse<<",";
  for(i=0;i<nodes;i++){
    if(adjm[sourse][i]==1 && visited[i]== 0){
        DFS(i);
    }
  }
}
int main(){
    int Size;
    cout<<"enter size ";
    cin>>Size;
creatDFS(Size);
DFS(0);
}
