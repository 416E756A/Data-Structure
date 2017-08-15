
public class SearchingInRotated
{
	static int pivotBinarySearch(int a[],int n,int key)
	{
		int pivot=findPivot(a,0,n-1);
		if(pivot==-1)
			return binSearch(a,key,0,n-1);
		if(a[pivot]==key)
			return pivot;
		if(a[0]<pivot)
			return binSearch(a,key,0,pivot-1);
		return binSearch(a,key,pivot+1,n-1);
	}

	static int findPivot(int a[],int low,int high)
	{
		if(high<low)
			return -1;
		if(high==low)
			return low;

		int mid=(low+high)/2;
		
		if(mid<high && a[mid]>a[mid+1])
			return mid;
		if(mid>low && a[mid]<a[mid-1])
			return mid-1;
		if(a[low]>=a[mid])
			return findPivot(a,low,mid-1);
		return findPivot(a,mid+1,high);
	}

	static int binSearch(int a[],int key,int low,int high)
	{	
		int mid=(low+high)/2;
		if(a[mid]==key)
			return mid;
		if(a[mid]>key)
			return binSearch(a,key,low,mid-1);
		return binSearch(a,key,mid+1,high);
	}
	public static void main(String[] args) {
		int a[]={1,2,3,4,5,6,7,8,9};
		CyclicRotate.rotate(a);
		CyclicRotate.rotate(a);
		CyclicRotate.rotate(a);
		for(int i=0;i<a.length;i++)
			System.out.print(a[i]+"\t");
		int b=pivotBinarySearch(a,a.length,5);
		System.out.println("found "+a[b]+" at "+b);
	}
}