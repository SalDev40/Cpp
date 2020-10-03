#include "avl.h"

int main(){
	AVL avl;
	avl.Insert(6);
	avl.Insert(4);
	avl.Insert(8);
	 avl.Insert(3);
	avl.Insert(2);
	// avl.Insert(11);
	avl.Inorder();



	std::cout << std::endl;

	return 0;
}
