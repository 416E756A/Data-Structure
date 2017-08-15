public class RotationCount
{
	static int countInBin(int a[],int low,int high)
	{
		int mid=(low+high)/2;
		if(a[mid]>a[mid+1])
			return mid+1;
		return countInBin(a,low,mid);

	}
	static int count(int a[])
	{
		int i,n=a.length;
		for(i=0;i<n-1;i++)
			if(a[i]>a[i+1])
				break;
		return i+1;
	}
	public static void main(String[] args) {
		int a[]={12,15, 18, 2, 3, 6};
		System.out.println(countInBin(a,0,a.length-1));
	}
}