public class StringRotateSame
{
	static int StringRotateSame(String str)
	{
		String str1=str+str;
		//System.out.println(str1.substring(1,1+4));

		int i,n=str.length();
		for(i=1;i<=n;i++)
		{
			String subS=str1.substring(i,i+str.length());
			if(str.equals(subS))
				return i;
		}
		return n;

	}
	public static void main(String[] args) {
		String str="geekseeeeeeeeeeee";
		System.out.println(StringRotateSame(str));
	}
}