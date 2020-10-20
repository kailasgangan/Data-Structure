#include<iostream>
using namespace std;

int adjm[10][10],nodes,visited[10];
void creatBFS(int Size){
        nodes=Size;
        int src,dest;
        for(src=0;src<nodes;src++){
                for( dest=0;dest<nodes;dest++){
                    cout<<"from "<<src<<" to "<<dest<<" :";
                    cin>>adjm[src][dest];
                }
        }
}
void BFS(int sourse){
  int q[100],Front=0,Rear=-1;
  int e;
  visited[sourse]=1;
  q[++Rear]=sourse;
  while(Front<=Rear){
    e=q[Front++];
    cout<<"v"<<e<<",";
    for(int i=0;i<nodes;i++){
        if(adjm[e][i]==1 && visited[i]==0){
            visited[i]=1;
            q[++Rear]=i;
        }
    }
  }
}
int main(){
    int Size;
    cout<<"enter size ";
    cin>>Size;
creatBFS(Size);
BFS(0);
}
