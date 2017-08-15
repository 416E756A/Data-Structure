public class RotateMatrix90
{
	static void transpose(int a[][],int m,int n)
	{
		int i,j;

		for(i=0;i<m;i++)
		{
			for(j=i;j<n;j++)
			{
				int t=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=t;
				//System.out.print(t);
			}
		}
		for(i=0;i<m;i++)
    	{
    		for(j=0;j<n;j++){
    			System.out.print(a[i][j]+"\t");
    		}
    		System.out.println();
    	}
    	System.out.println();
		reverseCol(a,m,n);
	}

	static void reverseCol(int a[][],int m,int n)
	{
		int i;
		for(i=0;i<n;i++)
		{
			int j=0,k=m-1;
			while(j<k)
			{
				int t=a[j][i];
				a[j][i]=a[k][i];
				a[k][i]=t;
				k--;
				j++;
			}
		}
	}
	public static void main(String[] args) {
		int a[][]={ {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int i,j,m=4,n=4;
    transpose(a,m,n);
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++){
    		System.out.print(a[i][j]+"\t");
    	}
    	System.out.println();
    }
	}
}