cmd_/static/stat_demo.mod := printf '%s\n'   stat_demo.o | awk '!x[$$0]++ { print("/static/"$$0) }' > /static/stat_demo.mod
