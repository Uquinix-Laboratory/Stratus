KERNEL=$(BINDIR_KERNEL)/kernel.elf

KERNEL_SRC += \
	sources/libs/bal/abi/helpers.c \
	sources/libs/stratus-io/emit.c \
	sources/libs/stratus-io/funcs.c \
	sources/libs/stratus-io/base.c \
	sources/libs/stratus-time/convert.c \
	sources/libs/elf/elf.c \
	sources/libs/bal/boot/handover.c \
	sources/libs/stdc-ansi/ctype.c \
	sources/libs/stdc-ansi/string.c \
	sources/libs/stratus-io/buf.c \
	$(wildcard sources/kernel/*.c) \
	$(wildcard sources/kernel/$(ARCH)/*.c) \
	$(wildcard sources/kernel/$(ARCH)/*.s) \
	$(wildcard sources/libs/embed/$(ARCH)/*.c) \
	$(wildcard sources/libs/embed/$(ARCH)/*.s) \
	$(wildcard sources/libs/embed/kernel/*.c) \
	$(wildcard sources/libs/hw/acpi/*.c) \
	$(wildcard sources/libs/stratus-alloc/*.c) \
	$(wildcard sources/libs/stratus-ds/*.c) \
	$(wildcard sources/libs/stratus-hash/*.c) \
	$(wildcard sources/libs/hw/fdt/*.c) \
	$(wildcard sources/libs/hw/uart/*.c) \
	$(wildcard sources/libs/stratus-parse/*.c) \
	$(wildcard sources/libs/stratus-debug/*.c) \
	$(wildcard sources/libs/stratus-mem/*.c) \
	$(wildcard sources/libs/stratus-sync/*.c) \
	$(wildcard sources/libs/stratus-text/*.c) \
	$(wildcard sources/libs/stratus-fmt/*.c) \
	$(wildcard sources/libs/absan/*.c) \
	$(wildcard sources/libs/ubsan/*.c)

KERNEL_OBJ = \
	$(patsubst sources/%, $(BINDIR_KERNEL)/%.o, $(KERNEL_SRC))

DEPENDENCIES += $(KERNEL_OBJ:.o=.d)

$(BINDIR_KERNEL)/%.c.o: sources/%.c | $(GENERATED_MOD)
	@$(MKCWD)
	$(USER_CC) -c -o $@ $< $(USER_KCFLAGS)

$(BINDIR_KERNEL)/%.s.o: sources/%.s
	@$(MKCWD)
	$(USER_AS) -o $@ $< $(USER_ASFLAGS)

$(KERNEL): $(KERNEL_OBJ)
	@$(MKCWD)
	$(USER_LD) -o $@ $^ $(USER_KLDFLAGS)

ALL+=$(KERNEL)
