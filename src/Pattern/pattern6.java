package Pattern;

public class pattern6 {
    public static void main(String[] args) {
        for(int i = 5 ; i >= 0 ; i--){
            int temp = 1;
            for(int j = 0 ; j <= i ; j++){
                System.out.print(temp + " ");
                temp++;
            }
            System.out.println( );
        }
    }
}
