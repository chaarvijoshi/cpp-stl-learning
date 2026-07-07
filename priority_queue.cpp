// priority queue
// "Largest"
// "Smallest"
// "Top K"
// "Highest Priority"
// "Kth Largest"
// "Scheduling"

#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(40);
    pq.push(5);
    pq.push(12);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
}

pq.push(x);     // Insert
pq.pop();       // Remove highest priority
pq.top();       // Highest priority element
pq.empty();     // Is empty?
pq.size();      // Number of elements


#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    vector<int> v = {10, 5, 30, 15, 20};

    int k = 3;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int x : v)
    {
        pq.push(x);

        // Keep only k largest elements
        if (pq.size() > k)
        {
            pq.pop();
        }
    }

    cout << k << "rd largest element is: " << pq.top() << endl;

    return 0;
}





