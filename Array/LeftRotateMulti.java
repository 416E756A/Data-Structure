public class LeftRotateMulti
{
	static void displayMulti(int a[],int k)
	{
		int[] temp=new int [a.length];
		int i,n=a.length;
		int z=0;
		k=k%n;
		for(i=k;i<n;i++)
			temp[z++]=a[i];
		for(i=0;i<k;i++)
			temp[z++]=a[i];
		for(i=0;i<n;i++)
			System.out.print(temp[i]+"\t");
		System.out.println();
	}
	static void reverse(int a[],int low,int high)
	{
		int i;
		while(low<high) // 1<4
		{
			int t=a[low];
			a[low++]=a[high];
			a[high--]=t;
		}
		/*for(i=low;i<(low+high)/2;i++)
		{
			int t=a[i];
			a[i]=a[high];
			a[high]=t;
		}*/
	}
	static void rotate(int a[],int k)
	{
		int n=a.length;
		k=k%n;
		reverse(a,0,k-1);
		reverse(a,k,n-1);
		reverse(a,0,n-1);
	}
	public static void main(String[] args) {
		int a[]={1, 3, 5, 7, 9};
		int b[]=a;
		rotate(b,1);
		int i;
		for(i=0;i<b.length;i++)
					System.out.print(b[i]+"\t");
				System.out.println();
		b=a;
		rotate(b,3);
		for(i=0;i<b.length;i++)
					System.out.print(b[i]+"\t");
				System.out.println();
		b=a;
		rotate(b,4);
		for(i=0;i<b.length;i++)
					System.out.print(b[i]+"\t");
				System.out.println();
		b=a;
		rotate(b,6);
		for(i=0;i<b.length;i++)
					System.out.print(b[i]+"\t");
				System.out.println();
	}
}