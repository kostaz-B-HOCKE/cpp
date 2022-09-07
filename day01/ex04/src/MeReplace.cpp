#include "MeReplace.hpp"

MeReplace::MeReplace(void)
{
}

MeReplace::~MeReplace(void)
{
}

void MeReplace::ft_replace(const std::string& file, const std::string& s1, const std::string& s2)
{
    std::ifstream   inFile;
    std::ofstream   outFile;

    inFile.open(file, std::ios::out);
    outFile.open(file + ".replace", std::ios::in);

    std::string str;
    size_t  pos = 0;
    size_t  len_s1 = s1.size();
 	if (!s1.size() || !s2.size())
        std::cout << ("Wrong argument. Empty str.") << std::endl;
    else
    {
        std::getline(inFile, str, '\n');
        while (pos != std::string::npos)
        {
            pos = str.find(s1);
            if (pos != std::string::npos)
            {
                str.erase(pos, len_s1);
                str.insert(pos, s2);
            }
            outFile << str << "\n";
            std::getline(inFile, str, '\n');
        }
        inFile.close();
        outFile.close();
    }
}
