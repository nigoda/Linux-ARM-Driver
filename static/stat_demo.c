#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/printk.h>


dev_t dev =MKDEV(235,0);

static int __init hello_world_init(void)
{
	register_chrdev_region(dev,1,"RM_Dev");
	printk(KERN_INFO "Major = %d Minor = %d\n",MAJOR(dev),MINOR(dev));
	printk(KERN_INFO "Kernel Module Inserted Successfully..\n");
	return 0;
}

static void __exit hello_world_exit(void)
{
	unregister_chrdev_region(dev,1);
	printk(KERN_INFO "Kernel Module Removed Successfully..\n");
}


module_init(hello_world_init);
module_exit(hello_world_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("SL <SL@gmail.com>");
MODULE_DESCRIPTION("Simple linux driver (Statically allocating the Major and Minor number)");
MODULE_VERSION("1.0");
