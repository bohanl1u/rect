#include <vector>
#include <stdio>
#include <fstream>


class Rectangle{
  public:
    Rectangle(int Ax, int Ay, int Bx, int By){
      this.Ax = Ax;
      this.Ay = Ay;
      this.Bx = Bx;
      this.By = By;
    }
    int getArea(){
      return (Bx-Ax) * (By-Ay);
    }
    int getAx(){
      return Ax;
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

int binarySearch(){

}

int linearSearch(){

}

int main(int argc, char *argv[]) {
  std::ifstream rectFile;
  std::ifstream areaFile;
  std::ofstream resultFile;

  rectFile.open(argv[1]);
  areaFile.open(argv[2]);
  resultFile.open(argv[3]);

  std::vector<int> areas;
  std::vector<Rectangle> rectangles;

  std::string token;
  char delim = ' ';
  std::vector<std::string> tokens;

  while (std::getline(rectFile, str)) {
//stores tokens into coordinate vector
      std::istringstream ss(str);
      while (std::getline(ss, token, delim)) {
          // std::cout << token << "tok" << std::endl;
          tokens.push_back(token);
      }
//converts coordinate tokens into ints, then uses them to calculate area of rectangle, then the areas are stored into  the coordAreas vector
      x1 = std::stoi(tokens[0]);
      y1 = std::stoi(tokens[1]);
      x2 = std::stoi(tokens[2]);
      y2 = std::stoi(tokens[3]);
      Rectangle rect(x1, y1, x2, y2);
      rectangles.push_back(rect);
//erases contents of vector of tokens so new tokens can be stored next iteration
      tokens.erase(tokens.begin(), tokens.end());
  }
//initialize areas vector
  int area;
  while (std::getline(areaFile, str)) {
      area = std::stoi(str);
      if (str.size() > 0){
        areas.push_back(area);
      }
      else{
        break;
      }
  }

  return 0;
}
