import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[31];
        for(int j=1;j<29;j++){
            int num = sc.nextInt();
            arr[num] = 1;
        }
        for(int k=1;k<arr.length;k++){
            if (arr[k]!=1){
                System.out.println(k);
            }
        }
    }
}