import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Flipable {
        id: myflippable
        anchors.centerIn: parent
        property bool flippable: false

       front:  Rectangle {
            id: myrect1
            anchors.centerIn: parent
            width: 120
            height: 120
            color: "red"
        }

       back:  Rectangle {
            id: myrect2
            anchors.centerIn: parent
            width: 120
            height: 120
            color: "blue"
        }

       transform: Rotation {
           axis.x : 1
           axis.y : 0
           axis.z: 0
           angle: myflippable.flippable ? 180 : 0

            Behavior on angle {
                NumberAnimation { duration : 500 }
            }
       }

       MouseArea {
           anchors.fill: parent
           onClicked: {
               console.log("cliecked ok")
               myflippable.flippable = !myflippable.flippable
           }
       }


    }

    Component.onCompleted: {
        console.log("Loaded ")
    }
}
