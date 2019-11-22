//
//  UIImage+rotate.h
//  weibosdk
//
//  Created by Minwen Yi on 3/23/12.
//  Copyright 2012 Tencent. All rights reserved.
//

#define degreesToRadians(x) (M_PI * (x) / 180.0)

#import <UIKit/UIKit.h>

@interface UIImage (STIMRotate)

-(UIImage*)stimDB_rotateImage:(UIImageOrientation)orient;

/**
 *	@brief	Create a partially displayed image
 *
 *	@param 	percentage 	This defines the part to be displayed as original
 *	@param 	vertical 	If YES, the image is displayed bottom to top; otherwise left to right
 *	@param 	grayscaleRest 	If YES, the non-displaye part are in grayscale; otherwise in transparent
 *
 *	@return	A generated UIImage instance
 */
- (UIImage *)stimDB_partialImageWithPercentage:(float)percentage vertical:(BOOL)vertical grayscaleRest:(BOOL)grayscaleRest;
- (UIImage *)stimDB_grayImage;

@end
