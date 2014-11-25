#ifndef APACHE_MOD_PROXY_COMPAT_H
#define APACHE_MOD_PROXY_COMPAT_H

#ifdef __cplusplus
extern "C" {
#endif

#define APLOG_TRACE1 APLOG_DEBUG
#define APLOGNO(n) "AH" #n ": "
#define AP_DECLARE_MODULE(m) module AP_MODULE_DECLARE_DATA m##_module

#define ap_scan_script_header_err_brigade_ex(r, bb, buf, idx) \
        ap_scan_script_header_err_brigade(r, bb, buf)

#define ap_proxy_port_of_scheme(scheme) apr_uri_port_of_scheme(scheme)


#ifdef __cplusplus
}
#endif

#endif
