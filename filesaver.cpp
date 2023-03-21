#include "filesaver.hpp"
#include <fstream>
#include <QDebug>

FileSaver::FileSaver(QObject *parent)
    : QObject{parent}
{

}

void FileSaver::save(QString filename, const QString data) const noexcept
{
    filename = "../"+filename;
    std::ofstream file(filename.toStdString(), std::ios_base::out);
    if(!file.is_open())
    {
        qCritical() << "couldn't open file to save";
        return;
    }
    file << data.toStdString();
    file.close();
}
