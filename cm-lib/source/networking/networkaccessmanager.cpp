#include "networkaccessmanager.h"

#include <QNetworkAccessManager>

namespace cm {
namespace networking {

class NetworkAccessManager::Implementation {
public:
    Implementation() {}
    QNetworkAccessManager networkAccessManager;
};

NetworkAccessManager::NetworkAccessManager(QObject *parent)
    : QObject(parent), INetworkAccessManager() {
    implementation.reset(new Implementation());
}

NetworkAccessManager::~NetworkAccessManager() {}

QNetworkReply* NetworkAccessManager::get(const QNetworkRequest &request) {
    return implementation->networkAccessManager.get(request);
}
}
}

