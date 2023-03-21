import QtQuick
import QtQuick.Controls
import QtQuick.Dialogs
import FileSaver 1.0

MessageDialog {
    visible: false
    title: "Frame 2"

    FileSaver{
        id: fileSaver
    }

    onAccepted: {
        fileSaver.save("mirumir.txt", "Миру Мир!")
        Qt.quit()
    }
}
