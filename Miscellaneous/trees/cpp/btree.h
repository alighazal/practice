// based on implemention found online by toboqus 
//https://gist.github.com/toboqus/def6a6915e4abd66e922

#ifndef DATE_H
#define DATE_H

using namespace std;

struct node{
	int value;
	node *left;
	node *right;
};


class btree{
public:
	btree();
	~btree();

	void insert(int key);
	node *search(int key);
	void destroy_tree();

	void inorder_print();
	void postorder_print();
	void preorder_print();

private:
	void insert(int key, node *leaf);

	void destroy_tree(node *leaf);

	node *search(int key, node *leaf);

	void inorder_print(node *leaf);
	void postorder_print(node *leaf);
	void preorder_print(node *leaf);

	node *root;
};

#endif