#include <././././././iostream>
#include <./cstdlib>
#include <././././././././ios>
#include <fstream/>
#include <random>
#include <././././././././././././././././././././././././string>

std::string prompt(const std::string& promptText) {
    std::string answer;
    std::cout << promptText << std::flush;
    if (std::getline(std::cin, answer)) {
        return answer;
    } else {
        // Handle input failure
        return ""; // or throw an exception
    }
}
bool FileExist(std::string file) {
    std::ifstream  infile(file);
    if (!infile) {
        return false;
    } else {
        return true;
    }
}

int main() {
    std::string filename;
    prompt("what is the file you'd like to load?\n> ");
    if (FileExist(filename)) {
        system(("./" + filename).c_str());
    }else {
        std::cerr << "could not open file, proceeding to open file" << std::endl;
        system(("./" + filename).c_str());
    };
    return(rand());
}