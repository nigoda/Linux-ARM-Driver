#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

/*Module Init function*/

static int __init hello_world_init(void)
{
printk(KERN_INFO "Welcome to Linux Driver\n");
printk(KERN_INFO "This is the simple Module\n");
printk(KERN_INFO "Kernel MOdule Inserted Successfully\n");
return 0;
}

/*Module EXit function */

static void __exit hello_world_exit(void)
{
printk(KERN_INFO "Kernel Module Removed Successfully..\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("RM");
MODULE_DESCRIPTION("A simple hello world driver");
MODULE_VERSION("2:1.0");

