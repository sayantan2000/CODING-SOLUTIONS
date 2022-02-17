import java.util.Scanner;

class binaryTree {
     static Scanner sc=null;
    public static void main(String[] args) {
         sc=new Scanner(System.in);
         Node root=CreateTree();
         inorder(root);
         System.err.println();
         preOrder(root);
         System.err.println();
         Postorder(root);
         Node inverted=inVertTree(root);
         System.out.println("Inverted Tree");
         inorder(inverted);
        
        
    }
static Node CreateTree(){
        Node node=null;
        System.out.print("Enter Data :");
        int data=sc.nextInt();
        node=new Node(data);
          if(node.data==-1) return null;
        System.out.println("Enter Data for left  "+" "+ data);
        node.left=CreateTree();
        System.out.println("enter data for right" + " "+data);
        node.right=CreateTree();

        return node;
            
    }


static void  inorder(Node node){
        if(node==null) return;
        inorder(node.left);
        System.out.print(node.data +" ");
        inorder(node.right);
  }

static void  preOrder(Node node){
    if(node==null) return;
    System.out.print(node.data +" ");
    preOrder(node.left);
    preOrder(node.right);
}

static void  Postorder(Node node){
    if(node==null) return;
    Postorder(node.left);
    Postorder(node.right);
    System.out.print(node.data +" ");
}

static Node inVertTree(Node tree){
    if(tree==null) 
      return null;
   Node left=inVertTree(tree.left);
   Node right=inVertTree(tree.right);
    tree.left=right;
    tree.right=left;
    return tree;
}}


class Node{
    Node left,right;
    int data;

    Node(int data){
        this.data=data;
    }
}