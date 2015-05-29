##################################
# RULES                          #
##################################

# Customer rules here

##################################
# Owned by: Olivier Gaudin       #
##################################
RewriteRule "^/browse/SONAR(.*)$" "http://jira.sonarsource.com/browse/SONAR$1" [L]
RewriteRule "^/browse/MSONAR(.*)$" "https://github.com/mojohaus/sonar-maven-plugin" [L]
 
##################################
# Owned by: support@codehaus.org #
##################################
RewriteRule "/browse/MAVENPROXY" "https://www.codehaus.org/termination.html"


##################################
# FALLBACK                       #
##################################
RewriteRule    "^.*"  "https://www.codehaus.org/termination.html"
