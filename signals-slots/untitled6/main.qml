import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    signal valuechanged

    onValuechanged: {
        console.log("slot func called ")
    }

    MyItem {
        id: myitemqml
    }

    Rectangle {
        id: myrect
        width: 120
        height: 120
        x: 50
        y: 60
        visible: true
        color: "yellow"

        MouseArea {
            anchors.fill: parent
            onClicked: {
                console.log("Jagdish main.qml loaded ")
                valuechanged()
            }
        }

        Component.onCompleted: {
            console.log("Rectangle qml loaded ")
            myitemqml.myvaluechanged("Jagdish Tirumala")
        }
    } //end of rectangle
}
