This is an SFSU research project that combines efforts from Dr. Xiaorong Zhang and the Intelligent Computing and Embedded Systems Lab, Dr. Zhuwei Qin and the Mobile and Intelligent Computing Lab, and Dr. David Quintero and the Controls for Assistive and Rehabilitation Robotics Lab. 
This project overview is building on information on master thesis of Yuriah Lydon (2023), aims to develop a low-cost, assistive robotic exoglove to help post-stroke patients regain independence in their daily lives. The glove integrates multiple control systems to provide a flexible and responsive interface tailored to the needs of the user.

Background and Motivation

Stroke Impact: Annually, around 15 million people suffer from a stroke, and approximately half of the survivors experience hemiparesis, which impairs muscle strength on one side of the body.

Rehabilitation Challenges: Standard rehabilitation for hemiparesis is often expensive and inaccessible, particularly for patients in remote areas. Additionally, the process can be lengthy, delaying noticeable improvements and reducing patients' independence during recovery.

Need for Affordable Solutions: Most commercial rehabilitation devices are costly and mainly available in medical facilities. There is a critical need for affordable solutions that can assist users in their daily activities before full recovery.

Existing Technologies and Their Limitations

EMG Control: While effective in determining movement intent, EMG systems can be slow and struggle to recognize multiple gestures with high accuracy.

Computer Vision (CV): Useful for object detection, but CV technology can face challenges with occlusion and varying environmental conditions.

Voice Control: Provides a straightforward interface but is less practical in noisy environments and for frequent use.

Proposed System

The project involves designing and implementing an embedded system with four primary modules:

EMG Control Module: Utilizes an ESP-32 microcontroller and sEMG sensors to detect muscle activity, assisting with grasp and release actions.

CV Control Module: Employs an NVIDIA Jetson Nano to process video input for object detection, enabling smooth adjustment of the glove as it approaches or moves away from an object.

Voice Control Module: An Android app allows users to select grasp types via voice commands, which are transmitted to the glove via Bluetooth.

Glove Control Module: Uses servos and an Arduino ATMega 2560 to actuate the glove's fingers based on inputs from the EMG, CV, and voice control modules.

Design Details

Voice Control Module: Processes commands through an Android app, sending them to the glove control module via Bluetooth to select the type of grasp.

EMG Control Module: Detects muscle contractions with sensors placed on the forearm, analyzing them to determine hand states (open, closed, or relaxed).

CV Control Module: Uses a deep learning model to process video input, adjusting glove movements based on proximity to objects.

Glove Control Module: Integrates inputs from the voice, EMG, and CV modules to control the servos that move the glove’s fingers, ensuring smooth and responsive movements.

Research Challenges and Directions

Gesture Recognition: Enhancing the accuracy and range of gestures recognized by the EMG control module.

Environment Adaptation: Improving the CV module’s performance under varying conditions and with object occlusion.

Robustness: Developing a more robust and intuitive control interface that integrates inputs from all three modules seamlessly.

Conclusion

The project seeks to deliver an affordable, portable solution for stroke rehabilitation that is accessible to a broader population, especially those in remote areas. By integrating multiple sensing and control strategies, the exoglove aims to offer a more natural and intuitive user experience, potentially accelerating the rehabilitation process and enhancing the quality of life for post-stroke patients.
