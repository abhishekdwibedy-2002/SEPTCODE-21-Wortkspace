import java.util.Scanner;
public class Main
{
    public void remove(String name[],int n)
    {
        int temp=0;
        char ch,ch1;
        int len=n;
        int rem[]=new int[len];
        for(int i=0;i<len;i++)
        {
            int l=name[i].length();
            temp=0;
            for(int j=0;j<l-1;j++)
            {
                ch=name[i].charAt(j);
                ch1=name[i].charAt(j+1);
                if(ch==ch1)
                temp++;
            }
            rem[i]=temp;
        }
        for(int i=0;i<len;i++)
        {
            System.out.println(rem[i]);
        }
    }
	public static void main(String[] args) {
		Scanner sc =new Scanner(System.in);
		Main ob=new Main();
		int n=sc.nextInt();
		String str[]=new String[n];
		for(int i=0;i<n;i++)
		{
		    str[i]=sc.next();
		}
		ob.remove(str,n);
	}
}
