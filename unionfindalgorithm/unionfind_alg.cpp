#include "quickFind.cpp"
//using namespace std;

int main()
{
    QuickFind points(1, 8, 3, 4, 5, 6);
    points.unify(8, 3);
    points.unify(8, 6);
    points.unify(6, 4);
    cout << endl;
    points.is_connected(3, 5);
    points.resetConnection();
    points.displayConnections();
    points.unify(6, 4);
    //points.unify(6, 4);
    points.unify(3, 6);
    points.unify(8, 6);
    points.unify(8, 1);
    points.displayConnections();

    return 0;
}
