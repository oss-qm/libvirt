/* Automatically generated from ../src/remote/lxc_protocol.x by gendispatch.pl.
 * Do not edit this file.  Any changes you make will be lost.
 */
static int lxcDispatchDomainOpenNamespace(
    virNetServerPtr server,
    virNetServerClientPtr client,
    virNetMessagePtr msg,
    virNetMessageErrorPtr rerr,
    lxc_domain_open_namespace_args *args);
static int lxcDispatchDomainOpenNamespaceHelper(
    virNetServerPtr server,
    virNetServerClientPtr client,
    virNetMessagePtr msg,
    virNetMessageErrorPtr rerr,
    void *args,
    void *ret ATTRIBUTE_UNUSED)
{
  int rv;
  virThreadJobSet("lxcDispatchDomainOpenNamespace");
  VIR_DEBUG("server=%p client=%p msg=%p rerr=%p args=%p ret=%p", server, client, msg, rerr, args, ret);
  rv = lxcDispatchDomainOpenNamespace(server, client, msg, rerr, args);
  virThreadJobClear(rv);
  return rv;
}
/* lxcDispatchDomainOpenNamespace body has to be implemented manually */



virNetServerProgramProc lxcProcs[] = {
{ /* Unused 0 */
   NULL,
   0,
   (xdrproc_t)xdr_void,
   0,
   (xdrproc_t)xdr_void,
   true,
   0
},
{ /* Method DomainOpenNamespace => 1 */
   lxcDispatchDomainOpenNamespaceHelper,
   sizeof(lxc_domain_open_namespace_args),
   (xdrproc_t)xdr_lxc_domain_open_namespace_args,
   0,
   (xdrproc_t)xdr_void,
   true,
   0
},
};
size_t lxcNProcs = ARRAY_CARDINALITY(lxcProcs);
