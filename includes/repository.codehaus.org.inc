##################################
# RULES                          #
##################################

# Customer rules here



##################################
# FALLBACK                       #
##################################
#RewriteRule ^.*$ / [R=410]
#ErrorDocument 410 "Codehaus has shutdown - https://www.codehaus.org/"
RewriteRule ^.*$ / [R=200]
ErrorDocument 200 "This domain does not resolve - so you should not even be able to get this file"