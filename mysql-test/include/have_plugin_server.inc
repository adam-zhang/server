--disable_query_log
--require include/true.require
select (PLUGIN_LIBRARY LIKE 'qa_auth_server%') as `TRUE` FROM INFORMATION_SCHEMA.PLUGINS
  WHERE PLUGIN_NAME='qa_auth_server';
--enable_query_log
