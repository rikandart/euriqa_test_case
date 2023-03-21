#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "filesaver.hpp"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<FileSaver>("FileSaver", 1, 0, "FileSaver");

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/euriqa_test_case/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);
    return app.exec();
}
