##################################
# RULES                          #
##################################

# Customer rules here

RewriteRule "^/buildnumber-maven-plugin/(.*)$" "https://github.com/astubbs/buildnumber-maven-plugin"


##################################
# FALLBACK                       #
##################################
RewriteRule    "^.*"  "https://www.codehaus.org/termination/"
