#include <stdio.h>

int gcd(int a, int b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a, int b){
    return ((a * b) / gcd(a, b)) ;
}

int main(){
    int a = 18, b = 54;
    int ab_gcd = gcd(a, b);
    int ab_lcm = lcm(a, b);
    int c = 9027, d = 801;
    int abcd_gcd = gcd(a, gcd(b, gcd(c, d)));
    int abcd_lcm = lcm(a, lcm(b, lcm(c, d)));
}
