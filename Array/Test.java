public class Test
{
	void sum(int a,long b)
	{
		System.out.println("A");
	}
	void sum(long a,long b)
	{
		System.out.println("b");
	}
	public static void main(String[] args) {
		Cal ob =new Cal();
		ob.sum(20,20);
	}
}