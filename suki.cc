#include<iostream>
#include<random>

int main() {
  const std::vector<std::string> suki{ "大", "石", "泉", "す", "き" };
  const int n = suki.size();

  std::mt19937 mt{ std::random_device{}() };
  std::uniform_int_distribution<int> dist{ 0, n - 1 };

  for (int i = 0; i < n;) {
    const int r = dist(mt);
    std::cout << suki.at(r);
    (r == i) ? i++ : i = 0;
  }

  std::cout << "\n\n大石泉すき\n";
}
