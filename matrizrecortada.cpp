#include <iostream>
#include <time.h>
#include <math.h>
int m, n;

using namespace std;

int main()
{
	int i, j;
	srand(time(NULL));
	cin >> m;
	cin >> n;
	int mi[m][n];
	int madj[m][n];
	int mf[m - 1][n - 1];

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		cin >> mi[i][j];// = 0 + rand() % (m);

	cout << "\nMatriz inicial" << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cout << mi[i][j] << "\t";
		cout << endl;
	}
	cout << endl;

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			int h, k;
			for (h = 0; h < m - 1; h++)
				for (k = 0; k < n - 1; k++)
					mf[h][k] = 0;

			for (h = 0; h < m - 1; h++)
				for (k = 0; k < n - 1; k++)
				{
					if (k < j && h < i)
						mf[h][k] = mi[h][k];

					if (k >= j && h < i)
						mf[h][k] = mi[h][k + 1];

					if (k < j && h >= i)
						mf[h][k] = mi[h + 1][k];

					if (k >= j && h >= i)
						mf[h][k] = mi[h + 1][k + 1];
				}
			
			//mad[i][j] += mf[][]*mf[][]*mf[][]
			madj[i][j] = mf[0][0] * mf[1][1] * mf[2][2] + mf[0][1] * mf[1][2] * mf[2][0] + mf[0][2] * mf[1][0] * mf[2][1] - (mf[0][2] * mf[1][1] * mf[2][0] + mf[0][1] * mf[1][0] * mf[2][2] + mf[0][0] * mf[1][2] * mf[2][1]);
		}

	cout << "\nMatriz adjunta" << endl;

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cout << madj[i][j] << "\t";
		cout << endl;
	}

	int det = 0;
	for (j = 0; j < n; j++)
		det += madj[0][j] * mi[0][j];

	cout << "\nEl determinante es: " << det << endl;
}
