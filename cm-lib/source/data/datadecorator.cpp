#include "datadecorator.h"

namespace cm {
namespace data {

class DataDecorator::Implementation {
public:
    Entity* parentEntity{nullptr};
    QString key, label;

    Implementation(Entity* _parent, const QString& _key, const QString& _label)
        : parentEntity(_parent), key(_key), label(_label) {}

};

DataDecorator::DataDecorator(Entity *parent, const QString &key, const QString &label)
    : QObject((QObject*)parent)
{
    implementation.reset(new Implementation(parent,key,label));
}

DataDecorator::~DataDecorator() {}

const QString& DataDecorator::key() const {return implementation->key;}

const QString& DataDecorator::label() const {return implementation->label;}

Entity* DataDecorator::parentEntity() {return implementation->parentEntity;}

}
}
