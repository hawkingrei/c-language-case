/*树的实现（前序，中序，后序）*/
#include <stdio.h>
#include <stdlib.h>
int NodeNum = 0;/*统计数的结点数*/
int LeafNum = 0;/*统计数的叶子结点数*/
char ch[] = {'a', 'b', 'c', ' ', ' ', 'd', ' ', ' ', 'e',  'f', ' ', ' ', 'g', ' ', ' '};
int inc = 0;
typedef struct TreeNode{
  char data;/*树中结点的数据是一个字符*/
	struct TreeNode *lchild;
	struct TreeNode *rchild;
}TREENODE;

int CreateBiTree(TREENODE **T)
/*按先序次序输入二叉树中结点的值,以空字符表示空树*/
{
	char i;
	if(ch[inc++]==' '){
		*T = NULL;
	}
	else
	{
		printf("%c\n",ch[inc-1]);
		if(!(*T = (TREENODE *)malloc(sizeof(TREENODE))))
		return -1;
		(*T)->data = ch[inc-1];
		printf("%c\n",(*T)->data);
		CreateBiTree(&((*T)->lchild));
		CreateBiTree(&((*T)->rchild));
	}
	return 1;
}
int PreOderTraverse(TREENODE *T){
	if(T){
		printf("%c  ",T->data);
		PreOderTraverse(T->lchild);
		PreOderTraverse(T->rchild);
	}
	return 1;
}
int InOderTraverse(TREENODE *T){
	if(T){
		InOderTraverse(T->lchild);
		printf("%c  ",T->data);
		InOderTraverse(T->rchild);
	}
	return 1;
}
int BackOderTraverse(TREENODE *T){
	if(T){
		BackOderTraverse(T->lchild);
		BackOderTraverse(T->rchild);
		printf("%c  ",T->data);
	}
	return 1;
}
void CountNodeNum(TREENODE *T){
	if(T){
		NodeNum ++;
		CountNodeNum(T->lchild);
		CountNodeNum(T->rchild);
	}
}
void CountLeafNum(TREENODE *T){
	if(T){
		if((!(T->lchild))&&(!(T->rchild)))
		LeafNum ++;
		CountLeafNum(T->lchild);
		CountLeafNum(T->rchild);
	}
}
int main()
{
	TREENODE *T;
	int i;
	CreateBiTree(&T);
	do{
		puts("**************************************************");
		puts("*                   you can choose:              *");
		puts("*  1:  Traverse the Binary tree by pre order     *");
		puts("*  2:  Traverse the Binary tree by mid order     *");
		puts("*  3:  Traverse the Binary tree by back order    *");
		puts("*  4:  Count the node num of the Binary tree     *");
		puts("*  5:  Count the leaf node num of the Binary tree*");
		puts("**************************************************");
		puts("please input your choice:");
		scanf("%d",&i);
   switch(i)
   {
		case 1:
			printf("The preoder is:\n");
			PreOderTraverse(T);
			printf("\n");
			break;
		case 2:
			printf("The midoder is:\n");
			InOderTraverse(T);
			printf("\n");
			break;
		case 3:
			printf("The backoder is:\n");
			BackOderTraverse(T);
			printf("\n");
			break;
		case 4:
			CountNodeNum(T);
			printf("The nodenum of the tree is:%d\n",NodeNum);
			break;
		case 5:
			CountLeafNum(T);
			printf("The leafnum of the tree is:%d\n",LeafNum);
			break;
		}
		printf("please input any char to go on\n");
		getch();
	}while((i>=1)&&(i<6));
	getch();
	return 1;
}
