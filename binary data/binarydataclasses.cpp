#include <iostream>
#include <fstream>
using namespace std;

class tempStat //temperature statistics
{

  public:
    // Data members.
    double minimum, maximum;
    double RECORD_SIZE = 2 * sizeof(double);

    // Constructor.
    tempStat(double min = 0.0, double max = 0.0)
        : minimum(min), maximum(max)
    {
    }

    // Helper method, to write a tempStat object to a file in binary format.
    void write(std::ostream &os)
    {
        os.write((char *)&minimum, sizeof(double));
        os.write((char *)&maximum, sizeof(double));
    }

    // Helper method, to read a tempStat object from a file in binary format.
    void read(std::istream &is)
    {
        is.read((char *)&minimum, sizeof(double));
        is.read((char *)&maximum, sizeof(double));
    }

    // Plus other members, as appropriate.
    //Writ tempStat at specified index in file stream
    void write (std::ostream & os, int index)
    {
        std::streampos pos(index * RECORD_SIZE);

        os.seekp(pos);
        cout << "About to write record at position " << os.tellp() << endl;

        os.write((char*)&minimum, sizeof(double));
        os.write((char*)&maximum, sizeof(double));
    }

    void read (std::istream & is, int index)
    {
        std::streampos pos(index * RECORD_SIZE);

        is.seekg(pos);
        cout << "About to read record at position " << is.tellg() << endl;
        
        is.read((char*)&minimum, sizeof(double));
        is.read((char*)&maximum, sizeof(double));
    }
    
    

};