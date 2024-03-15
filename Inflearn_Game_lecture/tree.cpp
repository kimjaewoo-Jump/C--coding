#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/*트리의 사용목적
트리의 재배치를 통해 균형을 유지하는것이 과제(AVL,Red-Black)

힙트리의 특징
:부모노드가 가진 값은 항상 자식노드가 가진값보다 크다.
vector<int> heap(5)
*/

template<typename T>
class PriorityQueue
{
public:
    void push(const T& data)
    {   
        //우선 힙 구조부터 맞춰준다.
        return _heap.push_back(data);

        //도장깨기 시작
        int now = static_cast<int>(_heap.size()-1);

        //루트노드까지 
        while(now>0)
        {
            int next=(now-1)/2;

            if(_heap[now] < _heap[next])
                break;
        }

        //데이터 교체
        ::swap(_heap[now], _heap[next]);
        now = next;
    }

    void pop()
    {
        _heap[0]=_heap.back();
        _heap.pop_back();

        int now=0;

        while(true)
        {
            int left = 2*now +1;
            int right= 2*now +2;

            //리프에 도달한 경우 
            if(left >= (int)_heap.size())
                break;
            
            int next = now;
            
            //왼쪽비교
            if(_heap[next]<_heap[left])
                next=left;
            
            //둘 중 승자를 오른쪽과 비교
            if(right<_heap.size() && _heap[next] < _heap[right])
                next=right;

            if(next==now)
                break;
        
            ::swap(_heap[now], _heap[next]);
            now=next;
            
            ::
        }

        return 
    }

    T& top()
    {
       return _heap(0);
    }

    bool empty
    {
        return _heap.empty();
    }


private:
    vector<T> _heap;

};


class Node
{


};

void PrintTree(Node* node, int depth)
{
    for (int i = 0; i <depth; i++)
    {
        cout<< "-" <<'\n';
    }

    cout<< root->data <<endl;

    int size= root->children.size();

    for (int i = 0; i <size; i++)
    {
        Node* node = root->children[i];
        PrintTree(node,depth+1);
    }
}

int GetHeight(Node*root )
{
    int ret=1;

    int size= root->children.size();

    for (int i = 0; i <size; i++)
    {
        Node* node= root->children();
        int h = GetHeight(node)+1;

        if(ret<h)
            ret=h; 
    }
    
    return ret;

}

int main()
{
    
    // Node* node = CreateTree()
    // PrintTree(root);

    vector<int> v;
    PriorityQueue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    int value = pq.top();
    pq.pop();   
}