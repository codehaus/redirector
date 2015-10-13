##################################
# RULES                          #
##################################

# Customer rules here

RewriteRule "^/buildnumber-maven-plugin/(.*)$" "https://github.com/astubbs/buildnumber-maven-plugin"  [R=301,L]


##################################
# FALLBACK                       #
##################################
RewriteRule    "^.*"  "http://www.mojohaus.org"  [R=301,L]
