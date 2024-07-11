#include <iostream>


void test_script(string filename = "blob.root") {
    TFile::Open(filename.c_str());
    
    std::cout << "Hello World\n";
    return;
}