cmd_/kern1/kern_demo.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o /kern1/kern_demo.ko /kern1/kern_demo.o /kern1/kern_demo.mod.o;  true
