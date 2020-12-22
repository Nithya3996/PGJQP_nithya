import java.util.Scanner;
class IncrementNumber
{
public static void main(String[] args)
{
int num;
System.out.println("Enter a number");
Scanner inc=new Scanner(System.in);
num=inc.nextInt();
System.out.println("Increment Number is "+(num+7));
}
}