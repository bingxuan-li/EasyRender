# EasyRender
This renderer is developed based on the OptiX 8.0 architecture. It supports for pbrt-v3 scene formats and Disney Principled Materials. We also implemented physically based ray tracing algorithms including path tracing and bidirectional path tracing to render high-quality images in multiple scenes. 



## Dependencies
+ [spdlog](https://github.com/gabime/spdlog), please specify `-DSPDLOG_USE_STD_FORMAT` when built with CMake. 
+ [re2](https://github.com/google/re2)
+ [glm](https://github.com/g-truc/glm)
+ OptiX, CUDA for OptiX backend.

We also provide `vcpkg.json` for those who use vcpkg as package manager, but you may specify cmake options yourself when you install packages.



## Gallery

![intro-glass-of-water-](C:\Users\bl3912\Desktop\图片\图片\c1\intro-glass-of-water-.png)

![intro-kitchen](C:\Users\bl3912\Desktop\图片\图片\c1\intro-kitchen.png)

![kitchen-AO-5.0s-[Wed May 15 10_42_39 2024]](C:\Users\bl3912\Desktop\图片\图片\src\kitchen-AO-5.0s-[Wed May 15 10_42_39 2024].png)

![intro-staircase](C:\Users\bl3912\Desktop\图片\图片\c1\intro-staircase.png)

![dragon-color-PathTracing-60.0s-[Tue May 14 17_50_41 2024]](C:\Users\bl3912\Desktop\图片\图片\src\dragon-color-PathTracing-60.0s-[Tue May 14 17_50_41 2024].png)

![dragon-glass-PathTracing-60.0s-[Tue May 14 17_51_43 2024]](C:\Users\bl3912\Desktop\图片\图片\src\dragon-glass-PathTracing-60.0s-[Tue May 14 17_51_43 2024].png)

![dragon-metal-black-PathTracing-60.0s-[Tue May 14 17_52_46 2024]](C:\Users\bl3912\Desktop\图片\图片\src\dragon-metal-black-PathTracing-60.0s-[Tue May 14 17_52_46 2024].png)
