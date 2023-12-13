cmd_/kern/kern_demo.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o /kern/kern_demo.ko /kern/kern_demo.o /kern/kern_demo.mod.o;  true
