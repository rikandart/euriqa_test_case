import QtQuick
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: "Frame 1"
    maximumWidth: width
    maximumHeight: height

    Frame2 {
        id: frame2
    }

    Button {
        text: "Open Frame 2"
        onClicked: frame2.open()
        width: 200
        height: 60
        x: (parent.width - width)/2
        y: (parent.height - height)/2
    }
}
