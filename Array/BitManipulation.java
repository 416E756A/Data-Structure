public class BitManipulation
{
	static int check(long a,long b)
	{
		int i=0;
		while(true)
		{
			i++;
			a>>=1;
			System.out.println(a);
			if(a==b)
				return i;
		}
		//return -1;
	}
	public static void main(String[] args) {
		long b=2147483678l;int a=122;
			System.out.println(check(a,b));
	}
}