public class RotateMatrixElement
{
	static void RotateMatrixElement(int a[][],int m,int n)
	{
		int i=0,j;
		int temp=a[i][j];
		for(j=1;j<n;j++)
		{
			a[j-1][i]=a[j][i];
		}

		int k=0;
		for(i=j;i<m;i++)
		{
			a[i][k]=a[i+1][k];
		}

		for()
	}
}