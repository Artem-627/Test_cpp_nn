#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream DataFile("abc.jpeg", std::ios::binary);
	if (!DataFile.good())
		return 1;

    DataFile.seekg(0, std::ios::end);
    size_t filesize = (int)DataFile.tellg();
    DataFile.seekg(0);

    unsigned char *output = new unsigned char[filesize];
    if (DataFile.read((char*)output, filesize))
    {
        std::ofstream fout("def.jpeg", std::ios::binary);
        if (!fout.good())
            return 0;
        fout.write((char*)output, filesize);
    }
		
	return 0;
}