#include <vector>
#include <stdio.h>
#include <fstream>
class Rectangle{
public:
    int getArea(){
        return (Bx-Ax) * (By-Ay);
    }
private:
    int Ax;
    int Ay;
    int Bx;
    int By;
};

template <typename T>
std::vector<T> getVector(const std::string &file){

}

int main(int argc, char *argv[]) {

//tokenization variables
    std::string token;
    char delim = ' ';
    std::vector<std::string> tokens;


    while (std::getline(dimFile, str)) {
//stores tokens into coordinate vector
        std::istringstream ss(str);
        while (std::getline(ss, token, delim)) {
            std::cout << token << "tok" << std::endl;
            tokens.push_back(token);
        }
//converts coordinate tokens into ints, then uses them to calculate area of rectangle, then the areas are stored into  the coordAreas vector
        x1 = std::stoi(tokens[0]);
        y1 = std::stoi(tokens[1]);
        x2 = std::stoi(tokens[2]);
        y2 = std::stoi(tokens[3]);

        printf(" coor %d %d %d %d\n", x1, y1, x2, y2);

        side1 = x2 - x1;
        side2 = y2 - y1;

        area = side1 * side2;


        if (str.size() > 0) {
            coordAreas.push_back(area);
        } else {
            break;
        }
//erases contents of vector of tokens so new tokens can be stored next iteration
        tokens.erase(tokens.begin(), tokens.end());
    }
    return 0;
}