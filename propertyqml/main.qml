import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello Jagdish")

    Rectangle {
        id: myrect
        width: 120
        height: 120
        visible: true
        radius: 4
        color: "yellow"
        x: 50
        y: 50

        Text {
            id: textbox
            text: myobj.myValue ? myobj.myValue : ""

            Component.onCompleted: {
                console.log("myobj.myValue loaded = "+myobj.myValue)
            }
        }

        MouseArea {
            id: mymousearea
            anchors.fill: parent

            onClicked: {
                console.log("From qml writing value to cpp")
                myobj.myValue = 55
            }
        }
    }

    Component.onCompleted: {
        console.log("Jagdish calling from qml ")
        myobj.myValue = 22

    }
}
