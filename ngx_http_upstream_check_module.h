#ifndef _NGX_HTTP_UPSTREAM_CHECK_MODELE_H_INCLUDED_
#define _NGX_HTTP_UPSTREAM_CHECK_MODELE_H_INCLUDED_


#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

ngx_uint_t ngx_http_upstream_check_add_peer(ngx_conf_t *cf,
    ngx_http_upstream_srv_conf_t *us, ngx_addr_t *peer);

ngx_uint_t ngx_http_upstream_check_peer_down(ngx_uint_t index);
ngx_uint_t ngx_http_upstream_check_upstream_down(ngx_str_t *upstream);

void ngx_http_upstream_check_get_peer(ngx_uint_t index);
void ngx_http_upstream_check_free_peer(ngx_uint_t index);

ngx_uint_t ngx_http_upstream_check_add_dynamic_peer(ngx_pool_t *pool,
    ngx_http_upstream_srv_conf_t *us, ngx_addr_t *peer);
void ngx_http_upstream_check_delete_dynamic_peer(ngx_str_t *name,
     ngx_addr_t *peer_addr);

#endif //_NGX_HTTP_UPSTREAM_CHECK_MODELE_H_INCLUDED_

