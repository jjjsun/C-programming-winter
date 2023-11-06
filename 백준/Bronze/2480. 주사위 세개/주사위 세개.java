import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        if (a == b) {
            if(b==c){
                int sum = 10000+(a*1000);
                System.out.println(sum);
            }
            else{
                int sum = 1000+(a*100);
                System.out.println(sum);
            }
        }
        else if (a>b){
            if(b==c){
                int sum = 1000+(b*100);
                System.out.println(sum);
            }
            else if (b>c){
                int sum = (a*100);
                System.out.println(sum);
            }
            else{
                if(a==c){
                    int sum = 1000+(c*100);
                    System.out.println(sum);
                }
                else if(a>c){
                    int sum = (a*100);
                    System.out.println(sum);
                }
                else{
                    int sum = (c*100);
                    System.out.println(sum);
                }
            }
        }
        else{
            if(a==c){
                int sum = 1000+(c*100);
                System.out.println(sum);
            }
            else if(a>c){
                int sum = (b*100);
                System.out.println(sum);
            }
            else{
                if(b==c){
                    int sum = 1000+(c*100);
                    System.out.println(sum);
                }
                else if(b>c){
                    int sum = (b*100);
                    System.out.println(sum);
                }
                else{
                    int sum = (c*100);
                    System.out.println(sum);
                }
            }
        }
    }
}