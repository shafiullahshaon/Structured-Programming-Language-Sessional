#include<stdio.h>
int main()
{
      int ch,r,l,w,b,h;
      float area;
      printf("1. circle\n");
      printf("2. rectangle\n");
      printf("3. triangle\n");
      printf("Input your choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
           case 1:
                 printf("Input radious of the circle : ");
                 scanf("%d",&r);
                 area=3.14*r*r;
                 printf("The area is : %f\n",area);
                 break;
            case 2:
                  printf("Input length and width of the rectangle : ");
                  scanf("%d%d",&l,&w);
                  area=l*w;
                  printf("The area is : %f\n",area);
                  break;
            case 3:
                  printf("Input the base and hight of the triangle :");
                  scanf("%d%d",&b,&h);
                  area=.5*b*h;
                  printf("The area is : %f\n",area);
                  break;
            default:
                  printf("Wrong choice");
        }
        return 0;
}
