TOPTARGETS := all clean

SUBDIRS := $(wildcard q*/.)

$(TOPTARGETS): $(SUBDIRS)
$(SUBDIRS):
		@echo $(SUBDIRS)
		$(MAKE) -C $@ $(MAKECMDGOALS)

.PHONY: $(TOPTARGETS) $(SUBDIRS)