import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        //java while문의 조건에 EOF처리를 위해서 Scanner의 메소드의 hasNext()로 처리해준다
        while(sc.hasNextInt()){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int sum = a+b;
            System.out.println(sum);
        }

    }
}