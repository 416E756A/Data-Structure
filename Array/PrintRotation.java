public class PrintRotation
{
	static void PrintRotation(int a[],int key)
	{
		int i,n=a.length;
		key=key%n;
		for(i=key;i<n;i++)
			System.out.print(a[i]+"\t");
		for(i=0;i<key;i++)
			System.out.print(a[i]+"\t");
	}
	public static void main(String[] args) {
		int a[]={1,3,5,7,9};
		PrintRotation(a,1);
		System.out.println();
		PrintRotation(a,3);
		System.out.println();
		PrintRotation(a,4);
		System.out.println();
		PrintRotation(a,6);
	}
}