import QtQuick 2.3
import QtQuick.Window 2.2
import QtQuick.Controls 1.3

Window {
    visible: true

    width: 600
    height: 600

    
    
    AnimatedImage {
        id: banana
        source: "/files/images/banana.gif"
        anchors.centerIn: tacocat
        opacity: 0.50
    }
}
