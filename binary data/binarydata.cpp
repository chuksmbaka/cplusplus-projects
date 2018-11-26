#include "binarydataclasses.cpp"

std::istream &operator>>(std::istream &is, tempStat &ts);
std::ostream &operator<<(std::ostream &os, const tempStat &ts);
int main()
{
    /* The following code creates 12 tempStat objects containing hard-coded minimum/maximum temperatures, 
    and writes all the objects to a file in binary format by using the write() helper method in the tempStat 
    class:*/
    ofstream ofile("tempStats.bin", std::ios_base::binary);
    if (ofile.is_open())
    {
        tempStat(-2.5, 7.5).write(ofile);
        tempStat(0, 9.9).write(ofile);
        tempStat(2.5, 11.0).write(ofile);
        tempStat(5.5, 14.5).write(ofile);
        tempStat(7.0, 17.7).write(ofile);
        tempStat(10.5, 23.7).write(ofile);
        tempStat(11.7, 29.5).write(ofile);
        tempStat(7.6, 22.9).write(ofile);
        tempStat(7.2, 21.5).write(ofile);
        tempStat(2.0, 16.0).write(ofile);
        tempStat(-4.7, 12.5).write(ofile);
        tempStat(-1.9, 8.5).write(ofile);

        ofile.close();

        std::cout << "Finished writing binary data to tempStats.bin." << std::endl;
    }
    else
    {
        std::cerr << "Couldn't open tempStats.bin for writing." << std::endl;
    }

    /* The following code reads tempStat objects from the file. We open the file in binary format, 
    and loop through the file until end-of-file is detected. */
    std::ifstream ifile("tempStats.bin", std::ios_base::binary);
    if (ifile.is_open())
    {
        while (!ifile.eof())
        {
            tempStat ts;
            ts.read(ifile);

            if (ifile.gcount() == 0)
            {
                break; // If no bytes read, we're done.
            }

            std::cout << "Read temperature stats: " << ts << std::endl;
        }
        ifile.close();

        std::cout << "Finished reading binary data from tempStats.bin." << std::endl;
    }
    else
    {
        std::cerr << "Couldn't open tempStats.bin for reading." << std::endl;
    }
}

std::istream &operator>>(std::istream &is, tempStat &ts)
{
    is >> ts.minimum >> ts.maximum;
    return is;
}

std::ostream &operator<<(std::ostream &os, const tempStat &ts)
{
    os << ts.minimum << "," << ts.maximum << std::endl;
    return os;
}
