public class CyclicRotate
{
	public static void rotate(int a[])
	{
		int n=a.length;
		int t=a[n-1];
		
		for(int i=0;i<n;i++)
		{
			int y=a[i];
			a[i]=t;
			t=y;
		}
	}
	public static void main(String a[])
	{
		int ar[]={1,2,3,4,5};
		rotate(ar);
		rotate(ar);
		rotate(ar);
		for(int i=0;i<ar.length;i++)
			System.out.print(ar[i]+"\t");

	}	
}