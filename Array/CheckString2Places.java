public class CheckString2Places
{
	static Boolean Rightreverse(String str,String str2)
	{
		int n=str.length();
		int k=2;
		str=Leftreverse(str,0,n-(k+1));
		str=Leftreverse(str,n-k,n-1);
		str=Leftreverse(str,0,n-1);
		System.out.println("Right-reverse : "+str);
		if(str.equals(str2))
			return true;
		return false;
	}
	static String Leftreverse(String str,int low,int high)
	{
		char ch[]=str.toCharArray();
		while(low<high)
		{
			char t=ch[low];
			ch[low]=ch[high];
			ch[high]=t;
			low++;
			high--;
		}
		return String.valueOf(ch);
	}
	static Boolean CheckString2Places(String str1,String str2)
	{
		int k=2;
		int n=str1.length();
		str1=Leftreverse(str1,0,k-1);
		str1=Leftreverse(str1,k,n-1);
		str1=Leftreverse(str1,0,n-1);
		System.out.println(str1);
		if(str1.equals(str2))
			return true;
		return false;
	}
	public static void main(String[] args) {
		String str1="amazon";
		String str2="onamaz";
		System.out.println("Left Rotation Checking : "+CheckString2Places(str1,str2));
		
		System.out.println("Right Rotation Checking : "+Rightreverse(str1,str2));
		System.out.println(str2);

	}
}