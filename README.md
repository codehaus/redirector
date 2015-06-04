# Overview

To better handle the migration away from Codehaus infrastructure, you can request proxy changes for your
Codehaus hosted URLs.

# Infrastructure

The wildcard `*.codehaus.org` DNS entry points at this redirector.

This service is hosted by a `t2.micro` that issues 301/302 redirects
as per the configuration.

# SSL

We have our *.codehaus.org wildcard located on this machine - however it is out of date and really needs to be reissued.

# Changes

Please submit pull-requests to amend the configuration in the ruleset.

Keep it simple and ensure your commits are squashed before submitting.
