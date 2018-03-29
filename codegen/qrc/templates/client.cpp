{% include "license.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

#include "core/awssignaturev4.h"
{% for name,op in operations.items %}
{% if op.input.shape %}
#include "{{name|lower}}request.h"
{% endif %}
#include "{{name|lower}}response.h"
{% endfor %}

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace {{NameSpaceName}} {

/**
 * @class  {{ClassName}}
 *
 * @brief  Client for {{metadata.serviceFullName}}{% if metadata.serviceAbbreviation|cut:"Amazon"|cut:"AWS" not in metadata.serviceFullName %} ({{metadata.serviceAbbreviation|cut:"Amazon"|cut:"AWS"}}){% endif %}
 *
{% for line in ClassDocumentation %}
 *{% if line %} {{ line }}{% endif %}
{% endfor %}
 */

/**
 * @brief  Constructs a new {{ClassName}} object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
{{ClassName}}::{{ClassName}}(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new {{ClassName}}Private(this), parent)
{
    Q_D({{ClassName}});
    d->apiVersion = QStringLiteral("{{metadata.apiVersion}}");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("{{metadata.endpointPrefix}}");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("{{metadata.serviceFullName}}");
    {# Here we do exactly as aws-sdk-cpp does; we use the signingName (ie the name of the service as expected by #}
    {# V4 signatures if set, otherwise fall back to the endpoint prefix (which is the same 90% of the time.      #}
    d->serviceName = QStringLiteral("{% if metadata.signingName %}{{ metadata.signingName }}{% else %}{{ metadata.endpointPrefix }}{% endif %}");
}

/**
 * @brief  Constructs a new {{ClassName}} object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
{{ClassName}}::{{ClassName}}(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new {{ClassName}}Private(this), parent)
{
    Q_D({{ClassName}});
    d->apiVersion = QStringLiteral("{{metadata.apiVersion}}");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("{{metadata.endpointPrefix}}");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("{{metadata.serviceFullName}}");
    {# Here we do exactly as aws-sdk-cpp does; we using the signingName (ie the name of the service as expected by #}
    {# V4 signatures if set, otherwise fall back to the endpoint prefiex (which is the same 90% of the time.       #}
    d->serviceName = QStringLiteral("{% if metadata.signingName %}{{ metadata.signingName }}{% else %}{{ metadata.endpointPrefix }}{% endif %}");
}

{% for name,op in operations.items %}
/**
{% for line in op.documentationFormatted %}
 *{% if line %} {{ line }}{% endif %}
{% endfor %}
 *
 * @param  request Request to send to {{metadata.serviceFullName}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
{{name}}Response * {{ClassName}}::{{name|slice:"0:1"|lower}}{{name|slice:"01:-1"}}({% if op.input.shape %}const {{name}}Request &request{% endif %})
{
    return qobject_cast<{{name}}Response *>(send(request));
}

{% endfor %}
/**
 * @internal
 *
 * @class  {{ClassName}}Private
 *
 * @brief  Private implementation for {{ClassName}}.
 */

/**
 * @internal
 *
 * @brief  Constructs a new {{ClassName}}Private object.
 *
 * @param  q  Pointer to this object's public {{ClassName}} instance.
 */
{{ClassName}}Private::{{ClassName}}Private({{ClassName}} * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignature{{metadata.signatureVersion|upper}}();
}

} // namespace {{NameSpaceName}}
} // namespace QtAws
