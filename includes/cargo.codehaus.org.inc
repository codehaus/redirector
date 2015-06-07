##################################
# RULES                          #
##################################

# Customer rules here

RewriteRule "^/([^\.]+)\.(.*)$" "https://codehaus-cargo.github.io/cargo/$1.$2"
RewriteRule "^/(.+)$" "https://codehaus-cargo.github.io/cargo/$1.html"

##################################
# FALLBACK                       #
##################################
RewriteRule    "^.*"  "https://codehaus-cargo.github.io/"
