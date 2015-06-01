##################################
# RULES                          #
##################################

# Customer rules here

##################################
# Owned by: Olivier Gaudin       #
##################################
RewriteRule "^/display/SONAR/$"                                "http://docs.sonarqube.org/display/SONAR/Documentation" [R=301,L]
RewriteRule "^/display/SONAR/Community\+Plugins$"              "http://docs.sonarqube.org/display/PLUG/Community+Plugins" [R=301,L]
RewriteRule "^/display/SONAR/Active\+Plugins$"                 "http://docs.sonarqube.org/display/PLUG/Community+Plugins" [R=301,L]
RewriteRule "^/display/SONAR/CSS\+Plugin$"                     "https://github.com/SonarCommunity/sonar-css" [R=301,L]
RewriteRule "^/display/SONAR/Erlang\+Plugin$"                  "https://github.com/SonarCommunity/sonar-erlang" [R=301,L]
RewriteRule "^/display/SONAR/JMeter\+Plugin$"                  "https://github.com/SonarCommunity/sonar-jmeter" [R=301,L]
RewriteRule "^/display/SONAR/Localization$"                    "http://docs.sonarqube.org/display/PLUG/Community+Plugins" [R=301,L]
RewriteRule "^/display/SONAR/Chinese\+Pack$"                   "https://github.com/SonarCommunity/sonar-l10n-zh" [R=301,L]
RewriteRule "^/display/SONAR/French\+Pack$"                    "https://github.com/SonarCommunity/sonar-l10n-fr" [R=301,L]
RewriteRule "^/display/SONAR/German\+Pack$"                    "https://github.com/SonarCommunity/sonar-l10n-de" [R=301,L]
RewriteRule "^/display/SONAR/Italian\+Pack$"                   "https://github.com/SonarCommunity/sonar-l10n-it" [R=301,L]
RewriteRule "^/display/SONAR/Japanese\+Pack$"                  "https://github.com/SonarCommunity/sonar-l10n-ja" [R=301,L]
RewriteRule "^/display/SONAR/Korean\+Pack$"                    "https://github.com/SonarCommunity/sonar-l10n-ko" [R=301,L]
RewriteRule "^/display/SONAR/Portuguese\+Pack$"                "https://github.com/SonarCommunity/sonar-l10n-pt" [R=301,L]
RewriteRule "^/display/SONAR/Spanish\+Pack$"                   "https://github.com/SonarCommunity/sonar-l10n-es" [R=301,L]
RewriteRule "^/display/SONAR/Mantis\+Plugin$"                  "https://github.com/SonarCommunity/sonar-mantis" [R=301,L]
RewriteRule "^/display/SONAR/OpenID\+Plugin$"                  "https://github.com/SonarCommunity/sonar-openid" [R=301,L]
RewriteRule "^/display/SONAR/PDF\+Plugin$"                     "https://github.com/SonarCommunity/sonar-pdf-report" [R=301,L]
RewriteRule "^/display/SONAR/Piwik\+Plugin$"                   "https://github.com/SonarCommunity/sonar-piwik" [R=301,L]
RewriteRule "^/display/SONAR/Sonargraph\+Plugin$"              "https://github.com/SonarCommunity/sonar-sonargraph" [R=301,L]
RewriteRule "^/display/SONAR/SonarQube\+Android\+Application$" "https://github.com/SonarCommunity/sonar-android-application" [R=301,L]
RewriteRule "^/display/SONAR/Plugins\+Under\+Development$"     "http://docs.sonarqube.org/display/PLUG/Plugin+Library" [R=301,L]
# Those will be removed as no more maintened
#RewriteRule "^/display/SONAR/Scala+Plugin$"                  "https://github.com/SonarCommunity/sonar-scala" [L]
#RewriteRule "^/display/SONAR/SonarQube+Mojo+Bridge$"         "https://github.com/SonarCommunity/sonar-mojo-bridge" [L]
RewriteRule "^/display/SONAR/(.*)$"                          "http://docs.sonarqube.org/display/SONAR/Documentation" [R=301,L]

##################################
# FALLBACK                       #
##################################
#RewriteRule    "^.*"  "https://www.codehaus.org/termination.html"

