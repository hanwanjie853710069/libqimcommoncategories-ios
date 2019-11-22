//
//  UIImage+STIMUtility.h
//  QunariPhone
//
//  Created by 姜琢 on 13-6-8.
//  Copyright (c) 2013年 Qunar.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (STIMUtility)
- (UIImage *)stimDB_sdImage;
+ (UIImage *)stimDB_imageFromColor:(UIColor *)color;
+ (UIImage *)stimDB_imageWithColor:(UIColor *)color size:(CGSize)size;
- (UIImage *)stimDB_getSubImage:(CGRect)rect;
- (UIImage *)stimDB_scaleToSize:(CGSize)size;
+ (UIImage *)stimDB_TransformtoSize:(CGSize)size image:(UIImage *)image;

- (UIImage *)stimDB_imageWithMaxLength:(CGFloat)sideLenght;

+ (CGSize)stimDB_getImageSizeWithURL:(id)imageURL;

+ (UIImage *)stimDB_screenShotInWindow NS_EXTENSION_UNAVAILABLE_IOS("STIM_EXTENSION");

+ (NSString *)stimDB_contentTypeForImageData:(NSData *)data;

+ (UIImage *)stimDB_grayscaleImage: (UIImage *) image;

+ (BOOL)stimDB_imageHasAlpha: (UIImage *) image;

+ (NSString *)stimDB_image2DataURL: (UIImage *) image;

+ (UIImage *)stimDB_imageNamed:(NSString *)name;

- (UIImage*)stimDB_imageByScalingAndCroppingForSize:(CGSize)targetSize;

+ (UIImage *)stimDB_imageWithColor:(UIColor *)color
                           size:(CGSize)size
                           text:(NSString *)text
                 textAttributes:(NSDictionary *)textAttributes
                       circular:(BOOL)isCircular;

@end
