#include <iostream>

int main(){
    int n = 0,m = 0;
    std::cin >> n >> m;
    while(true){
        if(n%n == 0 && n < m){
          std::cout << "YES";
          break;
        } else if (n > m){
          std::cout << "NO";
          break;
        }
    n++;
    }
  return 0;
}