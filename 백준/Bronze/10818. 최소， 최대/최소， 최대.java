import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int count = 0;
        int n = sc.nextInt();
        int[] arr = new int[n];
        int min = 1000000;
        int max = -1000000;
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        for(int j=0;j<arr.length;j++){
            if(arr[j]<min){
                min = arr[j];
            }
            if(arr[j]>max){
                max= arr[j];
            }
        }
        System.out.println(min+" "+max);

    }
}