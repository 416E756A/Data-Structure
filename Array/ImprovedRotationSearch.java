public class ImprovedRotationSearch
{
	static int search(int a[],int low,int high,int key)
	{
		int mid=(low+high)/2;
		if(a[mid]==key)
			return mid;
		if(a[low]<a[mid])
		{
			if(key>=a[low] && key<=a[mid])
				return search(a,low,mid-1,key);
			return search(a,mid+1,high,key);
		}

		if(key>a[mid] && key<a[high])
			return search(a,mid+1,high,key);
		else
			return search(a,low,mid-1,key);
	}
	public static void main(String[] args) {
		
		int a[]={1,2,3,4,5,6,7,8,9};
		CyclicRotate.rotate(a);
		CyclicRotate.rotate(a);
		CyclicRotate.rotate(a);
		for(int i=0;i<a.length;i++)
			System.out.print(a[i]+"\t");
		int b=search(a,0,a.length-1,5);
		System.out.println("found "+a[b]+" at "+b);

	}
}