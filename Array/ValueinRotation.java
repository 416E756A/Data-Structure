import java.util.*;
public class ValueinRotation
{
	static int findRotation(int a[],int key)
	{
		int i,n=a.length;
		int cursum=0,curval=0;
		for(i=0;i<n;i++)
		{
			cursum+=a[i];
			curval+=i*a[i];
		}
		for(i=0;i<n;i++)
		{
			if(curval==key)
				return i;
			curval=curval+cursum- n*a[n-(i+1)];
		}
		return -1;
	}

	static int MaxSumRotation(int a[])
	{
		TreeSet t=new TreeSet();
		int i,arrsum=0,cursum=0,n=a.length;
		for(i=0;i<n;i++)
		{
			arrsum+=a[i];
			cursum+=i*a[i];
		}
		int res=0;
		for(i=0;i<n;i++)
		{
			//t.add(cursum);
			cursum=cursum+arrsum-n*a[n-(i+1)];
			res=Math.max(res,cursum);
		}
		//Integer max=(Integer)t.last();
		//int maxx= (int)max;
		return res;
	}


	static int Rotate(int a[],int key)	//Method 1
	{
		int j,i,n=a.length;
		for(j=0;j<n;j++)
		{
			int sum=0;
			for(i=0;i<n;i++)
				sum+=i*a[i];
			if(sum==key)
				return j;
			CyclicRotate.rotate(a);
		}
		return -1;
	}
	public static void main(String[] args) {
		int a[]={8,3,1,2};
		System.out.println(MaxSumRotation(a));
	}
}