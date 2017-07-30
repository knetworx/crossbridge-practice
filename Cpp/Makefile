PATH:=/Users/nheilmann/crossbridge/sdk/usr/bin:$(PATH)
FLASCC=/Users/nheilmann/crossbridge/sdk
FLEX=/Users/nheilmann/Dropbox/Flash\ Players/AIRSDK_Compiler
BASE_CFLAGS:=-Wno-write-strings -Wno-trigraphs

flash_utils: details
	@echo "Building flash_utils"
	"$(FLASCC)/usr/bin/clang++" $(BASE_CFLAGS) flash_utils.h -emit-swf -swf-size=500x500 -o flash_utils.swf -Flash++ -AS3++

details:
	@echo "-- Using environment variables --"
	@echo "FLASCC: $(FLASCC)"
	@echo "FLEX: $(FLEX)"
	@echo "PATH: $(PATH)"
	@echo "BASE_CFLAGS: $(BASE_CFLAGS)"
