package java_lang.binary_trees;
public class hello {
    public static void main(String[] args) {

        node root = new node(5);
        root.left = new node(12);
        root.right = new node(13);

        root.left.left = new node(7);
        root.left.right = new node(14);

        root.right.right = new node(2);

        root.left.left.left = new node(17);
        root.left.left.right = new node(23);

        root.left.right.left = new node(27);
        root.left.right.right = new node(3);

        root.right.right.left = new node(8);
        root.right.right.right = new node(11);
        methods.printInOrder(root);
        System.out.println();
        methods.printPostOrder(root);
        System.out.println();
        methods.printPreOrder(root);
        System.out.println();
    }
}
