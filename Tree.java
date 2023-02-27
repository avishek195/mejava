import java.net.SocketTimeoutException;
import java.util.*;

class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
    }
}

public class Tree {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        Node root = creatNode();
        System.out.println("preorder: ");
        preoder(root);
        System.out.println();
        System.out.println("inorder: ");
        inoder(root);
        System.out.println();
        System.out.println("postorder: ");
        postoder(root);
        System.out.println();
        System.out.println("The height of the BST is:");
        System.out.println(height(root));
        System.out.println("The total node of BST is: ");
        System.out.println(size(root));
    }

    static Node creatNode() {
        Node Root = null;
        int a;
        System.out.println("Enter data:");
        a = sc.nextInt();
        if (a == -1) {
            return null;
        }
        Root = new Node(a);
        System.out.println("Enter the left data of " + a);
        Root.left = creatNode();
        System.out.println("Enter the right data of " + a);
        Root.right = creatNode();
        return Root;
    }

    static void preoder(Node root) {
        if (root == null) {
            return;
        }
        System.out.print(root.data + " ");
        preoder(root.left);
        preoder(root.right);
    }

    static void inoder(Node root) {
        if (root == null) {
            return;
        }

        inoder(root.left);
        System.out.print(root.data + " ");
        inoder(root.right);
    }

    static void postoder(Node root) {
        if (root == null) {
            return;
        }
        postoder(root.left);
        postoder(root.right);
        System.out.print(root.data + " ");
    }

    static int height(Node node) {
        if (node == null) {
            return 0;
        }
        return Math.max(height(node.left), height(node.right)) + 1;
    }

    static int size(Node root) {
        if (root == null) {
            return 0;
        }
        return size(root.left) + size(root.right) + 1;
    }
}
