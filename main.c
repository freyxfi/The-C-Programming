#include <stdio.h>
int main(){
  int radius;
  printf("What is the radius of circle:-");
  scanf("%i",&radius);
  double area = 3.1419 * (radius * radius);
  printf("The Area of Circle is %f\n",area);
  return 0;
}
