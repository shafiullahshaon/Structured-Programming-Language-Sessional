#include<stdio.h>
#include<math.h>
int main()
{
	int x1, y1, x2, y2;
	float distance;
	printf("Input x1: ");
	scanf("%d",&x1);
	printf("Input y1: ");
	scanf("%d",&y1);
    printf("Input x2: ");
	scanf("%d",&x2);
	printf("Input y2: ");
	scanf("%d",&y2);
	distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("Geometric distance between the two points: %f",distance);
	getch();
	return 0;
}
