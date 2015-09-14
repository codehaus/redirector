##################################
# RULES                          #
##################################

# Custom rules here


##################################
# FALLBACK                       #
##################################
RewriteRule    "^(.*)"  "http://codehaus-plexus.github.io/modello/$1"  [R=301,L]
