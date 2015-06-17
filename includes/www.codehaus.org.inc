Redirect /about/history.html /history/
Redirect /customs/manifesto.html /mechanics/manifesto/
Redirect /maven.html /mechanics/maven/
Redirect /termination.html /termination/

RewriteRule ^/termination-503.html$ %{DOCUMENT_ROOT}/termination/index.html [R=503]
RewriteRule ^/termination-410.html$ %{DOCUMENT_ROOT}/termination/index.html [R=410]

ErrorDocument 503 /termination/index.html
ErrorDocument 410 /termination/index.html
