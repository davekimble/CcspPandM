AM_CFLAGS = -D_ANSC_LINUX
AM_CFLAGS += -D_ANSC_USER
AM_CFLAGS += -D_ANSC_LITTLE_ENDIAN_
AM_LDFLAGS = -lccsp_common

AM_CPPFLAGS = -Wall -Werror
ACLOCAL_AMFLAGS = -I m4
hardware_platform = i686-linux-gnu

noinst_LTLIBRARIES = libCcspPandM_board_ml.la
libCcspPandM_board_ml_la_CPPFLAGS = -I$(top_srcdir)/source/TR-181/board_ml -I$(top_srcdir)/source/TR-181/middle_layer_src -I$(top_srcdir)/source-arm/TR-181/board_include -I$(top_srcdir)/custom/ga/source/TR-181/custom_include -I$(top_srcdir)/custom/comcast -I$(top_srcdir)/source/TR-181/include $(CPPFLAGS)
libCcspPandM_board_ml_la_SOURCES = cosa_x_cisco_com_filetransfer_dml.c cosa_x_cisco_com_filetransfer_internal.c
libCcspPandM_board_ml_la_LDFLAGS = -lccsp_common
