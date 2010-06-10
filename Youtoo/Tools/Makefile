###-----------------------------------------------------------------------------
### ---                   EuLisp System 'youtoo'
###-----------------------------------------------------------------------------

###-----------------------------------------------------------------------------
### EuLisp Tools Makefile
##
##  Building these with a version of Youtoo without dynamic linking makes
##  bootstrapping simpler.
##
###-----------------------------------------------------------------------------

ARCH := $(shell uname -m)
include ../../Lib.$(ARCH)/Makefile

###-----------------------------------------------------------------------------
### Source files
###-----------------------------------------------------------------------------

B2H_EM = b2h.em b2h-aux.em
B2H_C = $(B2H_EM:%.em=%.c) b2h_.c

I2DOC_EM = i2doc.em
I2DOC_C = $(I2DOC_EM:%.em=%.c) i2doc_.c

###-----------------------------------------------------------------------------
### Targets
###-----------------------------------------------------------------------------

all: b2h i2doc

###-----------------------------------------------------------------------------
### Compile b2h directly from the EuLisp source.
###-----------------------------------------------------------------------------

.PHONY: b2h
b2h: $(EUL_BIN_DIR)/b2h

$(EUL_BIN_DIR)/b2h: $(B2H_EM) | $(ARCH_DIR)/.
	${U2} ${U2FLAGS} b2h -od $(ARCH_DIR) -l level1 \
		-load_path $(EUL_DIR)/Modules/Vmeta
	mv $(ARCH_DIR)/b2h $(EUL_BIN_DIR)/b2h

###-----------------------------------------------------------------------------
### Compile i2doc directly from the EuLisp source.
###-----------------------------------------------------------------------------

.PHONY: i2doc
i2doc: $(EUL_BIN_DIR)/i2doc

$(EUL_BIN_DIR)/i2doc: $(I2DOC_EM) $(ARCH_DIR)/i2doc-ext.o | $(ARCH_DIR)/.
	${U2} ${U2FLAGS} i2doc -od $(ARCH_DIR) -l level1 -fff i2doc-ext
	mv $(ARCH_DIR)/i2doc $(EUL_BIN_DIR)/i2doc

###-----------------------------------------------------------------------------
### Miscellaneous commands
###-----------------------------------------------------------------------------

.PHONY: boot-clean
boot-clean: clean

clean:
	@rm -rf $(ARCH_DIR)
	@rm -f *.{h,i} *_.{c,h}
	@rm -f $(B2H_C) $(I2DOC_C)

distclean: clean
	@rm -rf platforms
	@rm -f $(EUL_BIN_DIR)/b2h $(EUL_BIN_DIR)/i2doc

###-----------------------------------------------------------------------------