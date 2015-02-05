#include <linux/module.h>
#include <linux/kernel.h>

MODULE_AUTHOR("Eddy Reyes");
MODULE_LICENSE("GPL");

int init_module(void)
{
	printk(KERN_ALERT "hello world\n");
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_ALERT "goodbye, cruel world\n");
}
