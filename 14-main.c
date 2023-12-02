#include "binary_trees.h"

int main(void)
{
	    binary_tree_t *root;
	        int balance;

		    root = binary_tree_node(NULL, 98);
			    root->right = binary_tree_node(root, 40);
				    binary_tree_insert_right(root, 128);
					    binary_tree_insert_right(root->left, 50);
						        binary_tree_print(root);

							    balance = binary_tree_balance(root);
							        printf("Balance of %d: %+d\n", root->n, balance);
								    balance = binary_tree_balance(root->right);
								        printf("Balance of %d: %+d\n", root->right->n, balance);
										    return (0);
}
