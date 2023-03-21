#ifndef FILESAVER_HPP
#define FILESAVER_HPP

#include <QObject>
#include <QString>

class FileSaver : public QObject
{
    Q_OBJECT
public:
    explicit FileSaver(QObject *parent = nullptr);
    virtual ~FileSaver() = default;
    Q_INVOKABLE void save(QString filename, const QString data) const noexcept;

signals:

};

#endif // FILESAVER_HPP
