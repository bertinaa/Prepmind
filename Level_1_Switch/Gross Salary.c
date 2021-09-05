#include <stdio.h>

int main() {
    // Write C code here
    int salary;
    double HRA, DA,gross;
    scanf("%d",&salary);
    switch(salary){
        case 0 ... 10000:
          HRA=.2*salary;
          DA=.8*salary;
          gross=salary+HRA+DA;
          printf("%.2lf",gross);
          break;
        case 10001 ... 20000:
          HRA=.25*salary;
          DA=.9*salary;
          gross=salary+HRA+DA;
          printf("%.2lf",gross);
          break;
        default:
          HRA=.3*salary;
          DA=.95*salary;
          gross=salary+HRA+DA;
          printf("%.2lf",gross);
          break;
    }
    
    return 0;
}
