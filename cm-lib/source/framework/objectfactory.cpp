#include "objectfactory.h"

#include <controllers/commandcontroller.h>
#include <controllers/databasecontroller.h>
#include <controllers/navigation-controller.h>
#include <networking/networkaccessmanager.h>
#include <networking/webrequest.h>

using namespace cm::controllers;
using namespace cm::models;
using namespace cm::networking;

namespace cm {
namespace framework {

ObjectFactory::ObjectFactory()
    : IObjectFactory()
{
}

Client* ObjectFactory::createClient(QObject* parent) const
{
    return new Client(parent);
}

ClientSearch* ObjectFactory::createClientSearch(QObject* parent, IDatabaseController* databaseController) const
{
    return new ClientSearch(parent, databaseController);
}

ICommandController* ObjectFactory::createCommandController(QObject* parent, IDatabaseController* databaseController, INavigationController* navigationController, Client* newClient, ClientSearch* clientSearch, IWebRequest* rssWebRequest) const
{
    return new CommandController(parent,databaseController,newClient,clientSearch,navigationController,rssWebRequest);
}

IDatabaseController* ObjectFactory::createDatabaseController(QObject* parent) const
{
    return new DatabaseController(parent);
}

INavigationController* ObjectFactory::createNavigationController(QObject* parent) const
{
    return new NavigationController(parent);
}

INetworkAccessManager* ObjectFactory::createNetworkAccessManager(QObject* parent) const
{
    return new NetworkAccessManager(parent);
}

IWebRequest* ObjectFactory::createWebRequest(QObject* parent, INetworkAccessManager* networkAccessManager, const QUrl& url) const
{
    return new WebRequest(parent, networkAccessManager, url);
}

}}
