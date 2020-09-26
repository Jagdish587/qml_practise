import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        id: window

        color: "white"; width: 240; height: 150

        Column {
            anchors.centerIn: parent; spacing: 15

            MyClickableWidget {
                focus: true
                KeyNavigation.down: widget2 //set this MyWidget to receive the focus
                color: "lightblue"
            }

            MyClickableWidget {
                id: widget2
               // focus: true
                color: "palegreen"
            }
        }

    }
}
