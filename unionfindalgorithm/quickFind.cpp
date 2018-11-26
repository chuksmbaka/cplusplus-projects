#include <iostream>
#include <string>

using namespace std;

class QuickFind
{
  private:
    int data[6];
    int connection[6] = {1, 2, 3, 4, 5, 6};

  public:
    QuickFind(int, int, int, int, int, int);
    int unify(int, int);
    bool is_connected(int, int);
    void resetConnection();
    void displayConnections();
};
//----------------------------------------

int QuickFind ::unify(int a, int b)
{
    int index_a = 0;
    int index_b = 0;
    for (int i = 0; i < 6; i++)
    {
        if (a == data[i])
            index_a = i;
    }

    for (int i = 0; i < 6; i++)
    {
        if (b == data[i])
            index_b = i;
    }

    int counter = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i == index_b)
            continue;

        if (connection[i] == connection[index_b]) // is point b connected already to another point
        {
            counter++;
        }
    }

    cout << "counter: " << counter << endl;
    if (counter > 0) // point b is connected to a point
    {
        connection[index_a] = connection[index_b]; //first argument equals to second argument
        counter = 0;
    }
    else
        connection[index_b] = connection[index_a]; //second argument equals to first argument

    //Just for test. to be deleted
    //cout << "connection: ";
    //for (int i = 0; i < 6; i++)
    //{
     //   cout << connection[i] << ", ";
    //}
    //

    return 0;
}
//----------------------------------------------

bool QuickFind ::is_connected(int a, int b)
{
    int index_a = 0;
    int index_b = 0;
    for (int i = 0; i < 6; i++)
    {
        if (a == data[i])
            index_a = i;
    }

    for (int i = 0; i < 6; i++)
    {
        if (b == data[i])
            index_b = i;
    }

    if (connection[index_a] == connection[index_b])
    {
        cout << a << " and " << b << " are connected" << endl;
        return true;
    }
    else
    {
        cout << a << " and " << b << " are not connected" << endl;
        return false;
    }
}
//--------------------------------------------------------------

QuickFind ::QuickFind(int a, int b, int c, int d, int e, int f)
{
    data[0] = a;
    data[1] = b;
    data[2] = c;
    data[3] = d;
    data[4] = e;
    data[5] = f;
}
//-----------------------------------------------------------------

void QuickFind ::resetConnection()
{
    //QuickFind(data[0], data[1], data[2], data[3], data[4], data[5]);
    //connection[6] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 6; i++)
    {
        connection[i] = i + 1;
    }
}
//--------------------------------------------------------------------

void QuickFind ::displayConnections()
{
    cout << "connections: ";
    for (int i = 0; i < 6; i++)
    {
        cout << connection[i] << ", ";
    }
    cout << endl;
}
