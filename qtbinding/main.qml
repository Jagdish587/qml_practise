import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        id: myrect
        width: 50
        height: width * 2
        focus: true
        color: "red"
        anchors.centerIn: parent

        onHeightChanged: {
            console.log("onHeightChanged = " + height)
        }
    }

    Component.onCompleted: {
        myrect.height = Qt.binding(function () {
            return myrect.width * 3
        })
        console.log("myrect.height = " + myrect.height)

        myrect.width = 75 // now onHeightChanged will be called
    }
}
