import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int m = sc.nextInt();
        int temp;
        for(int i=0;i<arr.length;i++){
            arr[i] = i+1;
        }
        for(int j=0;j<m;j++){
            int a = sc.nextInt();
            int b = sc.nextInt();

            temp = arr[a-1];
            arr[a-1] = arr[b-1];
            arr[b-1] = temp;
        }
        for(int z = 0;z<arr.length;z++){
            System.out.print(arr[z]+ " ");
        }

    }
}