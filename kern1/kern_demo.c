#include <linux/init.h>
#include <linux/kernel.h> 
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/printk.h>
#include <linux/stat.h>

MODULE_LICENSE("GPL");

static short int myshort = 1;
static int myint = 420;
static long int mylong =9999;
static char *mystring ="blue";
static int myintarray[2] = {40,410};
static int arr_argc = 0;


module_param(myshort, short, S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP);
MODULE_PARM_DESC(myshort, "A short interger");

module_param(myint, int, S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);
MODULE_PARM_DESC(myint, "An interger");


module_param(mylong, long, S_IRUSR);
MODULE_PARM_DESC(mylong, "A long interger");

module_param(mystring, charp, 0000);
MODULE_PARM_DESC(mystring, "A character string");

module_param_array(myintarray, int, &arr_argc,0000);
MODULE_PARM_DESC(myintarray, "An array of interger");

static int __init hello_5_init(void)
{
	int i;
	pr_info("Hello, world 5\n===========\n");
	pr_info("myshort is a short interger: %hd\n",myshort);
	pr_info("myint is an interger: %d\n",myint);
	pr_info("mylong is a long interger: %ld\n",mylong);
	pr_info("mystring is a string: %s\n",mystring);

	for(i=0; i<ARRAY_SIZE(myintarray); i++)
	 pr_info("myintarray[%d]=%d\n",i,myintarray[i]);

	return 0;
}

static void __exit hello_5_exit(void)
{
	pr_info("Goodbye, world 5\n");
}

module_init(hello_5_init);
module_exit(hello_5_exit);
