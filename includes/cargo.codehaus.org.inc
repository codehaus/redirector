##################################
# RULES                          #
##################################

# Customer rules here

RewriteRule "^/maven-site/.*/apidocs/(.*)$" "https://codehaus-cargo.github.io/apidocs/$1" [R=301,L]
RewriteRule "^/([^\.]+)\.(.*)$" "https://codehaus-cargo.github.io/cargo/$1.$2" [R=301,L]
RewriteRule "^/(.+)\?.*$" "https://codehaus-cargo.github.io/cargo/$1.html" [R=301,L]
RewriteRule "^/(.+)$" "https://codehaus-cargo.github.io/cargo/$1.html" [R=301,L]

##################################
# FALLBACK                       #
##################################
RewriteRule    "^.*"  "https://codehaus-cargo.github.io/"  [R=301,L]
