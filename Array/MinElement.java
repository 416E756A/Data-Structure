
// Need to unedrstand this code again..

public class MinElement
{
	static int Element(int a[],int low,int high)
	{
		if(low>high)
			return -1;
		if(low==high)
			return low;
		int mid=(low+high)/2;

		if(mid<high && a[mid]>a[mid+1])
			return a[mid+1];
		if(mid>low && a[mid]<a[mid-1])
			return a[mid];
		if(a[high]>a[low])
			return Element(a,low,mid-1);
		return Element(a,mid+1,high);

		
	}
	static void findMin(int a[])
	{
		int i;
		int min=a[0];
		for(i=1;i<a.length;i++)
			if(min>a[i])
				min=a[i];
		System.out.println(min);
	}
	public static void main(String[] args) {
		int a[]={5,6,1,2,3,4};
		//findMin(a);
		System.out.println(Element(a,0,5));
	}
}