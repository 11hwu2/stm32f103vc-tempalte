# stm32f103vc-tempalte
linux环境下的stm32f103vc工程模板

# 目录说明
工程模板的目录分为lib、inc、src。

1.lib目录是对ST官方库V3.5.0的文件进行类似风格的分类，值得注意的是lib/src/startup使用的是官方库startup目录下的gcc_ride7里的文件。

2.inc目录存放用户自定义或需要修改的头文件。

3.src存放用户编写的源代码文件。

#OpenOCD烧录
根据需求修改flash.cfg文件内容（也可参考[官方文档](http://openocd.org/doc-release/pdf/openocd.pdf)），尤其注意CHIPNAME、interface配置、target配置和跟在命令```flash write_image```后的烧录固件名。
烧录的命令是```openocd -f flash.cfg```，用J-Link V8烧录完毕后按板子的复位键即可看到一个LED灯在闪烁。

注：系统安装openocd后，interface、target的配置文件放在目录/usr/share/openocd/scripts对应的目录中。

#文件修改
欢迎自由修改与分享，共同交流进步！

**修改时尤其注意注释部分包含有#---Attention---#的区域**
