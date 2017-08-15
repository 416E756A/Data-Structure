import java.util.*;
public class Lexicographic
{
	static void Lexicographic(String str,int n)
	{
		int i;
		int res=0;
		char[] ch = str.toCharArray();
		for(i=0;i<n;i++)
		{
			if(ch[res]>=ch[i])
				res=i;
		}
		for(i=res;i<n;i++)
			System.out.print(ch[i]);
		for(i=0;i<res;i++)
			System.out.print(ch[i]);
	}


	static void Lexicographic(String str)
	{
		int i,n=str.length();
		String[] arr=new String[n];
		String str1=str+str;
		for(i=0;i<n;i++)
		{
			arr[i]=str1.substring(i,i+n);
		}
		Arrays.sort(arr);
		for(i=0;i<n;i++)
		System.out.println(arr[i]);

	}
	public static void main(String[] args) {
		String str="123";
		Lexicographic(str);
	}
}