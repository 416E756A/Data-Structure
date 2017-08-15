import java.util.*;
public class FindPair
{
	static void pairW(int a[],int sum)	//Method 1
	{
		int i;
		int n=a.length;
		for(i=0;i<n;i++)
			if(a[i]>a[i+1])
				break;
		int low=(i+1)%n;
		int high=i;
		while(low!=high)
		{
			if(a[low]+a[high]==sum){
				System.out.println(a[low]+" "+a[high]);
			}
			if(a[low]+a[high]<sum)
				low=(low+1)%n;
			else
				high=high-1;
		}
	}
	static void pair(int a[],int sum)	//Method 2
	{
		HashMap<Integer,Integer> hm=new HashMap<Integer,Integer>();
		int i,t;
		for(i=0;i<a.length;i++)
		{
			Integer p=hm.get(a[i]);
			if(p!=null){
				System.out.println((int)p+"\t"+i+" = "+a[(int)p]+"\t"+a[i]);
			}
			t=sum-a[i];
			hm.put(t,i);
		}
	}



	static void find(int a[],int sum)	//Method 3
	{
		int i;
		int j;
		int n=a.length;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(i!=j)
					if(sum==a[i]+a[j])
						System.out.print(a[i]+"\t"+a[j]);
					System.out.println();
	}
	public static void main(String[] args) {
		int a[]={1,2,3,4,5,6,7,8,9};
		CyclicRotate.rotate(a);
		CyclicRotate.rotate(a);
		CyclicRotate.rotate(a);
		for(int i=0;i<a.length;i++)
			System.out.print(a[i]+"\t");
		System.out.println();
		
		pairW(a,15);
	}
}