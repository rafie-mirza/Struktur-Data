#include <iostream>
#include <fstream>
#include <vector>
#include <list>
using namespace std;

class edge
{
    private:
        int nodeid, weight;
    public:
        edge (int id, int w)
        {
            nodeid = id;
            weight = w;
        }
        int getnodeid ()
        {
            return nodeid;
        }
        int getweightid ()
        {
            return weight;
        }

};

int main ()
{
    int total_node, node_1, node_2, w;
    ifstream input ("test.txt"); // Mengambil data dari file test.txt
    input >> total_node;
    vector < list <edge> > adjlist (total_node);
    while (input >> node_1 >> node_2 >> w)
    {
        adjlist [node_1-1] .push_back (edge (node_2, w));
    }
    int c = 1;
    vector < list <edge> > :: iterator i;
    for (i = adjlist.begin(); i != adjlist.end(); i++)
    {
        cout << c << " -> ";
        list <edge> li = *i;
        list <edge> :: iterator iter;
        for (iter = li.begin(); iter != li.end(); iter++)
        {
            cout << " [" << (*iter) .getnodeid() << ", " << (*iter) .getweightid() << "] -> ";
        }
        cout << endl;
        c++;
    }
    return 0;
}
