# Lambertian Shading Model

#### 0. 음영(Shading) 처리 기본 개념 이해
- 빛에 의하여 색상이 밝아지거나 어두워 지는 것. 
- 6면체 큐브도 단일 색상으로 표현되면 색상만 표현되기 때문에 2차원으로 보임.
#### 1. Lamertian Shading Model
##### 기초적인 빛(Light)의 종류

* Direction Light 
  * Direction Light는 무한히 멀리 떨어진 곳에 있다고 가정하고 `모두 평행한` 광선을 쏘는 빛.
  * `태양`을 표현하기 적합함.
 
* Point Light
  * 어떠한 지점을 기준으로 `모든 방향`으로 `동일한 세기`의 빛을 쏘는 빛. 
  * `전구`와 같은 광원을 표현하기에 적합.  
* Spot Light 
  *  어떠한 지점으로부터 `특정 방향`으로 `원뿔 모양`의 빛을 쏜다.
  *  `손전등`과 같은 광원을 표현
     
#### 2. Normal Vector 
#### 3. Vector 내적(DotProduct) 
#### 4. 큐브의 Vertex.를 Normal을 포함하여 정의하고 PixelShader 에서 Light Direction 으로 Cube의 음영처리  

