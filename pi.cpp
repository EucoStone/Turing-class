//
// Created by EucoStone on 24-10-18.
//
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double r = 1;
long double divide(int cnt, long double side_length) {
  if (!cnt) {
    return side_length;
  }
  long double reg = sqrt(pow(r, 2) - pow((side_length / 2), 2));
  //算出r * r - (边长 / 2 * 边长 / 2)
  long double updated_side_length = sqrt(pow(side_length / 2, 2) + pow((r - reg), 2));
  //算出经过切割后正多边形的边长
  return divide(cnt  - 1, updated_side_length);
}
int main() {
  cout<<setiosflags(ios::fixed)<<setprecision(8);
  int n;//由n决定割圆几次
  long double side_length = 1;//初始边长
  //比如，四边形边长为根号二，即1.414
  cin >> n;
//  cin >> side_length;
//  边长可自行输入，默认以六边形开始
  int side = 6 * pow(2, n);
  cout << divide(n, side_length) * side / 2 << endl;
  return 0;
}