#ifndef DEALMESSAGE_H
#define DEALMESSAGE_H

#include <QObject>

class DealMessage : public QObject
{
    Q_OBJECT
public:
    explicit DealMessage(QObject *parent = nullptr);

signals:

};

#endif // DEALMESSAGE_H
