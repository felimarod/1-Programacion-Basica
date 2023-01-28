#define m 4
#define n 4

int mi[m][n];
int mf[m - 1][n - 1];
int madj[m][n];

int i, j, det;

int cof(int fc, int cc)
{
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			if (j < cc && i < fc)
				mf[i][j] = mi[i][j];

			if (j >= cc && i < fc)
				mf[i][j] = mi[i][j + 1];

			if (j < cc && i >= fc)
				mf[i][j] = mi[i + 1][j];

			if (j >= cc && i >= fc)
				mf[i][j] = mi[i + 1][j + 1];
		}
	det = mf[0][0] * mf[1][1] * mf[2][2] + mf[0][1] * mf[1][2] * mf[2][0] + mf[0][2] * mf[1][0] * mf[2][1] - mf[0][2] * mf[1][1] * mf[2][0] - mf[0][1] * mf[1][0] * mf[2][2] - mf[0][0] * mf[1][2] * mf[2][1];
	return det;
}
int main(int argc, char *argv[])
{
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			madj[i][j] = cof(i, j);

	det = 0;
	for (j = 0; j < n; j++)
		det += madj[0][j] * mi[0][j];
}