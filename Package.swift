// swift-tools-version:5.7
import PackageDescription

let package = Package(
    name: "kslack",
    platforms: [
        .iOS(.v15),
.macOS(.v12.0)
    ],
    products: [
        .library(
            name: "kslack",
            targets: ["kslack"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "kslack",
            path: "./kslack.xcframework"
        ),
    ]
)
