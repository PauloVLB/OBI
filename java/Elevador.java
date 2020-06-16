import java.util.Scanner;
import java.util.Arrays;

public class Elevador{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);

    int n = in.nextInt();
    int[] p =  new int[n];

    for(int i = 0; i < n; i++) p[i] = in.nextInt();

    Arrays.sort(p);

    char pode = 'S';

    if(p[0] > 8) pode = 'N';
    else{
      for(int i = 1; i < n; i++) {
        if(p[i] - p[i-1] > 8) {
          pode = 'N';
          break;
        }
      }
    }

    System.out.println(pode);
  }
}
