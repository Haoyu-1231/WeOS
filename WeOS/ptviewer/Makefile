APP      = ptviewer
STACK    = 4480k
MALLOC   = 0k

TOOLPATH = ../../z_tools/
INCPATH  = ../../z_tools/haribote/
APILIBPATH   = ../apilib/
HARIBOTEPATH = ../weos/

MAKE     = $(TOOLPATH)make.exe -r
NASK     = $(TOOLPATH)nask.exe
CC1      = $(TOOLPATH)cc1.exe -I$(INCPATH) -I../ -Os -Wall -quiet
GAS2NASK = $(TOOLPATH)gas2nask.exe -a
OBJ2BIM  = $(TOOLPATH)obj2bim.exe
MAKEFONT = $(TOOLPATH)makefont.exe
BIN2OBJ  = $(TOOLPATH)bin2obj.exe
BIM2HRB  = $(TOOLPATH)bim2hrb.exe
BIM2BIN  = $(TOOLPATH)bim2bin.exe
RULEFILE = ../haribote.rul
EDIMG    = $(TOOLPATH)edimg.exe
IMGTOL   = $(TOOLPATH)imgtol.com
GOLIB    = $(TOOLPATH)golib00.exe 
COPY     = copy
DEL      = del

# デフォルト動作

default :
	$(MAKE) $(APP).pgm

# ファイル生成規則

$(APP).bim : $(APP).obj bmp.obj jpeg.obj $(APILIBPATH)apilib.lib Makefile
	$(OBJ2BIM) @$(RULEFILE) out:$(APP).bim map:$(APP).map stack:$(STACK) \
		$(APP).obj jpeg.obj bmp.obj $(APILIBPATH)apilib.lib

weos.img : ../weos/ipl20.bin ../weos/kernel.sys $(APP).pgm \
		Makefile
	$(EDIMG)   imgin:../../z_tools/fdimg0at.tek \
		wbinimg src:../weos/ipl09.bin len:512 from:0 to:0 \
		copy from:../weos/kernel.sys to:@: \
		copy from:$(APP).pgm to:@: \
		copy from:../nihongo/nihongo.fnt to:@: \
		imgout:weos.img

# 一般規則

%.gas : %.c ../apilib.h Makefile
	$(CC1) -o $*.gas $*.c

%.nas : %.gas Makefile
	$(GAS2NASK) $*.gas $*.nas

%.obj : %.nas Makefile
	$(NASK) $*.nas $*.obj $*.lst

%.org : %.bim Makefile
	$(BIM2HRB) $*.bim $*.org $(MALLOC)

%.pgm : %.org Makefile
	$(BIM2BIN) -osacmp in:$*.org out:$*.pgm

# コマンド

run :
	$(MAKE) weos.img
	$(COPY) weos.img ..\..\z_tools\qemu\fdimage0.bin
	$(MAKE) -C ../../z_tools/qemu

full :
	$(MAKE) -C $(APILIBPATH)
	$(MAKE) $(APP).pgm

run_full :
	$(MAKE) -C $(APILIBPATH)
	$(MAKE) -C ../weos
	$(MAKE) run

clean :
	-$(DEL) *.lst
	-$(DEL) gview.obj
	-$(DEL) jpeg.obj
	-$(DEL) *.map
	-$(DEL) *.bim
	-$(DEL) *.org
	-$(DEL) weos.img

src_only :
	$(MAKE) clean
	-$(DEL) $(APP).pgm
