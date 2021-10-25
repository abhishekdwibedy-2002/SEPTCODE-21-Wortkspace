import java.util.Scanner;
public class Main
{
    public int find(int num[],int n)
    {
        int count=0;
        for(int i=1;i<=n;i++)
        {
            count=0;
            for(int j=0;j<n;j++)
            {
                if(num[j]==i)
                count++;
            }
            if(count==2)
            return i+1;
        }
        return 0;
    }
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int t=sc.nextInt();
	    Main ob=new Main();
	    int cheat[]=new int[t];
	    for(int i=0;i<t;i++)
	    {
	        int l=sc.nextInt();
	        int mark[]=new int[l];
	        for(int j=0;j<l;j++)
	        {
	            mark[j]=sc.nextInt();
	        }
	        cheat[i]=ob.find(mark,l);
	    }
	    for(int i=0;i<t;i++)
	    {
	        System.out.println(cheat[i]);
	    }
	}
}
