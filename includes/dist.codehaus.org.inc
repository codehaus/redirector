##################################
# RULES                          #
##################################

# Customer rules here
RewriteRule "^/sonar/(.*)$" "http://downloads.sonarsource.com/sonarqube/$1" [L]




 
##################################
# Owned by: Olivier Gaudin       #
##################################
RewriteRule "/sonar.*/" "https://www.sonarqube.org"

##################################
# FALLBACK                       #
##################################
RewriteRule ^.*$ / [R=404]
ErrorDocument 404 "Codehaus has shutdown - http://www.codehaus.org/"