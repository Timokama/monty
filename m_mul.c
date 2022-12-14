#include "monty.h"

/**
 * m_mul - multiply top two elements of stack and push results
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void m_mul(stack_t **stack, unsigned int line_number)
{
	int n, m, flag;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't mul, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	m_pop(stack, line_number);
	m = (*stack)->n;
	m_pop(stack, line_number);
	flag = var.queue;
	var.queue = 0;
	m_push2(stack, m * n);
	var.queue = flag;
}
