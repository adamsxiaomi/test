## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,em3 linker.cmd package/cfg/app_pem3.oem3

# To simplify configuro usage in makefiles:
#     o create a generic linker command file name 
#     o set modification times of compiler.opt* files to be greater than
#       or equal to the generated config header
#
linker.cmd: package/cfg/app_pem3.xdl
	$(SED) 's"^\"\(package/cfg/app_pem3cfg.cmd\)\"$""\"F:/file/collector_cc1310lp1120/collector_cc1310lp/collector_cc1310lp/configPkg/\1\""' package/cfg/app_pem3.xdl > $@
	-$(SETDATE) -r:max package/cfg/app_pem3.h compiler.opt compiler.opt.defs
