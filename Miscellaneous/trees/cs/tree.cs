using System;

namespace Tree
{

    public class Node {

        public int key;
        public string value;
        public Node left, right; 


        public Node (int item) {

            key = item;
            left = null;
            right = null;

        }    

    }

    

    class Btree {

        private Node _root;

        public Btree (int key) {

            _root = new Node(key);

        }

        public Btree () {

            _root = null;

        }

        public void insert (int key) {
            if (_root != null){
                insert (key, _root);
            }
            else {
                _root  = new Node(key);
            }
        }

        private void insert (int key, Node node){
           

            if (key >= node.key ){
                if (node.right != null)
                    insert(key, node.right);
                else {
                    var new_node = new Node(key);
                    node.right = new_node;  
                }
            } else {

                if (node.left != null)
                    insert(key, node.left);
                else {
                    var new_node = new Node(key);
                    node.left = new_node;  
                }

            }
            
        }


        public void inorder_print() {
            inorder_print( _root);
            Console.WriteLine();
        }

        private void inorder_print( Node node){
            if (node != null){

                inorder_print(node.left);
                Console.Write(node.key + " ");
                inorder_print(node.right);

            }
        }


    }

    public class Program {


        public static void Main(String[] args) 
            { 

                Btree tree = new Btree();

                tree.insert(4);
                tree.insert(-1);
                tree.insert(3);
                tree.insert(2);
                tree.insert(1);

                tree.inorder_print();

            
            }
            
    }

}