##################################
# RULES                          #
##################################

# Customer rules here

RewriteRule "^/maven-site/.*/apidocs/(.*)$" "https://codehaus-cargo.github.io/apidocs/$1" [L]
RewriteRule "^/([^\.]+)\.(.*)$" "https://codehaus-cargo.github.io/cargo/$1.$2" [L]
RewriteRule "^/(.+)$" "https://codehaus-cargo.github.io/cargo/$1.html" [L]

##################################
# FALLBACK                       #
##################################
RewriteRule    "^.*"  "https://codehaus-cargo.github.io/"
