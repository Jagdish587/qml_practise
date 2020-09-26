import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    Rectangle {
        id: myRect
        width: 100; height: 100
        color: "black"

        MouseArea {
            id: mouseArea
            anchors.fill: parent
            onClicked: {
                if(myRect.state == "")
                    myRect.state = 'redcolor'
                else if(myRect.state == 'redcolor')
                    myRect.state = 'bluecolor'
                else
                    myRect.state = 'redcolor'
            }
        }

        states: [
            State {
                name: "redcolor"
                PropertyChanges { target: myRect; color: "red" }
            },

            State {
                name: "bluecolor"
                PropertyChanges { target: myRect; color: "blue" }
            }

        ]

        state : "" // default state -> black

    }
}
