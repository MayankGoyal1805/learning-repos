package java_lang.binary_trees;

import java.util.ArrayList;

public class methods {
    public static void printInOrder(node n){
        if(n==null) return;
        printInOrder(n.left);
        System.out.print(n.data+" ");
        printInOrder(n.right);
    }

    public static void printPreOrder(node n){
        if(n==null) return;
        System.out.print(n.data+" ");
        printPreOrder(n.left);
        printPreOrder(n.right);
    }

    public static void printPostOrder(node n){
        if(n==null) return;
        printPostOrder(n.left);
        printPostOrder(n.right);
        System.out.print(n.data+" ");
    }

    public static void printLevelOrder(node root){
        if(root==null) return;
        ArrayList<ArrayList<Integer>> ansList;
        

    }
}
