#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    int value;
    int key;
    struct tree *left;
    struct tree *right;
    struct tree *parent;
} node;

int tea=0;

//Инициализация
node* create(int key, int value)
{
// Выделение памяти под корень дерева
    node *tmp = malloc(sizeof(node));
// Присваивание значения ключу
    tmp -> value = value;
    tmp -> key = key;
// Присваивание указателю на родителя значения NULL
    tmp -> parent = NULL;
// Присваивание указателю на левое и правое поддерево значения NULL
    tmp -> left = NULL;
    tmp -> right = NULL;
         
    return tmp;
}

//Добавляем узел
void add(node* root, int key, int value)
{

	while(1)
	{
		if (root->key==key)
		{
			root->value=value;
			break;
		}
		
		if (key>root->key)
		{
			if (root->right==NULL)
			{
				node *tmp = malloc(sizeof(node));
				root->right = tmp;
				tmp->key=key;
				tmp->value=value;
				tmp->parent=root;
				break;
			}
			else
			{
				root=root->right;
				continue;
			}
		}
		
		if (key<root->key)
		{
			if (root->left==NULL)
			{
				node *tmp = malloc(sizeof(node));
				root->left = tmp;
				tmp->key=key;
				tmp->value=value;
				tmp->parent=root;
				break;
			}
			else
			{
				root=root->left;
				continue;
			}
		}
    }
}

//симметричный обход
void *Show(node *root)
{
  if (root->left!=NULL)
      Show(root->left);//levoe
     printf("%d", root->key); //posetili golovu

  if (root->right!=NULL)
      Show(root->right);// oboshli pravoe
}
int main()
{
  int k, key, value;
  scanf ("%d", &k);
  scanf("%d", &key);
  scanf("%d", &value);
  node *root = create(key, value);
  for (int i=1; i<k; i++)
  {
           scanf("%d", &key);
           scanf("%d", &value);
           add (root, key, value);
  }
  Show (root);             
  printf ("\n");
}


