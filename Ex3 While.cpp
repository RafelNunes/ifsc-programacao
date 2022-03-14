#include <stdio.h>
#include <math.h>
int main() {
int n, x = 0, p = 1;
scanf("%d", &n);
while (p < n){
printf("%d ", p);
x++;
p = pow(2,x);
}
return 0;
}
