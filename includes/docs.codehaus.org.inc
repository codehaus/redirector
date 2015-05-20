##################################
# RULES                          #
##################################

# Customer rules here

##################################
# Owned by: Olivier Gaudin       #
##################################
RewriteRule "^/display/SONAR/$"                            "http://docs.sonarqube.org/display/SONAR/" [L]
RewriteRule "^/display/SONAR/Community+Plugins$"             "http://docs.sonarqube.org/display/SONAR/Community+Plugins" [L]
RewriteRule "^/display/SONAR/Active+Plugins$"                "http://docs.sonarqube.org/display/SONAR/Community+Plugins" [L]
RewriteRule "^/display/SONAR/CSS+Plugin$"                    "https://github.com/SonarCommunity/sonar-css" [L]
RewriteRule "^/display/SONAR/Erlang+Plugin$"                 "https://github.com/SonarCommunity/sonar-erlang" [L]
RewriteRule "^/display/SONAR/JMeter+Plugin$"                 "https://github.com/SonarCommunity/sonar-jmeter" [L]
RewriteRule "^/display/SONAR/Localization$"                  "http://docs.sonarqube.org/display/SONAR/Community+Plugins" [L]
RewriteRule "^/display/SONAR/Chinese+Pack$"                  "https://github.com/SonarCommunity/sonar-l10n-zh" [L]
RewriteRule "^/display/SONAR/French+Pack$"                   "https://github.com/SonarCommunity/sonar-l10n-fr" [L]
RewriteRule "^/display/SONAR/German+Pack$"                   "https://github.com/SonarCommunity/sonar-l10n-de" [L]
RewriteRule "^/display/SONAR/Italian+Pack$"                  "https://github.com/SonarCommunity/sonar-l10n-it" [L]
RewriteRule "^/display/SONAR/Japanese+Pack$"                 "https://github.com/SonarCommunity/sonar-l10n-ja" [L]
RewriteRule "^/display/SONAR/Korean+Pack$"                   "https://github.com/SonarCommunity/sonar-l10n-ko" [L]
RewriteRule "^/display/SONAR/Portuguese+Pack$"               "https://github.com/SonarCommunity/sonar-l10n-pt" [L]
RewriteRule "^/display/SONAR/Spanish+Pack$"                  "https://github.com/SonarCommunity/sonar-l10n-es" [L]
RewriteRule "^/display/SONAR/Mantis+Plugin$"                 "https://github.com/SonarCommunity/sonar-mantis" [L]
RewriteRule "^/display/SONAR/OpenID+Plugin$"                 "https://github.com/SonarCommunity/sonar-openid" [L]
RewriteRule "^/display/SONAR/PDF+Plugin$"                    "https://github.com/SonarCommunity/sonar-pdf-report" [L]
RewriteRule "^/display/SONAR/Piwik+Plugin$"                  "https://github.com/SonarCommunity/sonar-piwik" [L]
RewriteRule "^/display/SONAR/Sonargraph+Plugin$"             "https://github.com/SonarCommunity/sonar-sonargraph" [L]
RewriteRule "^/display/SONAR/SonarQube+Android+Application$" "https://github.com/SonarCommunity/sonar-android-application" [L]
RewriteRule "^/display/SONAR/Plugins+Under+Development$"     "http://docs.sonarqube.org/display/SONAR/Plugin+Library" [L]
RewriteRule "^/display/SONAR/Scala+Plugin$"                  "https://github.com/SonarCommunity/sonar-scala" [L]
RewriteRule "^/display/SONAR/SonarQube+Mojo+Bridge$"         "https://github.com/SonarCommunity/sonar-mojo-bridge" [L]
RewriteRule "^/display/SONAR/(.*)$"                         "http://docs.sonarqube.org/display/SONAR" [L]

##################################
# FALLBACK                       #
##################################
#RewriteRule    "^.*"  "https://www.codehaus.org/termination.html"

