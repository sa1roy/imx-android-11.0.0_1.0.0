Overview
========
The DPU Fetch Decode example shows how to use the DPU driver to enable fetch decoder
unit and the scaler. The fetch decoder output frame size is smaller than desired
output, so the scaler units are used for the frame size convert.

In this example, the screen is divided to two parts, one for content stream, and
the other for safty stream.

If this example runs success, rectangles will move in the screen.

The DPU path is configured like this:

  **********************                    *********************
  *                    *                    *                   *
  *    Frame buffer    *                    *   Frame buffer    *
  *                    *                    *                   *
  **********************                    *********************
          |                                           |
          v                                           v
  +-----------------+   +-----------------+   +-----------------+   +-----------------+
  |                 |   |                 |   |                 |   |                 |
  |   FetchDecode0  |   |  Const Frame 0  |   |   FetchDecode1  |   |  Const Frame 4  |
  |                 |   |                 |   |                 |   |                 |
  +-----------------+   +-----------------+   +-----------------+   +-----------------+
          |                      |                    |                      |
          v                      |                    v                      |
  +-----------------+            |            +-----------------+            |
  |                 |            |            |                 |            |
  |   VScaler 4 &   |            |            |   VScaler 5 &   |            |
  |   HScaler 4     |            |            |   HScaler 5     |            |
  |                 |            |            |                 |            |
  +-----------------+            |            +-----------------+            |
          |                      v                    |                      v
          |             +-----------------+           |             +-----------------+
          |             |                 |           |             |                 |
          +------------>|   LayerBlend 0  |           +------------>|   LayerBlend 2  |
                        |                 |                         |                 |
                        +-----------------+                         +-----------------+
                                 |                                           |
                                 v                                           v
                        +-----------------+                         +-----------------+
                        |                 |                         |                 |
                        |  ExtDst 0 or 1  |                         |  ExtDst 4 or 5  |
                        |                 |                         |                 |
                        +-----------------+                         +-----------------+
                                 |                                           |       Safety stream
                                 |                                           v
        Content Stream           |                                  +-----------------+
                                 |                                  |                 |
                                 +--------------------------------->| FrameGen 0 or 1 |
                                                                    |                 |
                                                                    +-----------------+
                                                                             |
                                                                             v

Toolchain supported
===================
- IAR embedded Workbench  8.50.1
- GCC ARM Embedded  8.3.1

Hardware requirements
=====================
- Micro USB cable
- MIMX8QX MEK board
- J-Link Debug Probe
- 12V power supply
- MX8_DSI_OLED1 board
- Personal Computer

Another option is using monitor but not OLED panel, in this case MX8_DSI_OLED1 board
is not required, LVDS or MIPI_DSI could be used. To use LVDS, these are required:
- X-IMX-LVDS-HDMI convert board
- Monitor supports HDMI input
To use MIPI_DSI, these are required:
- X-IMX-MIPI-HDMI convert board
- Monitor supports HDMI input

Board settings
==============
If use MX8_DSI_OLED1, connect J1 and MX8_DSI_OLED1 board.
If use monitor to display through MIPI DSI, connect J1 and X-IMX-MIPI-HDMI board, and connect
the X-IMX-MIPI-HDMI convert board with the monitor.
If use monitor to display through LVDS, connect J1 and X-IMX-LVDS-HDMI board, and connect
the X-IMX-LVDS-HDMI convert board with the monitor.

Prepare the Demo
================
1.  Connect 12V power supply and J-Link Debug Probe to the board, switch SW3 to power on the board.
2.  Connect a micro USB cable between the host PC and the J11 USB port on the cpu board.
3.  Open a serial terminal with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
4.  Download the program to the target board.
5.  Launch the debugger in your IDE to begin running the example.

If use monitor to display through MIPI DSI, change
    #define APP_DISPLAY_EXTERNAL_CONVERTOR 0
    to
    #define APP_DISPLAY_EXTERNAL_CONVERTOR 1
    in dpu_example.h.

If use monitor to display through LVDS, change
    #define APP_DISPLAY_EXTERNAL_CONVERTOR 0
    to
    #define APP_DISPLAY_EXTERNAL_CONVERTOR 1
    and change
    #define DPU_EXAMPLE_DI DPU_DI_MIPI
    to
    #define DPU_EXAMPLE_DI DPU_DI_LVDS
    in dpu_example.h.

Running the demo
================
When the example runs successfully, you can see the rectangles and diamonds
moving in the screen.

NOTE: Before load and run the project, press SW3 until D3 is off, then press
SW3 until D3 is on. This perform a clean power on.
Customization options
=====================

