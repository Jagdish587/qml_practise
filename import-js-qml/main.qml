import QtQuick 2.9
import QtQuick.Window 2.2
import "jsfile.js" as MyScript

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        id: rect
        x: 50
        y: 50
        width: 240
        height: 120
        border.color: "red"
        radius: 4

        MouseArea {
            id: mousearea
            anchors.fill: parent

            onClicked: {
                console.log("Inside Rectangle " +MyScript.factorial(5))

            }
        }

    }
}
