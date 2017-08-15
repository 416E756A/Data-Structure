public class LeftRotate
{
	static void LeftCount(int a[])
	{
		int n=a.length;
		int i,t=a[0];
		for(i=0;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		a[n-1]=t;
	}
	public static void main(String[] args) {
		int a[]={1, 3, 5, 7, 9};
		int k1=1,k2=3,k3=4,k4=6;
		int i,j;
		for(j=1;j<=6;j++){
			LeftCount(a);
			if(j==1){
				for(i=0;i<a.length;i++)
					System.out.print(a[i]+"\t");
				System.out.println();}
			if(j==3){
				for(i=0;i<a.length;i++)
					System.out.print(a[i]+"\t");
				System.out.println();}
			if(j==4){
				for(i=0;i<a.length;i++)
					System.out.print(a[i]+"\t");
				System.out.println();}
			if(j==6){
				for(i=0;i<a.length;i++)
					System.out.print(a[i]+"\t");
				System.out.println();}
		}
	}
}