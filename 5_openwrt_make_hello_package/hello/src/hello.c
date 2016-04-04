
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

int __init init_hello(void)
{
  printk("[Module Message] Hello, World\n");
  return 0;
}

void __exit cleanup_hello(void)
{
  printk("[Module Message] Goodbye, World\n");
}

module_init(init_hello);
module_exit(cleanup_hello);
MODULE_LICENSE("GPL");


