import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner n = new Scanner(System.in);
        while(true){
            String a = n.next();
            int b = n.nextInt();
            int c = n.nextInt();
            n.nextLine();
            if(a.equals("#") && b == 0 && c == 0)
            {
                break;
            }
            else{
                if(b >17 || c >= 80){
                    System.out.println(a + " Senior");
                }
                else{
                    System.out.println(a + " Junior");
                }
            }
        }
        
    }
}