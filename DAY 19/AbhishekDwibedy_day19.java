import java.util.Scanner;
public class Main
{
    public int peek(int num[],int n)
    {
        int ctr=0;
        for(int i=0;i<n-1;i++)
        {
            if(num[i]==num[i+1])
            ctr++;
        }
        return ctr;
    }
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		Main ob=new Main();
		int t=sc.nextInt();
		int slope[]=new int[t];
		for(int i=0;i<t;i++)
		{
		    int n=sc.nextInt();
		    int range[]=new int[n];
		    for(int j=0;j<n;j++)
		    {
		        range[j]=sc.nextInt();
		    }
		    slope[i]=ob.peek(range,n);
		}
		for(int i=0;i<t;i++)
		{
		    if(slope[i]==0)
		    System.out.println("Steep");
		    else
		    System.out.println("Gentle");
		}
	}
}
