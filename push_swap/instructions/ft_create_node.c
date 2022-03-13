#include "instruction.h"

t_stack	*ft_create_node(int	data)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	node->next = NULL;
	node->previous = NULL;
	node->data = data;
	return (node);
}