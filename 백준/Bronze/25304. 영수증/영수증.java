import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int count = sc.nextInt();
        int sum = 0;
        for(int i=1;i<=count;i++){
            int product = sc.nextInt();
            int how = sc.nextInt();
            sum += (product*how);
        }
        if(num==sum){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}