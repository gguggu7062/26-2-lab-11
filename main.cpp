#include "dayOfYear.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace Seoyeowon2649020{
    void readwritedayOfYearDataFile(std::ifstream& fin, std::ofstream& fout){
        std::vector<dayOfYear> v;
        
        std::streambuf* origBuf{std::cout.rdbuf()};
        std::cout.rdbuf(nullptr);
        dayOfYear d;
        while(fin >> d){
            v.push_back(d);
        }
        std::cout.rdbuf(origBuf);

        for(const auto& )
    }
}

int main(){
    using namespace Seoyeowon2649020;
    dayOfYear d;

    std::ifstream fin{ "dayOfYearData.txt" };
    if (fin.fail()){
        std::cout << "Input file opening failed.\n";
        std::exit(1);
    }
    std::streambuf* origBuf{std::cout.rdbuf()};
    std::cout.rdbuf(nullptr);
    fin >> d;
    std::cout.rdbuf(origBuf);

    std::ofstream fout;
    std::string filename;
    std::cout << "Enter output file name: ";
    std::cin >> filename;
    filename = filename + ".txt";
    fout.open(filename);
    if (fout.fail()){
        std::cout << "Output file opening failed.\n";
        std::exit(1);
    }
    fout << d;

    readwritedayOfYearDataFile(fin, fout);
    fin.close();
    // std::cout << d;
    return 0;
}