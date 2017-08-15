public class CheckMatrixCircularRotation
{
	class c = new class c();
	static Boolean CheckMatrixCircularRotation(int a[][],int m,int n)
	{
		String str1="";
		int i=0,j;
		for(j=0;j<n;j++)
			str1+=a[i][j];
		String str=str1+str1;
		for(i=0;i<m;i++)
		{
			String str2="";
			for(j=0;j<n;j++)
			{
				str2+=a[i][j];
			}
			if(str.indexOf(str2)==-1)
				return false;
		}
		return true;
	}
	public static void main(String[] args) {
		int a[][]={{1, 2, 3, 4},
        {4, 1, 2, 3},
        {3, 4, 1, 2},
        {2, 3, 4, 1}
    };
    System.out.println(CheckMatrixCircularRotation(a,4,4));
	}
}
class B
{

}