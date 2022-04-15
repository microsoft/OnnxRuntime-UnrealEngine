<img width="600" alt="image" src="https://user-images.githubusercontent.com/46505951/159554721-a8db2b64-ee6e-416f-8008-aa08c077b177.png">

This code sample is to show you how to use the new Neural Network Inference (NNI) Plugin in Unreal Engine 5 which implements [ONNX Runtime](https://onnxruntime.ai/) to allow you to add ML Models in your projects. ONNX Runtime is a library to optimize and accelerate machine learning inferencing.

<img width="600" alt="image" src="https://user-images.githubusercontent.com/46505951/159556124-9e714170-c4c1-40e2-ac85-20e214912eb0.png">

We are using open source models from the ONNX model zoo to apply a style transform to the scene during game play. Check out the before and after pictures below to see how one of the models is able to stylize the scene.

Before:
<img width="991" alt="image" src="https://user-images.githubusercontent.com/46505951/162550184-0ed88615-2dae-4b9f-a429-06ce668169f5.png">

After:
<img width="997" alt="image" src="https://user-images.githubusercontent.com/46505951/162550233-018c0959-febd-4909-bc2e-0ffb8dd6368f.png">


# Prerequisites
- [Unreal 5](https://www.unrealengine.com/unreal-engine-5)
    - Check to make sure you have the [minimum hardware and software requirements](https://docs.unrealengine.com/5.0/en-US/hardware-and-software-specifications-for-unreal-engine/) to run UE. 
    - Installing UE5 can take hours depending on your network and hardware. Please see the UE docs for information on [how to install UE5](https://docs.unrealengine.com/5.0/installing-unreal-engine/)

- [Visual Studio](https://visualstudio.microsoft.com/downloads/)
    - Visual Studio 2019 v16.11.5 or later (recommended)
    - Visual Studio 2022

# How to run this project
- Open the Epic Game Launcher and launch Unreal 5
<img width="985" alt="image" src="https://user-images.githubusercontent.com/46505951/162548169-28a64ea5-3da0-4d06-a443-8083d56da4da.png">

- Browse to the location that you cloned the project.
- Select the `FPStyleTransfer.uproject` file and click open. This will load the same project.
 <img width="890" alt="image" src="https://user-images.githubusercontent.com/46505951/162548380-b6d5c3ad-0dc1-4982-b99d-2b0327b2c2a4.png">
 
- Once the project is loaded click play to see the project work!

<img width="1271" alt="image" src="https://user-images.githubusercontent.com/46505951/163624383-b848e76c-9c7f-4e1c-b102-5d1bf1f93e75.png">
<img width="1278" alt="image" src="https://user-images.githubusercontent.com/46505951/163624882-bcff90cf-b2d6-424f-90eb-f1127f82d4da.png">



### Open the solution in Visual Studio.
- Browse to the location that you cloned the project.
- Open the `FPStyleTransfer.sln` file.
<img width="1274" alt="image" src="https://user-images.githubusercontent.com/46505951/163624778-3ae5479a-b9d7-42eb-9514-9f6a6c883083.png">

- Hit F5 to run the project.
- Click play to see the project work!
<img width="1271" alt="image" src="https://user-images.githubusercontent.com/46505951/163624383-b848e76c-9c7f-4e1c-b102-5d1bf1f93e75.png">
<img width="1278" alt="image" src="https://user-images.githubusercontent.com/46505951/163624882-bcff90cf-b2d6-424f-90eb-f1127f82d4da.png">


# Resources

Grab open source models to add to your project:
- [ONNX Model Zoo](https://github.com/onnx/models)
- [Huggingface Models](https://huggingface.co/models)

Connect with ORT on Social!

- [Twitter](https://twitter.com/onnxruntime)
- [YouTube](https://www.youtube.com/onnxruntime)
- [Linkedin](https://www.linkedin.com/company/77691267/admin/)


