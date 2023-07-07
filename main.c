#include <stdio.h>
int main(){
  float radius;
  printf("What is the radius of circle:-");
  scanf("%f",&radius);
  double area = 3.14 * (radius * radius);
  printf("The Area of Circle is %f\n",area);
  return 0;
}
