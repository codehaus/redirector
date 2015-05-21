# Overview

To better handle the migration away from Codehaus infrastructure, you can request proxy changes for your
Codehaus hosted URLs.

# Infrastructure

We will progressively migrate hostnames from Contegix hosted infrastructure to 
an Amazon EC2 powered redirection service. Once the hostnames are migrated, they will come under the power of this redirection service and all traffic will be redirected using.

Most likely this will be a `t1.micro` or similar that issues 301/302 redirects
as per the configuration.

# SSL

We will have our *.codehaus.org wildcard located on this machine.

# Changes

Please submit pull-requests to amend the configuration in the ruleset.

Keep it simple and ensure your commits are squashed before submitting.
