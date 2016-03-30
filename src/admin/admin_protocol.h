/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ADMIN_PROTOCOL_H_RPCGEN
#define _ADMIN_PROTOCOL_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#include "virxdrdefs.h"
#define ADMIN_STRING_MAX 4194304
#define ADMIN_SERVER_LIST_MAX 16384

typedef char *admin_nonnull_string;

typedef admin_nonnull_string *admin_string;

struct admin_nonnull_server {
        admin_nonnull_string name;
};
typedef struct admin_nonnull_server admin_nonnull_server;

struct admin_connect_open_args {
        u_int flags;
};
typedef struct admin_connect_open_args admin_connect_open_args;

struct admin_connect_get_lib_version_ret {
        uint64_t libVer;
};
typedef struct admin_connect_get_lib_version_ret admin_connect_get_lib_version_ret;

struct admin_connect_list_servers_args {
        u_int need_results;
        u_int flags;
};
typedef struct admin_connect_list_servers_args admin_connect_list_servers_args;

struct admin_connect_list_servers_ret {
        struct {
                u_int servers_len;
                admin_nonnull_server *servers_val;
        } servers;
        u_int ret;
};
typedef struct admin_connect_list_servers_ret admin_connect_list_servers_ret;

struct admin_connect_lookup_server_args {
        admin_nonnull_string name;
        u_int flags;
};
typedef struct admin_connect_lookup_server_args admin_connect_lookup_server_args;

struct admin_connect_lookup_server_ret {
        admin_nonnull_server srv;
};
typedef struct admin_connect_lookup_server_ret admin_connect_lookup_server_ret;
#define ADMIN_PROGRAM 0x06900690
#define ADMIN_PROTOCOL_VERSION 1

enum admin_procedure {
        ADMIN_PROC_CONNECT_OPEN = 1,
        ADMIN_PROC_CONNECT_CLOSE = 2,
        ADMIN_PROC_CONNECT_GET_LIB_VERSION = 3,
        ADMIN_PROC_CONNECT_LIST_SERVERS = 4,
        ADMIN_PROC_CONNECT_LOOKUP_SERVER = 5,
};
typedef enum admin_procedure admin_procedure;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_admin_nonnull_string (XDR *, admin_nonnull_string*);
extern  bool_t xdr_admin_string (XDR *, admin_string*);
extern  bool_t xdr_admin_nonnull_server (XDR *, admin_nonnull_server*);
extern  bool_t xdr_admin_connect_open_args (XDR *, admin_connect_open_args*);
extern  bool_t xdr_admin_connect_get_lib_version_ret (XDR *, admin_connect_get_lib_version_ret*);
extern  bool_t xdr_admin_connect_list_servers_args (XDR *, admin_connect_list_servers_args*);
extern  bool_t xdr_admin_connect_list_servers_ret (XDR *, admin_connect_list_servers_ret*);
extern  bool_t xdr_admin_connect_lookup_server_args (XDR *, admin_connect_lookup_server_args*);
extern  bool_t xdr_admin_connect_lookup_server_ret (XDR *, admin_connect_lookup_server_ret*);
extern  bool_t xdr_admin_procedure (XDR *, admin_procedure*);

#else /* K&R C */
extern bool_t xdr_admin_nonnull_string ();
extern bool_t xdr_admin_string ();
extern bool_t xdr_admin_nonnull_server ();
extern bool_t xdr_admin_connect_open_args ();
extern bool_t xdr_admin_connect_get_lib_version_ret ();
extern bool_t xdr_admin_connect_list_servers_args ();
extern bool_t xdr_admin_connect_list_servers_ret ();
extern bool_t xdr_admin_connect_lookup_server_args ();
extern bool_t xdr_admin_connect_lookup_server_ret ();
extern bool_t xdr_admin_procedure ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ADMIN_PROTOCOL_H_RPCGEN */
