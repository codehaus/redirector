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
# Archiva
RewriteRule "^/browse/MRM(.*)$" "https://issues.apache.org/jira/browse/MRM$1" [L]
# Maven core
RewriteRule "^/browse/MNG(.*)$" "https://issues.apache.org/jira/browse/MNG$1" [L]
# Maven Ant tasks
RewriteRule "^/browse/MANTTASKS(.*)$" "https://issues.apache.org/jira/browse/MANTTASKS$1" [L]
# Maven archetype
RewriteRule "^/browse/ARCHETYPE(.*)$" "https://issues.apache.org/jira/browse/ARCHETYPE$1" [L]
# Maven doxia
RewriteRule "^/browse/DOXIA(.*)$" "https://issues.apache.org/jira/browse/DOXIA$1" [L]
RewriteRule "^/browse/DOXIASITETOOLS(.*)$" "https://issues.apache.org/jira/browse/DOXIASITETOOLS$1" [L]
# Maven JXR
RewriteRule "^/browse/JXR(.*)$" "https://issues.apache.org/jira/browse/JXR$1" [L]
# Maven plugins - core
RewriteRule "^/browse/MCLEAN(.*)$" "https://issues.apache.org/jira/browse/MCLEAN$1" [L]
RewriteRule "^/browse/MCOMPILER(.*)$" "https://issues.apache.org/jira/browse/MCOMPILER$1" [L]
RewriteRule "^/browse/MDEPLOY(.*)$" "https://issues.apache.org/jira/browse/MDEPLOY$1" [L]
RewriteRule "^/browse/MINSTALL(.*)$" "https://issues.apache.org/jira/browse/MINSTALL$1" [L]
RewriteRule "^/browse/MRESOURCES(.*)$" "https://issues.apache.org/jira/browse/MRESOURCES$1" [L]
RewriteRule "^/browse/MSITE(.*)$" "https://issues.apache.org/jira/browse/MSITE$1" [L]
RewriteRule "^/browse/MVERIFIER(.*)$" "https://issues.apache.org/jira/browse/MVERIFIER$1" [L]
# Maven plugins - packaging
RewriteRule "^/browse/MEAR(.*)$" "https://issues.apache.org/jira/browse/MEAR$1" [L]
RewriteRule "^/browse/MEJB(.*)$" "https://issues.apache.org/jira/browse/MEJB$1" [L]
RewriteRule "^/browse/MJAR(.*)$" "https://issues.apache.org/jira/browse/MJAR$1" [L]
RewriteRule "^/browse/MRAR(.*)$" "https://issues.apache.org/jira/browse/MRAR$1" [L]
RewriteRule "^/browse/MWAR(.*)$" "https://issues.apache.org/jira/browse/MWAR$1" [L]
RewriteRule "^/browse/MACR(.*)$" "https://issues.apache.org/jira/browse/MACR$1" [L]
RewriteRule "^/browse/MSHADE(.*)$" "https://issues.apache.org/jira/browse/MSHADE$1" [L]
RewriteRule "^/browse/MSOURCES(.*)$" "https://issues.apache.org/jira/browse/MSOURCES$1" [L]
# Maven plugins - reporting
RewriteRule "^/browse/MCHANGELOG(.*)$" "https://issues.apache.org/jira/browse/MCHANGELOG$1" [L]
RewriteRule "^/browse/MCHANGES(.*)$" "https://issues.apache.org/jira/browse/MCHANGES$1" [L]
RewriteRule "^/browse/MCHECKSTYLE(.*)$" "https://issues.apache.org/jira/browse/MCHECKSTYLE$1" [L]
RewriteRule "^/browse/MDOAP(.*)$" "https://issues.apache.org/jira/browse/MDOAP$1" [L]
RewriteRule "^/browse/MDOCCK(.*)$" "https://issues.apache.org/jira/browse/MDOCCK$1" [L]
RewriteRule "^/browse/MJAVADOC(.*)$" "https://issues.apache.org/jira/browse/MJAVADOC$1" [L]
RewriteRule "^/browse/MLINKCHECK(.*)$" "https://issues.apache.org/jira/browse/MLINKCHECK$1" [L]
RewriteRule "^/browse/MPMD(.*)$" "https://issues.apache.org/jira/browse/MPMD$1" [L]
RewriteRule "^/browse/MPIR(.*)$" "https://issues.apache.org/jira/browse/MPIR$1" [L]
# Maven plugins - tools
RewriteRule "^/browse/MANT(.*)$" "https://issues.apache.org/jira/browse/MANT$1" [L]
RewriteRule "^/browse/MANTRUN(.*)$" "https://issues.apache.org/jira/browse/MANTRUN$1" [L]
RewriteRule "^/browse/MARCHETYPE(.*)$" "https://issues.apache.org/jira/browse/MARCHETYPE$1" [L]
RewriteRule "^/browse/MASSEMBLY(.*)$" "https://issues.apache.org/jira/browse/MASSEMBLY$1" [L]
RewriteRule "^/browse/MDEP(.*)$" "https://issues.apache.org/jira/browse/MDEP$1" [L]
RewriteRule "^/browse/MENFORCER(.*)$" "https://issues.apache.org/jira/browse/MENFORCER$1" [L]
RewriteRule "^/browse/MGPG(.*)$" "https://issues.apache.org/jira/browse/MGPG$1" [L]
RewriteRule "^/browse/MPH(.*)$" "https://issues.apache.org/jira/browse/MPH$1" [L]
RewriteRule "^/browse/MINVOKER(.*)$" "https://issues.apache.org/jira/browse/M$INVOKER1" [L]
RewriteRule "^/browse/MJARSIGNER(.*)$" "https://issues.apache.org/jira/browse/MJARSIGNER$1" [L]
RewriteRule "^/browse/MPATCH(.*)$" "https://issues.apache.org/jira/browse/MPATCH$1" [L]
RewriteRule "^/browse/MPDF(.*)$" "https://issues.apache.org/jira/browse/MPDF$1" [L]
RewriteRule "^/browse/MRELEASE(.*)$" "https://issues.apache.org/jira/browse/MRELEASE$1" [L]
RewriteRule "^/browse/MRRESOURCES(.*)$" "https://issues.apache.org/jira/browse/MRRESOURCES$1" [L]
RewriteRule "^/browse/MREPOSITORY(.*)$" "https://issues.apache.org/jira/browse/MREPOSITORY$1" [L]
RewriteRule "^/browse/MSCMPUB(.*)$" "https://issues.apache.org/jira/browse/MSCMPUB$1" [L]
RewriteRule "^/browse/MSTAGE(.*)$" "https://issues.apache.org/jira/browse/MSTAGE$1" [L]
RewriteRule "^/browse/MTOOLCHAINS(.*)$" "https://issues.apache.org/jira/browse/MTOOLCHAINS$1" [L]
# Maven plugins - IDE
RewriteRule "^/browse/MECLIPSE(.*)$" "https://issues.apache.org/jira/browse/MECLIPSE$1" [L]
# Maven plugin testing
RewriteRule "^/browse/MPLUGINTESTING(.*)$" "https://issues.apache.org/jira/browse/MPLUGINTESTING$1" [L]
# Maven plugin tools
RewriteRule "^/browse/MPLUGIN(.*)$" "https://issues.apache.org/jira/browse/MPLUGIN$1" [L]
# Maven SCM
RewriteRule "^/browse/SCM(.*)$" "https://issues.apache.org/jira/browse/SCM$1" [L]
# Maven shared components
RewriteRule "^/browse/MSHARED(.*)$" "https://issues.apache.org/jira/browse/MSHARED$1" [L]
# Maven skins
RewriteRule "^/browse/MSKINS(.*)$" "https://issues.apache.org/jira/browse/MSKINS$1" [L]
# Maven surefire
RewriteRule "^/browse/SUREFIRE(.*)$" "https://issues.apache.org/jira/browse/SUREFIRE$1" [L]
# Maven wagon
RewriteRule "^/browse/WAGON(.*)$" "https://issues.apache.org/jira/browse/WAGON$1" [L]

##################################
# Owned by: Henri Tremblay       #
##################################
RewriteRule "^/browse/EASYMOCK.*$" "https://github.com/easymock/easymock/issues" [L]

##################################
# Owned by: support@codehaus.org #
##################################
RewriteRule "/browse/MAVENPROXY" "https://www.codehaus.org/termination.html"


##################################
# FALLBACK                       #
##################################
RewriteRule    "^.*"  "https://www.codehaus.org/termination/"
