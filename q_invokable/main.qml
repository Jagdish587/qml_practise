import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 1.4

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Mater..!!")

    Column {
        Button {
            id: name
            text: qsTr("click Me")
            width: 150
            height: 100
            onClicked: {
                console.log("button has been clicked")
                var result = datastote.getCount("jagdish tirumala");
                console.log("string lenght = "+result)
            }
        }
    }
}
