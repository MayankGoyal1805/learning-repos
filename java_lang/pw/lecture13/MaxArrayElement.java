package pw.lecture13;

public class MaxArrayElement {
    public static void main(String[] args) {
        int arr[] = {5,3,6,8,2,1,9,4,7};
        int max= arr[0];
        int index=0;
        // for (int i : arr) {
        //     if(i>max) max=i;
        // }
        // System.out.println("The max value element is: "+max);

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > max) {max = arr[i] ;
                index = i;}
        }
        System.out.println("The max value element of the array is "+max+" at index "+index);
    }
}
