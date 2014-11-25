#
# this is used/needed by the APACHE2 build system
#

MOD_PROXY_FCGI = mod_proxy_fcgi util_fcgi

mod_proxy_fcgi.la: ${MOD_PROXY_FCGI:=.slo}
	$(SH_LINK) -rpath $(libexecdir) -module -avoid-version ${MOD_PROXY_FCGI:=.lo}

DISTCLEAN_TARGETS = modules.mk

shared =  mod_proxy_fcgi.la

