TOOLPATH = ../z_tools/
INCPATH  = ../z_tools/haribote/

MAKE     = $(TOOLPATH)make.exe -r
EDIMG    = $(TOOLPATH)edimg.exe
IMGTOL   = $(TOOLPATH)imgtol.com
COPY     = copy
DEL      = del

default :
	$(MAKE) weos.img

weos.img : weos/ipl09.bin weos/kernel.sys Makefile \
		a/a.pgm hello/hello.pgm hello2/hello2.pgm hello3/hello3.pgm \
		winhelo/winhelo.pgm winhelo2/winhelo2.pgm winhelo3/winhelo3.pgm \
		star/star.pgm stars/stars.pgm stars2/stars2.pgm \
		lines/lines.pgm walk/walk.pgm noodle/noodle.pgm \
		beepdown/beepdown.pgm color/color.pgm color2/color2.pgm \
		sosu/sosu.pgm sosu2/sosu2.pgm sosu3/sosu3.pgm \
		type/type.pgm iroha/iroha.pgm chklang/chklang.pgm \
		notrec/notrec.pgm bball/bball.pgm invader/invader.pgm \
		calc/calc.pgm textedit/textedit.pgm mmlplay/mmlplay.pgm ptviewer/ptviewer.pgm sysinfo/sysinfo.pgm
	$(EDIMG)   imgin:../z_tools/fdimg0at.tek \
		wbinimg src:weos/ipl09.bin len:512 from:0 to:0 \
		copy from:weos/kernel.sys to:@: \
		copy from:ipl09.nas to:@: \
		copy from:make.bat to:@: \
		copy from:a/a.pgm to:@: \
		copy from:hello/hello.pgm to:@: \
		copy from:hello2/hello2.pgm to:@: \
		copy from:hello3/hello3.pgm to:@: \
		copy from:winhelo/winhelo.pgm to:@: \
		copy from:winhelo2/winhelo2.pgm to:@: \
		copy from:winhelo3/winhelo3.pgm to:@: \
		copy from:star/star.pgm to:@: \
		copy from:stars/stars.pgm to:@: \
		copy from:stars2/stars2.pgm to:@: \
		copy from:lines/lines.pgm to:@: \
		copy from:walk/walk.pgm to:@: \
		copy from:noodle/noodle.pgm to:@: \
		copy from:beepdown/beepdown.pgm to:@: \
		copy from:color/color.pgm to:@: \
		copy from:color2/color2.pgm to:@: \
		copy from:sosu/sosu.pgm to:@: \
		copy from:sosu2/sosu2.pgm to:@: \
		copy from:sosu3/sosu3.pgm to:@: \
		copy from:type/type.pgm to:@: \
		copy from:iroha/iroha.pgm to:@: \
		copy from:chklang/chklang.pgm to:@: \
		copy from:test.txt to:@: \
		copy from:notrec/notrec.pgm to:@: \
		copy from:bball/bball.pgm to:@: \
		copy from:invader/invader.pgm to:@: \
		copy from:calc/calc.pgm to:@: \
		copy from:textedit/textedit.pgm to:@: \
		copy from:mmlplay/mmlplay.pgm to:@: \
		copy from:mmldata/kirakira.mml to:@: \
		copy from:mmldata/fujisan.mml to:@: \
		copy from:mmldata/daigo.mml to:@: \
		copy from:mmldata/daiku.mml to:@: \
		copy from:ptviewer/ptviewer.pgm to:@: \
		copy from:pictdata/fujisan.jpg to:@: \
		copy from:pictdata/night.bmp to:@: \
		copy from:fonts/chinese.fnt to:@: \
		copy from:sysinfo/sysinfo.pgm to:@: \
		copy from:pictdata/weos.jpg to:@: \
		imgout:weos.img

run :
	$(MAKE) weos.img
	$(COPY) weos.img ..\z_tools\qemu\fdimage0.bin
	$(MAKE) -C ../z_tools/qemu

install :
	$(MAKE) weos.img
	$(IMGTOL) w a: weos.img

