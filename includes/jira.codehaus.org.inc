##################################
# RULES                          #
##################################

# Customer rules here

##################################
# Owned by: Olivier Gaudin       #
##################################
RewriteRule "^/browse/SONAR(.*)$" "http://jira.sonarsource.com/browse/SONAR$1" [L]
RewriteRule "^/browse/MSONAR(.*)$" "http://jira.sonarsource.com/browse/MSONAR$1" [L]

##################################
# Owned by: Apache               #
##################################
RewriteRule "^/browse/MRM(.*)$" "https://issues.apache.org/jira/browse/MRM$1" [L]
RewriteRule "^/browse/MNG(.*)$" "https://issues.apache.org/jira/browse/MNG$1" [L]
 
##################################
# Owned by: support@codehaus.org #
##################################
RewriteRule "/browse/MAVENPROXY" "https://www.codehaus.org/termination.html"


##################################
# FALLBACK                       #
##################################
RewriteRule    "^.*"  "https://www.codehaus.org/termination.html"
