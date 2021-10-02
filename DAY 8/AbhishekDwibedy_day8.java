import java.util.Scanner;
public class Main
{
    public void check(String arr[])
    {
        int l=arr.length;
        int small=0,capital=0;
        String change[]=new String[l];
        for(int i=0;i<l;i++)
        {
            int len=arr[i].length();
            small=0;
            capital=0;
            for(int j=0;j<len;j++)
            {
                char ch=arr[i].charAt(j);
                if(Character.isLowerCase(ch))
                small+=1;
                if(Character.isUpperCase(ch))
                capital+=1;
            }
            if(small>=capital)
            change[i]=arr[i].toLowerCase();
            else
            change[i]=arr[i].toUpperCase();
        }
        for(int i=0;i<l;i++)
        {
            System.out.println(change[i]);
        }
        
    }
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		Main ob=new Main();
		int n=sc.nextInt();
		String word[]=new String[n+1];
		for(int i=0;i<=n;i++)
		{
		    word[i]=sc.nextLine();
		}
		ob.check(word);
	}
}
