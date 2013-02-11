#pragma once

#import "color4.h"
#import "vector3.h"
#import "vector2.h"
#import "matrix4x4.h"


class ofx3DBaseLoader{

	public:
		ofx3DBaseLoader(){
			hasTexture = false;
		}
		virtual void loadModel(string model, float scale = 1.0){}
		virtual void loadModel(string model){}
		virtual ~ofx3DBaseLoader(){}
		virtual void draw(){ printf("hello\n"); }

		bool hasTexture;

};
