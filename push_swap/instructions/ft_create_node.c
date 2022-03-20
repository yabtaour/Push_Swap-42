#include "instruction.h"

t_stack	*ft_create_node(int	data, int pos)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	node->next = NULL;
	node->previous = NULL;
	node->data = data;
	node->pos = pos;
	return (node);
}