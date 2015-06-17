##################################
# RULES                          #
##################################

# Customer rules here



##################################
# FALLBACK                       #
##################################
RewriteRule ^.*$ / [R=410]
ErrorDocument 410 "Codehaus has shutdown - https://www.codehaus.org/"