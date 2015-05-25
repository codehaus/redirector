##################################
# RULES                          #
##################################

# Customer rules here



##################################
# FALLBACK                       #
##################################
RewriteRule ^.*$ / [R=410]
ErrorDocument 410 "Codehaus has shutdown - http://www.codehaus.org/"