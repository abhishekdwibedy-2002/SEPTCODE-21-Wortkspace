import java.util.Scanner;
public class Main
{
    public void devide(int num[],int k)
    {
        int temp=0,d;
        int count[]=new int[k];
        for(int i=0;i<k;i++)
        {
            temp=0;
            d=num[i];
            while(d>1)
            {
                temp++;
                d=d/2;
            }
            count[i]=temp;
        }
        for(int i=0;i<k;i++)
        {
            System.out.println(count[i]);
        }
    }
	public static void main(String[] args) 
	{
	    Scanner sc=new Scanner(System.in);
	    Main ob=new Main();
	    int n=sc.nextInt();
	    int nums[]=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        nums[i]=sc.nextInt();
	    }
	    ob.devide(nums,n);
	    
	}
}
