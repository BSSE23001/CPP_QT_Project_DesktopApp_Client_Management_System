#ifndef NETWORKACCESSMANAGER_H
#define NETWORKACCESSMANAGER_H

#include <QObject>
#include <QScopedPointer>
#include <networking/INetworkAccessManager.h>

namespace cm {
namespace networking {

class NetworkAccessManager : public QObject , public INetworkAccessManager {
    Q_OBJECT
public:
    explicit NetworkAccessManager(QObject* parent = nullptr);
    ~NetworkAccessManager();

    QNetworkReply* get(const QNetworkRequest &request) override;

private:
    class Implementation;
    QScopedPointer<Implementation> implementation;
};

}
}
#endif // NETWORKACCESSMANAGER_H
