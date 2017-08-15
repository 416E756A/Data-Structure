public class RotateString
{
	static void RightRotate(String str,int d)
	{
		LeftRotate(str,d);
	}
	static String reverse(String str,int q,int r)
	{
		int i;
		char t;
		char[] ch=str.toCharArray();
		int mid=(q+r)/2;
		while(q<r)
		{
			t=ch[q];
			ch[q++]=ch[r];
			ch[r--]=t;
		}
		return String.valueOf(ch);
	}
	static void LeftRotate(String str,int d)
	{

		str=reverse(str,0,d-1);
		System.out.println(str);
		str=reverse(str,d,str.length()-1);
		System.out.println(str);
		str=reverse(str,0,str.length()-1);
		System.out.println(str);
	}


	static void Rotate(String str,int d)
	{
		char[] ch=str.toCharArray();
		int i,n=ch.length;
		System.out.print("Left Rotation: \t");
		for(i=d;i<n;i++)
		{
			System.out.print(ch[i]);
		}
		for(i=0;i<d;i++)
		{
			System.out.print(ch[i]);
		}
		System.out.println();
		System.out.print("Right Rotation: \t");
		for(i=n-d;i<n;i++)
		{
			System.out.print(ch[i]);
		}
		for(i=0;i<n-d;i++)
		{
			System.out.print(ch[i]);
		}
	}
	public static void main(String[] args) {
		String str="Anuj";
		int d=1;
		LeftRotate(str,d);
		RightRotate(str,d);
		//System.out.print(str);
	}
}