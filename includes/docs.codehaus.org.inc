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
# Groovy redirection rules       #
##################################

RewriteRule ^/display/GROOVY/Download(.*)                                                          http://groovy-lang.org/download.html [R,NE,L]
RewriteRule ^/display/GROOVY/Collections(.*)                                                       http://groovy-lang.org/groovy-dev-kit.html#_working_with_collections [R,NE,L]
RewriteRule ^/display/GROOVY/User.Guide(.*)                                                        http://groovy-lang.org/documentation.html [R,NE,L]
RewriteRule ^/display/GROOVY/Getting.Started.Guide(.*)                                             http://groovy-lang.org/install.html [R,NE,L]
RewriteRule ^/display/GROOVY/Looping(.*)                                                           http://docs.groovy-lang.org/latest/html/documentation/index.html#_looping_structures [R,NE,L]
RewriteRule ^/display/GROOVY/Operators(.*)                                                         http://docs.groovy-lang.org/latest/html/documentation/index.html#groovy-operators [R,NE,L]
RewriteRule ^/display/GROOVY/Documentation(.*)                                                     http://groovy-lang.org/documentation.html [R,NE,L]
RewriteRule ^/display/GROOVY/Strings.and.GString(.*)                                               http://docs.groovy-lang.org/latest/html/documentation/index.html#all-strings [R,NE,L]
RewriteRule ^/display/GROOVY/JN1015.Collections(.*)                                                http://groovy-lang.org/groovy-dev-kit.html#_working_with_collections [R,NE,L]
RewriteRule ^/display/GROOVY/Regular.Expressions(.*)                                               http://docs.groovy-lang.org/latest/html/documentation/index.html#_regular_expression_operators [R,NE,L]
RewriteRule ^/display/GROOVY/Differences.from.Java(.*)                                             http://docs.groovy-lang.org/latest/html/documentation/index.html#_differences_with_java [R,NE,L]
RewriteRule ^/display/GROOVY/JN1035.Maps(.*)                                                       http://groovy-lang.org/groovy-dev-kit.html#_working_with_collections [R,NE,L]
RewriteRule ^/display/GROOVY/Installing.Groovy(.*)                                                 http://groovy-lang.org/install.html [R,NE,L]
RewriteRule ^/display/GROOVY/Closures(.*)                                                          http://docs.groovy-lang.org/latest/html/documentation/index.html#_closures [R,NE,L]
RewriteRule ^/display/GROOVY/Logical.Branching(.*)                                                 http://docs.groovy-lang.org/latest/html/documentation/index.html#_control_structures [R,NE,L]
RewriteRule ^/display/GROOVY/Scripts.and.Classes(.*)                                               http://groovy-lang.org/structure.html#_scripts_versus_classes [R,NE,L]
RewriteRule ^/display/GROOVY/Download?nc=(.*)                                                      http://groovy-lang.org/download.html [R,NE,L]
RewriteRule ^/display/GROOVY/JN1525.Strings(.*)                                                    http://docs.groovy-lang.org/latest/html/documentation/index.html#all-strings [R,NE,L]
RewriteRule ^/display/GROOVY/Embedding.Groovy(.*)                                                  http://docs.groovy-lang.org/latest/html/documentation/index.html#_integrating_groovy_in_a_java_application [R,NE,L]
RewriteRule ^/display/GROOVY/Statements(.*)                                                        http://groovy-lang.org/semantics.html#_statements [R,NE,L]
RewriteRule ^/display/GROOVY/Input.Output(.*)                                                      http://groovy-lang.org/groovy-dev-kit.html#_working_with_io [R,NE,L]
RewriteRule ^/display/GROOVY/Grape(.*)                                                             http://docs.groovy-lang.org/latest/html/documentation/grape.html [R,NE,L]
RewriteRule ^/display/GROOVY/Control.Structures(.*)                                                http://docs.groovy-lang.org/latest/html/documentation/index.html#_control_structures [R,NE,L]
RewriteRule ^/display/GROOVY/Groovy.Templates(.*)                                                  http://docs.groovy-lang.org/latest/html/documentation/template-engines.html [R,NE,L]
RewriteRule ^/display/GROOVY/Unit.Testing(.*)                                                      http://docs.groovy-lang.org/docs/latest/html/documentation/core-testing-guide.html [R,NE,L]
RewriteRule ^/display/GROOVY/Processing.XML(.*)                                                    http://groovy-lang.org/processing-xml.html [R,NE,L]
RewriteRule ^/display/GROOVY/Groovy.Console(.*)                                                    http://groovy-lang.org/groovyconsole.html [R,NE,L]
RewriteRule ^/display/GROOVY/Groovy.Shell(.*)                                                      http://groovy-lang.org/groovysh.html [R,NE,L]
RewriteRule ^/display/GROOVY/Operator.Overloading(.*)                                              http://groovy-lang.org/operators.html#Operator-Overloading [R,NE,L]
RewriteRule ^/display/GROOVY/Groovy.Truth(.*)                                                      http://groovy-lang.org/semantics.html#Groovy-Truth [R,NE,L]
RewriteRule ^/display/GROOVY/InvokeDynamic.support(.*)                                             http://groovy-lang.org/indy.html [R,NE,L]
RewriteRule ^/display/GROOVY/Builders(.*)                                                          http://groovy-lang.org/dsls.html#_builders [R,NE,L]
RewriteRule ^/display/GROOVY/Swing.Builder(.*)                                                     http://groovy-lang.org/dsls.html#_swingbuilder [R,NE,L]
RewriteRule ^/display/GROOVY/Using.Ant.from.Groovy(.*)                                             http://docs.groovy-lang.org/latest/html/documentation/ant-builder.html [R,NE,L]
RewriteRule ^/display/GROOVY/Groovy.Release.Notes(.*)                                              http://groovy-lang.org/releases.html [R,NE,L]
RewriteRule ^/display/GROOVY/Process.Management(.*)                                                http://groovy-lang.org/groovy-dev-kit.html#process-management [R,NE,L]
RewriteRule ^/display/GROOVY/Beginners.Tutorial(.*)                                                http://groovy-lang.org/learn.html [R,NE,L]
RewriteRule ^/display/GROOVY/User.Guide(.*)                                                        http://groovy-lang.org/documentation.html [R,NE,L]
RewriteRule ^/display/GROOVY/GUI.Programming.with.Groovy(.*)                                       http://groovy-lang.org/dsls.html#_swingbuilder [R,NE,L]
RewriteRule ^/display/GROOVY/Type.checking.extensions(.*)                                          http://docs.groovy-lang.org/latest/html/documentation/#_type_checking_extensions [R,NE,L]
RewriteRule ^/display/GROOVY/Using.Ant.Libraries.with.Antbuilder(.*)                               http://docs.groovy-lang.org/latest/html/documentation/ant-builder.html [R,NE,L]
RewriteRule ^/display/GROOVY/Creating.XML.using.Groovy's.MarkupBuilder(.*)                         http://groovy-lang.org/processing-xml.html [R,NE,L]
RewriteRule ^/display/GROOVY/Reading.XML.using.Groovy's.XmlParser(.*)                              http://groovy-lang.org/processing-xml.html [R,NE,L]
RewriteRule ^/display/GROOVY/Closures...Formal.Definition(.*)                                      http://docs.groovy-lang.org/latest/html/documentation/index.html#_closures [R,NE,L]
RewriteRule ^/display/GROOVY/Groovy.Eclipse.compiler.plugin.for.Maven(.*)                          http://docs.groovy-lang.org/latest/html/documentation/tools-groovyeclipse.html [R,NE,L]
RewriteRule ^/display/GROOVY/Executing.External.Processes.From.Groovy(.*)                          http://groovy-lang.org/groovy-dev-kit.html#process-management [R,NE,L]
RewriteRule ^/display/GROOVY/Functional.Programming.with.Groovy(.*)                                http://groovy-lang.org/closures.html#_functional_programming [R,NE,L]
RewriteRule ^/display/GROOVY/Reading.XML.using.Groovy's.XmlSlurper(.*)                             http://groovy-lang.org/processing-xml.html [R,NE,L]
RewriteRule ^/display/GROOVY/Writing.Domain.Specific.Languages(.*)                                 http://docs.groovy-lang.org/docs/latest/html/documentation/core-domain-specific-languages.html [R,NE,L]
RewriteRule ^/display/GROOVY/Groovy.style.and.language.feature.guidelines.for.Java.developers(.*)  http://groovy-lang.org/style-guide.html [R,NE,L]

##################################
# Binary Repository redirection  #
##################################
RewriteRule "^/display/MAVENUSER/Maven\+Repository\+Manager\+Feature\+Matrix$"           "http://binary-repositories-comparison.github.io" [R=301,L]

##################################
# FALLBACK                       #
##################################
RewriteRule    "^.*"  "https://www.codehaus.org/termination/"

