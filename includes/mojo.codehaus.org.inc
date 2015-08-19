##################################
# RULES                          #
##################################

# Customer rules here

RewriteRule "^/buildnumber-maven-plugin/(.*)$" "https://github.com/astubbs/buildnumber-maven-plugin"


##################################
# FALLBACK                       #
##################################
RewriteRule    "^.*"  "http://www.mojohaus.org"  [R=301,L]
