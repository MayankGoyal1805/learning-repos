package pw.lecture15;

public class temp {
    public static void main(String[] args) {
        int arr[] = {5,6,5,1,5};
        int occ = 0;
        for (int i : arr) {
            if (i == 5) {
                occ ++ ;
            }
        }
        System.out.println(occ+" occurences");
    }
}
