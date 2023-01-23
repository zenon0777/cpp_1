#include<iostream>
#include<fstream>

using std::cout;
using std::string;
using std::endl;

string&    replace(const char *old, const char *new_world, string &tmp)
{
    size_t pos;
    string s1 = old;
    string s2 = new_world;
    size_t size = s1.length();
    while (tmp.find(s1) != string::npos)
    {
           cout << "here2\n";
        pos = tmp.find(s1);
        tmp.erase(pos, size);
        tmp.insert(pos, s2);
        //pos += size;
    }
    return tmp;
}

int main(int argc, char const *argv[])
{
    if (argc == 4)
    {
        string file_name = argv[1];
        std::fstream infile(file_name);
        file_name.append(".replace");
        std::fstream outfile;
        outfile.open(file_name, std::ios::out);
        if (infile.is_open())
            cout << "yes" << endl;
        while(infile)
        {
            string tmp;
            cout << "here\n";
            getline(infile, tmp);
            cout << tmp << endl;
            tmp = replace(argv[2], argv[3], tmp);
            outfile << tmp << "\n";
        }
        //file.close();
        //outf.close();
    }
    return 0;
}