full :
	$(MAKE) -C weos
	$(MAKE) -C apilib
	$(MAKE) -C a
	$(MAKE) -C hello
	$(MAKE) -C hello2
	$(MAKE) -C hello3
	$(MAKE) -C winhelo
	$(MAKE) -C winhelo2
	$(MAKE) -C winhelo3
	$(MAKE) -C star
	$(MAKE) -C stars
	$(MAKE) -C stars2
	$(MAKE) -C lines
	$(MAKE) -C walk
	$(MAKE) -C noodle
	$(MAKE) -C beepdown
	$(MAKE) -C color
	$(MAKE) -C color2
	$(MAKE) -C sosu
	$(MAKE) -C sosu2
	$(MAKE) -C sosu3
	$(MAKE) -C type
	$(MAKE) -C iroha
	$(MAKE) -C chklang
	$(MAKE) -C notrec
	$(MAKE) -C bball
	$(MAKE) -C invader
	$(MAKE) -C calc
	$(MAKE) -C textedit
	$(MAKE) -C mmlplay
	$(MAKE) -C ptviewer
	$(MAKE) -C sysinfo
	$(MAKE) weos.img

run_full :
	$(MAKE) full
	$(COPY) weos.img ..\z_tools\qemu\fdimage0.bin
	$(MAKE) -C ../z_tools/qemu

install_full :
	$(MAKE) full
	$(IMGTOL) w a: weos.img

run_os :
	$(MAKE) -C weos
	$(MAKE) run

clean :

src_only :
	$(MAKE) clean
	-$(DEL) weos.img

clean_full :
	$(MAKE) -C weos			clean
	$(MAKE) -C apilib		clean
	$(MAKE) -C a			clean
	$(MAKE) -C hello		clean
	$(MAKE) -C hello2		clean
	$(MAKE) -C hello3		clean
	$(MAKE) -C winhelo		clean
	$(MAKE) -C winhelo2		clean
	$(MAKE) -C winhelo3		clean
	$(MAKE) -C star			clean
	$(MAKE) -C stars		clean
	$(MAKE) -C stars2		clean
	$(MAKE) -C lines		clean
	$(MAKE) -C walk			clean
	$(MAKE) -C noodle		clean
	$(MAKE) -C beepdown		clean
	$(MAKE) -C color		clean
	$(MAKE) -C color2		clean
	$(MAKE) -C sosu			clean
	$(MAKE) -C sosu2		clean
	$(MAKE) -C sosu3		clean
	$(MAKE) -C type			clean
	$(MAKE) -C iroha		clean
	$(MAKE) -C chklang		clean
	$(MAKE) -C notrec		clean
	$(MAKE) -C bball		clean
	$(MAKE) -C invader		clean
	$(MAKE) -C calc			clean
	$(MAKE) -C textedit		clean
	$(MAKE) -C mmlplay		clean
	$(MAKE) -C ptviewer		clean
	$(MAKE) -C sysinfo		clean
	
src_only_full :
	$(MAKE) -C weos			src_only
	$(MAKE) -C apilib		src_only
	$(MAKE) -C a			src_only
	$(MAKE) -C hello		src_only
	$(MAKE) -C hello2		src_only
	$(MAKE) -C hello3		src_only
	$(MAKE) -C winhelo		src_only
	$(MAKE) -C winhelo2		src_only
	$(MAKE) -C winhelo3		src_only
	$(MAKE) -C star			src_only
	$(MAKE) -C stars		src_only
	$(MAKE) -C stars2		src_only
	$(MAKE) -C lines		src_only
	$(MAKE) -C walk			src_only
	$(MAKE) -C noodle		src_only
	$(MAKE) -C beepdown		src_only
	$(MAKE) -C color		src_only
	$(MAKE) -C color2		src_only
	$(MAKE) -C sosu			src_only
	$(MAKE) -C sosu2		src_only
	$(MAKE) -C sosu3		src_only
	$(MAKE) -C type			src_only
	$(MAKE) -C iroha		src_only
	$(MAKE) -C chklang		src_only
	$(MAKE) -C notrec		src_only
	$(MAKE) -C bball		src_only
	$(MAKE) -C invader		src_only
	$(MAKE) -C calc			src_only
	$(MAKE) -C textedit		src_only
	$(MAKE) -C mmlplay		src_only
	$(MAKE) -C ptviewer		src_only
	$(MAKE) -C sysinfo		src_only
	-$(DEL) weos.img

refresh :
	$(MAKE) full
	$(MAKE) clean_full
	-$(DEL) weos.img
