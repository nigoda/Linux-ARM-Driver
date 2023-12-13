cmd_/dynamic/dyn_demo.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o /dynamic/dyn_demo.ko /dynamic/dyn_demo.o /dynamic/dyn_demo.mod.o;  true
