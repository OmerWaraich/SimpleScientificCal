#include <stdio.h>
#include <math.h>
#define PI 3.14159265

float sine(float x);
float cosine(float x);
float tangent(float x);
float sineh(float x);
float cosineh(float x);
float tangenth(float x);

int main(int argc, char const *argv[])
{
	int n;
	float x, y, answer;
	printf("Press [1] sin\nPress [2] cosine \nPress [3] tangent\nPress [4] sineh\nPress [5] cosineh\nPress [6] tangenth\n");
	scanf("%d", &n);

	if (n < 9 && n > 0)
	{
		printf("Whats the value :\n");
		scanf("%f", &x);
		switch(n)
		{
			case 1:
				answer = sine(x); 
				break;
			case 2:
				answer = cosine(x);
				break;
			case 3:
				answer = tangent(x);
				break;
			case 4:
				answer = sineh(x);
				break;
			case 5:
				answer = cosineh(x);
				break;
			case 6:
				answer = tangenth(x);
				break;
		}
	}
	if (n > 0 && n < 9)
	{
		printf("Answer = %f \n",answer );
	}
	return 0;
}

float sine(float x)
{
	return (sin (x*PI/180));
}

float cosine(float x)
{
	return (cos (x*PI/180));
}
float tangent(float x)
{
	return(tan(x * PI/180));
}
float sineh(float x)
{
	return sinh(x);
}
float cosineh(float x)
{
	return sinh(x);
}
float tangenth(float x)
{
	return sinh(x);
}



