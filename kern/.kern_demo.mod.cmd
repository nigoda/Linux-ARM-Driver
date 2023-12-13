cmd_/kern/kern_demo.mod := printf '%s\n'   kern_demo.o | awk '!x[$$0]++ { print("/kern/"$$0) }' > /kern/kern_demo.mod
