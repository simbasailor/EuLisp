### Copyright 2010 Henry G. Weller
###-----------------------------------------------------------------------------
##  This file is part of
### ---                                     EuLisp
###-----------------------------------------------------------------------------
##
##  Eu2C is free software: you can redistribute it and/or modify it under the
##  terms of the GNU General Public License version 2 as published by the Free
##  Software Foundation.
##
##  Eu2C is distributed in the hope that it will be useful, but WITHOUT ANY
##  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
##  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
##  details.
##
##  You should have received a copy of the GNU General Public License along with
##  this program.  If not, see <http://www.gnu.org/licenses/>.
##
###-----------------------------------------------------------------------------
### Title: Examples Makefile
###  Maintainer: Henry G. Weller
###-----------------------------------------------------------------------------
ARCH := $(shell uname -m)
include ../Lib.$(ARCH)/Makefile

###-----------------------------------------------------------------------------
### Examples directories
###-----------------------------------------------------------------------------
EXAMPLE_DIRS = Misc C++ Ffi StringPerls

###-----------------------------------------------------------------------------
### Miscellaneous Commands
###-----------------------------------------------------------------------------
.PHONY: all
all:
	@echo "COMPILING Examples ..."
	@$(call makeAll,$(EXAMPLE_DIRS),)
	@echo "DONE"

.PHONY: clean
clean:
	@echo "CLEANING Examples ..."
	@$(call makeAll,$(EXAMPLE_DIRS),$@)
	@echo "DONE"

.PHONY: gitclean
gitclean:
	@echo "GIT-CLEANING Examples ..."
	@$(call makeAll,$(EXAMPLE_DIRS),distclean)
	@echo "DONE"

.PHONY: distclean
distclean:
	@echo "DISTCLEANING Examples ..."
	@$(call makeAll,$(EXAMPLE_DIRS),$@)
	@echo "DONE"

###-----------------------------------------------------------------------------
