import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Timer {
        id: mytimer
        interval: 1000
        running: true
        repeat: true
        triggeredOnStart: true

        onTriggered: {
            console.log("Jagdish timer is triggered " + mytimer.running)
            mytext.text = "Jagdish"
        }
    }

    Text {
        id: mytext
    }

    MouseArea {
        id: mymousearea
        anchors.fill: parent

        onClicked: {
            console.log("mytimer.running = " + mytimer.running)

            if (mytimer.running) {
                console.log("timer mytimer.running is true ")
                mytimer.stop()
            }
        }
    }
}
