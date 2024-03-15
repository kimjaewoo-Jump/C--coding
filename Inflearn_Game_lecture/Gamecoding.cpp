#include  <iostream>
using namespace std;
#include <vector>
#include <queue>


void CreateGraph_1()
{
    struct Vertex
    {
        //int data;
        vector<Vertex*> edges; //정점이 Vertex이고 edges들은 정점타입의 벡터타입들
    };

    vector<int> v2(10,-1);
    vector<int> v3{1,2,3,4,5,6,7};

    vector<Vertex> v(6);

    

    v[0].edges.push_back(&v[1]);
    v[0].edges.push_back(&v[3]);


    v[1].edges.push_back(&v[0]);
    v[1].edges.push_back(&v[2]);
    v[1].edges.push_back(&v[3]);

    v[3].edges.push_back(&v[4]);

    v[5].edges.push_back(&v[4]);


    // v.resize(6); //size
    // v.reserve(6);  //capacity

    //Q) 0번->3번이 연결되어있나요?
    bool connected = false;
    
    int size = v[0].edges.size();
    for (int i = 0; i <size; i++)
    {
        Vertex* vertex=v[0].edges[i];

        if(vertex==&v[3])
        {
            connected = true;
        }

        
    }
    


}

void CreateGraph2()
{
    struct Vertex
    {
        int data;
    };

    vector<Vertex> v(6);

    vector<vector<int>> adjacent;

    adjacent.resize(6);
    

}

int main() 
{
   CreateGraph_1();
}