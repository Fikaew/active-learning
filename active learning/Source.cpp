#include<stdio.h>
//int calDet(int, int);
int main()
{
	int i, j, determine, mat[3][3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &mat[i][j]);
		}
	}
	determine = mat[0][0] * mat[1][1] * mat[2][2] + mat[1][0] * mat[2][1] * mat[0][2] + mat[2][0] * mat[0][1] * mat[1][2] - mat[0][2] * mat[1][1] * mat[2][0] - mat[1][2] * mat[2][1] * mat[0][0] - mat[2][2] * mat[0][1] * mat[1][0];
	//printf("\n%d", calDet(mat[i][j], determine));
	printf("\n%d", determine);
	return 0;
}
/*int calDet(int mat[3][3], int det)
{
	det = mat[0][0] * mat[1][1] * mat[2][2] + mat[1][0] * mat[2][1] * mat[0][2] + mat[2][0] * mat[0][1] * mat[1][2] - mat[0][2] * mat[1][1] * mat[2][0] - mat[1][2] * mat[2][1] * mat[0][0] - mat[2][2] * mat[0][1] * mat[1][0];
	return det;
}*/
